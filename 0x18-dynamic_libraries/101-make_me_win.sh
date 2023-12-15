#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Sebo26/alx-low_level_programming/master/0x18-dynamic_libraries/libnumbers.so
export LD_PRELOAD="$PWD/../libnumbers.so"
