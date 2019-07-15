# **DEPTH PERCEPTION USING STEREO VISION** 

Estimation of dense depth information of the surroundings is required in applications like navigation, sensing and 3D modelling of environment, path planning, obstacle avoidance, surveillance and so on for intelligent robots, drones, autonomous vehicles etc. Stereo vision based depth perception is a stereoscopic ranging technique, useful to estimate the 3D profile of the scene from the 2D stereo image pair. Depth is perceived by computing the disparity from inter image correspondence, of the stereo image pair, which is highly computational intensive and achieving this in real time is a greatly challenging task. Specifically, census transform and sum of absolute difference (SAD) algorithms are tested on various platforms to test their accuracy and explore their deployability on Zedboard FPGA.

## Census Transform on Python 

`python_census.py` is a Python model of the Census transform stereo algorithm, useful for evaluating accuracy of a given parameter set.

The algorithm for census transform is as follows:

1. For a pixel in the reference image, find it’s census vector 
  a. For calculating the census vector, take a window around the pixel.
  b. Compare every pixel in the window to the center pixel. If its intensity value is greater than the center pixel, assign it as     one if greater than center or 0 if lesser.                  
  c. Make a vector consisting of 0s and 1s from above assignments
2. Calculate the census vectors for the corresponding pixels in the right image. The number of pixels for which the census vector is to be calculated is equal to the search range decided by the user.
3. Compute the Hamming Distances for Census vectors in the right image with Census vector in the left image.
4. The index of the window corresponding to the Census vector with minimum hamming distance is the disparity

To run:

<code>python_census.py -l img_left.png -r img_right.png -o img_out.png</code>

It runs with Numpy and Pillow under Python 3. Image formatting is handled by PIL. 

## Sum of absolute differences on C 

`pgmIO.cpp` is used for reading in pair of stereo images in PGM format and storing in linear array for further processing. 

`stereoGold.cpp` is the primary code for stereo-correspondence computation. The images are padded with a boundary of zeroes in order minimise loss of data from the edge. Following padding, the search range can be set in the code (has to be between 0-255). 
With every pass, the target image is shifted to the right and SAD is calculated. The shift for the minimum SAD value accumulated from the window over the center pixel is stored as the disparity. Histogram equalization is done before outputting array to reconstruct disparity image. 

To run: 

Compile code with gcc and run. 


