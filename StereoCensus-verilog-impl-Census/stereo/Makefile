SHELL = /bin/bash

TESTS = basic_test gen_test

check: $(TESTS)

# Arguments to pass to Verilator
OBJ_DIR = obj_dir
# GEN_DIR = generated
GEN_DIR = census_fifo_320
VARGS = -Wall -I../lib -I../census -I$(GEN_DIR)

#search range=80
argmin_80.v: ../census/argmin_helper.v ../census/argmin_stage.v ../census/argmin_gen.py
	mkdir -p $(GEN_DIR)
	python3 ../census/argmin_gen.py --num_inputs=80 > $(GEN_DIR)/argmin_80.v

argmin_100.v: ../census/argmin_helper.v ../census/argmin_stage.v ../census/argmin_gen.py
	mkdir -p $(GEN_DIR)
	python3 ../census/argmin_gen.py --num_inputs=100 > $(GEN_DIR)/argmin_100.v

pop_count_9.v: ../census/pop_count_gen.py
	mkdir -p $(GEN_DIR)
	python3 ../census/pop_count_gen.py --width=400 > $(GEN_DIR)/pop_count_9.v

#ceil(log2(search_range))=7 width=100
pop_count_7.v: ../census/pop_count_gen.py
	mkdir -p $(GEN_DIR)
	python3 ../census/pop_count_gen.py --width=100 > $(GEN_DIR)/pop_count_7.v

test_data:
	./to_dat.py ../data/cones/im2.png > $(GEN_DIR)/right
	./to_dat.py ../data/cones/im6.png > $(GEN_DIR)/left

test_data_320:
	./to_dat.py ../data/cones/im2_320.png > $(GEN_DIR)/right
	./to_dat.py ../data/cones/im6_320.png > $(GEN_DIR)/left

# b=bitwidth (no of bits / pixel) 
# d=search_range h,w=window_size l=image_width
stereo.v: census_gen.py 
	./census_gen.py -b 8 -d 80 -h 11 -w 11 -l 640 > $(GEN_DIR)/stereo.v

stereo320.v: census_gen.py 
	./census_gen.py -b 8 -d 80 -h 11 -w 11 -l 320 > $(GEN_DIR)/stereo320.v

# w=image_width scale=intensity_scale=255/search_range offset=image_width-search_range
offset=560 #640-80
scale=3.1875 #255/80
gen_test: stereo.v argmin_80.v pop_count_7.v gen_test.cpp test_data
	verilator $(VARGS) -cc $(GEN_DIR)/stereo.v --exe gen_test.cpp
	make -j -f Vstereo.mk -C $(OBJ_DIR)
	$(OBJ_DIR)/Vstereo $(GEN_DIR)/left $(GEN_DIR)/right	> $(GEN_DIR)/gen_out.dat
	./from_dat.py -w 640 -i $(GEN_DIR)/gen_out.dat --scale=$(scale) --offset=$(offset) -o $(GEN_DIR)/gen.png

# w=image_width scale=intensity_scale=255/search_range offset=image_width-search_range
offset=270 #320-80
scale=3.1875 #255/80
gen_test320: gen_test320.cpp test_data_320
	
	# verilator $(VARGS) -cc $(GEN_DIR)/top_fifo_320.v --exe gen_test320.cpp
	verilator --trace -Wall -cc census_fifo_320/top_fifo_320.v  -Icensus_fifo_320/ --exe gen_test320.cpp

	make -j -f Vtop_fifo_320.mk -C $(OBJ_DIR)
	# cd to obj_dir
	# make -f Vtop_fifo_320.mk

	$(OBJ_DIR)/Vtop_fifo_320 $(GEN_DIR)/left $(GEN_DIR)/right > $(GEN_DIR)/gen_out.dat
	./from_dat.py -w 320 -i $(GEN_DIR)/gen_out.dat --scale=$(scale) --offset=$(offset) -o $(GEN_DIR)/gen.png
	#./obj_dir/Vtop_fifo_320 generated/left generated/right


clean: 
	rm -rf $(OBJ_DIR)
	rm -rf $(GEN_DIR)
