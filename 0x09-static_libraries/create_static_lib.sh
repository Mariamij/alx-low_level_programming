#!/bin/bash
gcc -Wall -Werror -Werror -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
