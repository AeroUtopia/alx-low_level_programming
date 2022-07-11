#!/bin/bash
wget -q -O /tmp/cheatme.so https://github.com/AeroUtopia/alx-low_level_programming/tree/master/0x18-dynamic_libraries
export LD_PRELOAD=/tmp/cheatme.so
