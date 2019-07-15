# **DEPTH PERCEPTION USING STEREO VISION** 

Estimation of dense depth information of the surroundings is required in applications like navigation, sensing and 3D modelling of environment, path planning, obstacle avoidance, surveillance and so on for intelligent robots, drones, autonomous vehicles etc. Stereo vision based depth perception is a stereoscopic ranging technique, useful to estimate the 3D profile of the scene from the 2D stereo image pair. Depth is perceived by computing the disparity from inter image correspondence, of the stereo image pair, which is highly computational intensive and achieving this in real time is a greatly challenging task. Specifically, census transform and sum of absolute difference (SAD) algorithms are tested on various platforms to test their accuracy and explore their deployability on Zedboard FPGA.

## ** Census Transform on Python** 

`python_census.py` is a Python model of the Census transform stereo algorithm, useful for evaluating accuracy of a given parameter set. 

To run:

<code>python_census.py -l img_left.png -r img_right.png -o img_out.png</code>

It runs with Numpy and Pillow under Python 3
