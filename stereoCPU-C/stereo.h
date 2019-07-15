// correlation methods
// 1: SSD, sum of squared differences
// 2: SAD, sum of abosolute differences
//
// Two methods should get the same disparity,
// but performance may be different,
// depending on the spec of the machine.
#define CORRELATION 1

// window size for SSD or SAD
#define WIN_SIZE 11

// Warning: the MAX_SHIFT should be less than or equal to 255
#define MAX_SHIFT 35

// Number of bins in histogram
#define HIST_BIN 256

// Line buffer size for read write pgm comments
#define LINE_BUFFER_SIZE 100
