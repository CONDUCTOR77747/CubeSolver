# CubeSolver
Program for solving a Rubik's Cube 3x3x3 using CFOP.
AVG moves: 62 (Tested with 10000 scrambles)

# Using
MVS compiler is recommended.
Download all files, compile and run the program.

# Cube Representation
There is a Class "Cube".
Main methods of this class are:
- PrintCube(); //Prints Cube in CMD
- SetScramble(string Scramble); //Sets scramble to the cube object
- PrintBoolIsSolved(); //Prints True or False in CMD

# Solve Function:
string SolveCube(Cube objCube, string Mode); //Takes cube object and program mode. This function returns solution in string format

# Program modes for "SolveCube" function:
- "Gen" //Uses "theriley106/C-ScrambleGenerator" for generating random scramble
- "File" //Uses "Algorithms/Scrambles.txt" File with scrambles
- "Default" //Manually scramble input in the source code
- "CMD" //Scramble input via CMD

You can choose mode via switch in CubeSolver.cpp
