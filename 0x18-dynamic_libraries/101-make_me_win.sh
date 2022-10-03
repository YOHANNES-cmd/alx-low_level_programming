#!/bin/bash
wget -P /tmp/ https://github.com/YOHANNES-cmd/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so.2
