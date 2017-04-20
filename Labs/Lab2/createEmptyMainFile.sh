#!/bin/sh

# Write a script named “createEmptyMainFile.sh” that automatically create a source file 
# (“main.cc”), in the working directory, that contains the content of 
# <Firstname>_<SID>.txt” at the top, and its last two lines are:
# int main(int argc, const char** argv)
# {  }

touch main.cc
cat emilio_861152483.txt > main.cc
echo "int main(int argc, const charr ** argv)" >> main.cc
echo "{  }" >> main.cc

