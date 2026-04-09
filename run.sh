#!/bin/bash
# Run a given units program
# Usage: bash run.sh 2160A.cpp
# This will run 2160A.cpp program

FILE=$1
if [ "$FILE" == "" ]; then
    echo "ERROR: First argument cannot be empty string";
    exit 1;
fi

echo running: $FILE

g++ --std=c++11 $FILE -o a.out && ./a.out

