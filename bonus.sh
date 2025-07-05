#!/bin/bash
gcc -E bon.c -o bon.i && gcc -S bon.i -o bon.s && gcc -c bon.s -o bon.o && gcc bon.o -o bon

