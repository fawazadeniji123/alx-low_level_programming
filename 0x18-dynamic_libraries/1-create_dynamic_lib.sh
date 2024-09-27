#!/bin/bash

# Create a dynamic library from all .c files in the current directory

# Get all .c files in the current directory
SOURCE_FILES=$(ls *.c)

# Compile the .c files into position-independent object files (.o)
gcc -c -fPIC $SOURCE_FILES

# Create the dynamic library called liball.so from the object files
gcc -shared -o liball.so *.o


