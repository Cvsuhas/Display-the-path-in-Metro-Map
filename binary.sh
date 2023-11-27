#! /bin/bash

echo "generating executable for Display-the-path-in-Metro-Map"

if [ ! -d "binary" ]; then
	mkdir binary
fi

cd binary
rm -rf *
cmake ..
make

echo "**Build Successfull"

echo "to run the executable go to binary directory and execute ./display_map"
