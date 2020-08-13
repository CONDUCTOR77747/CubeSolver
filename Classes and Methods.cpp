#include "Headers/Header.h"

int main()
{
	std::string solve, scr;
	int am;
	Cube Cube1;
	//Choose Mode via switch
	// 1 - ScrGen Mode
	// 2 - File Mode
	// 3 - Default Mode
	// 4 - CMD Mode (Recommended)
	switch (3)
	{
	case 1:
		//Scramble Generator Mode
		scr = TestViaGenerator();
		std::cout << scr << '\n';
		Cube1.SetScramble(TestViaGenerator());
		Cube1.PrintCube();
		solve = SolveCube(Cube1, "Gen");
		am = Cube1.SetScramble(solve);
		std::cout << "Moves: " << am << '\n';
		std::cout << "Solution: " << solve << '\n';
		Cube1.PrintCube();
		Cube1.PrintBoolIsSolved();
		break;
	case 2:
		//"Scrambles.txt" File Mode
		TestFromFile(10000); //Enter the amount of scrambles in function argument
		break;
	case 3:
		//Default (Manually) Mode
		scr = "URLRUL";
		std::cout << "Scramble: " << scr << '\n';
		Cube1.SetScramble(scr);
		Cube1.PrintCube();
		solve = SolveCube(Cube1, "Default");
		am = Cube1.SetScramble(solve);
		std::cout << "Moves: " << am << '\n';
		std::cout << "Solution: " << solve << '\n';
		Cube1.PrintCube();
		Cube1.PrintBoolIsSolved();
		break;
	case 4:
		//CMD Mode
		TestFromCMD();
		break;
	}
}
//ProblemScrambles
//