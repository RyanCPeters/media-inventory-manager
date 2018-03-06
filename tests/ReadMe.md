Place all testing related files in this folder.
===

This includes any customized input files meant to extend range of conditions 
demonstrated in the data4*.txt files under the `/media-inventory-manager/docs/` folder.


The execution command for testing from simple command line is:

g++ -std=c++14 -g -O2 -Wall -Wextra -o grindass4 tests/alltests.cpp src/movie_genres/*.cpp