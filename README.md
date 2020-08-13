# CubeSolver
Programm for solving a Rubik's Cube 3x3x3 using CFOP.

# Cube Representation
There is a Class "Cube".
Main methods of this class are:
- PrintCube(); //Prints Cube in CMD
- SetScramble(string Scramble); //Sets scramble to the cube object
- PrintBoolIsSolved(); //Prints True or False in CMD

# Solve Function:
string SolveCube(Cube objCube, string Mode); //Takes cube object and programm mode

# Programm modes for "SolveCube" function:
1 - "Gen" //Uses "theriley106/C-ScrambleGenerator" for generating scramble and solves the cube
2 - "File" //Uses "Algorithms/Scrambles.txt" File with scrambles
3 - "Default" //Manually scramble input in the source code
4 - "CMD" //Scramble input via CMD

You can choose mode via switch in CubeSolver.cpp
