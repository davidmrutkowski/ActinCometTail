# ActinCometTail
Brownian dynamics code that simulates a lamellipodium at the discrete filament level undergoing retrograde flow in the presence of a nascent focal adhesion. This code was developed for the simulations in Xu et al., Sci. Adv., https://doi.org/10.1101/2024.02.09.579714

Compilation using g++: g++ -O3 -fopenmp -o main main.cpp *.cpp

Input parameter file (input.txt): This file lists various parameters used by the simulation. In particular the numThreads parameter of 10 should be changed to the number of threads the code is desired to be run on and should not exceed the number of threads available on a given computer.
Command to run code: ./main input.txt

Restart from previously run simulation: Add the following lines to input.txt: 
positions last###.xyz 
bonds last###.bnd
angles last###.xyz
Change the outputName parameter to a new name to keep from overwriting previous output.
