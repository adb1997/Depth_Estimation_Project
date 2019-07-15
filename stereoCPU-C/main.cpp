// Utilities and system includes
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// includes, headers
#include "stereo.h"


/******************************************************************
 *
 * Function list
 *
 *****************************************************************/

// CPU code for stereo vision 
extern "C"
void computeGold(unsigned char* h_inLeft, unsigned char* h_inRight, unsigned char * gold_outLeft, int imageHeight, int imageWidth, int grayMax);

// read in PGM image
extern "C"
int readPGM(unsigned char **image, char *filename,		\
	    int *imageWidth, int *imageHeight, int *grayMax);

// write out PGM image
extern "C"
int writePGM(unsigned char *image, char *filename,		\
	     int imageWidth, int imageHeight, int grayMax);

// sample name
static char *sSDKsample = "stereo";

////////////////////////////////////////////////////////////////////////////////
// declaration, forward
void runTest(int argc, char** argv);
   
////////////////////////////////////////////////////////////////////////////////
// Program main
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv){
  printf("[ %s ]\n", sSDKsample);

  // everything is here
  runTest(argc, argv);

}

////////////////////////////////////////////////////////////////////////////////
//! Run a simple test for CUDA
////////////////////////////////////////////////////////////////////////////////
void runTest(int argc, char** argv){
 
  /******************************************************************
   *
   * Starting the image IO function
   *
   *****************************************************************/

  // pointer to the left image 
  unsigned char *h_inLeft;
  // pointer to the right image
  unsigned char *h_inRight;
  // image width (original width without padding)
  int imageWidth;
  // image height (original height without padding)
  int imageHeight;
  // max gray value of the PGM, usually is 255.
  int grayMax;
  // path and file name of the left image
  char inLeftName[100]="./dataset/imLeft640.pgm";
  // path and file name of the right image
  char inRightName[100]="./dataset/imRight640.pgm";
  // path and file name of the disparity map for the left image (CPU)
  char outLeftGoldName[100]="./dataset/outLeftGold.pgm";

  // read left image and allocate memory space for it
  readPGM(&h_inLeft, inLeftName,			\
	  &imageWidth, &imageHeight, &grayMax);
  // read right image and allocate memory space for it
  readPGM(&h_inRight, inRightName,			\
	  &imageWidth, &imageHeight, &grayMax);
    
  /******************************************************************
   *
   * Allocate device, host memory, and perform memory copy
   *
   *****************************************************************/

  // allocate device memory for disparity
  unsigned int size_outLeft = imageHeight * imageWidth;
  unsigned int mem_size_outLeft = sizeof(unsigned char) * size_outLeft;


  /******************************************************************
   *
   * Run stereo vision on CPU (gold reference)
   *
   *****************************************************************/
    
  // allocate host memory for the gold result
  unsigned char* gold_outLeft = (unsigned char*) malloc(mem_size_outLeft);

  // ANSI C timer, not precise, but enough for CPU timing
  clock_t start, end;
  double elapsed;  

  //start timer
  start = clock();

  // compute the gold disparity on the host (CPU)
  computeGold(h_inLeft, h_inRight, gold_outLeft, imageHeight, imageWidth, grayMax);

  // end timer
  end = clock();
  elapsed = (double)(end - start) / CLOCKS_PER_SEC;
  printf("CPU stereo vision time: %f s\n", elapsed);

  // write gold disparity map to the output file.
  writePGM(gold_outLeft, outLeftGoldName,		\
	   imageWidth, imageHeight, grayMax);


  // clean up memory
  free(h_inLeft);
  free(h_inRight);
  free(gold_outLeft);

}

