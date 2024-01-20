#!/bin/bash
gcc -L . -shared -fPIC *.c -o liball.so
