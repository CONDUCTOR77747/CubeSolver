#include <iostream>
#include <string>
#include <queue>
#include <vector>

#define W 1
#define O 2
#define Y 3
#define R 4
#define G 5
#define B 6

int CrossColor = 3; //Global Variable
//Additional Functions
void PrintTemplateSolvedState()
{
	std::cout << "      " << "W" << " " << "W" << " " << "W" << std::endl;
	std::cout << "      " << "W" << " " << "W" << " " << "W" << std::endl;
	std::cout << "      " << "W" << " " << "W" << " " << "W" << std::endl;
	std::cout << "O" << " " << "O" << " " << "O" << " " << "G" << " " << "G" << " " << "G" << " " << "R" << " " << "R" << " " << "R" << " " << "B" << " " << "B" << " " << "B" << "\n";
	std::cout << "O" << " " << "O" << " " << "O" << " " << "G" << " " << "G" << " " << "G" << " " << "R" << " " << "R" << " " << "R" << " " << "B" << " " << "B" << " " << "B" << "\n";
	std::cout << "O" << " " << "O" << " " << "O" << " " << "G" << " " << "G" << " " << "G" << " " << "R" << " " << "R" << " " << "R" << " " << "B" << " " << "B" << " " << "B" << "\n";
	std::cout << "      " << "Y" << " " << "Y" << " " << "Y" << std::endl;
	std::cout << "      " << "Y" << " " << "Y" << " " << "Y" << std::endl;
	std::cout << "      " << "Y" << " " << "Y" << " " << "Y";
	std::cout << "\n";
}
void ColorPrint(int Color)
{
	switch (Color)
	{
	case 1:
		std::cout << "W";
		break;
	case 2:
		std::cout << "O";
		break;
	case 3:
		std::cout << "Y";
		break;
	case 4:
		std::cout << "R";
		break;
	case 5:
		std::cout << "G";
		break;
	case 6:
		std::cout << "B";
		break;
	}
}
void PrintSixSpaces()
{
	std::cout << "      ";
}
void PrintSpace()
{
	std::cout << " ";
}
void PrintNewLine()
{
	std::cout << "\n";
}
void PrintTest()
{
	std::cout << "test\n";
}
void BoolCheck(bool a)
{
	if (a)
		std::cout << "True" << "\n";
	else
		std::cout << "False" << "\n";
}
bool AreValuesEqual(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				if (a == e)
				{
					if (a == f)
					{
						if (a == g)
						{
							if (a == h)
							{
								if (a == i)
								{
									return true;
								}
								else
									return false;
							}
							else
								return false;
						}
						else
							return false;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c, int d, int e, int f, int g, int h)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				if (a == e)
				{
					if (a == f)
					{
						if (a == g)
						{
							if (a == h)
							{
								return true;
							}
							else
								return false;
						}
						else
							return false;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c, int d, int e, int f, int g)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				if (a == e)
				{
					if (a == f)
					{
						if (a == g)
						{
							return true;
						}
						else
							return false;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c, int d, int e, int f)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				if (a == e)
				{
					if (a == f)
					{
						return true;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c, int d, int e)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				if (a == e)
				{
					return true;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c, int d)
{
	if (a == b)
	{
		if (a == c)
		{
			if (a == d)
			{
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
bool AreValuesEqual(int a, int b, int c)
{
	if (a == b)
	{
		if (a == c)
		{
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

//Cube Representation
class Corner
{
	//Clockwise Reading
	//Corner_ColorN
private:
	int C_C1;
	int C_C2;
	int C_C3;

public:
	int GetC_C1()
	{
		return C_C1;
	}
	int GetC_C2()
	{
		return C_C2;
	}
	int GetC_C3()
	{
		return C_C3;
	}
	void SetC_C1(int C_Value)
	{
		C_C1 = C_Value;
	}
	void SetC_C2(int C_Value)
	{
		C_C2 = C_Value;
	}
	void SetC_C3(int C_Value)
	{
		C_C3 = C_Value;
	}
	void PrintC_C1()
	{
		ColorPrint(C_C1);
	}
	void PrintC_C2()
	{
		ColorPrint(C_C2);
	}
	void PrintC_C3()
	{
		ColorPrint(C_C3);
	}
	void SetCorner(int C_Value1, int C_Value2, int C_Value3)
	{
		C_C1 = C_Value1;
		C_C2 = C_Value2;
		C_C3 = C_Value3;
	}
	void PrintCorner()
	{
		ColorPrint(C_C1);
		ColorPrint(C_C2);
		ColorPrint(C_C3);
	}
	bool IsEqualTo(Corner a)
	{
		if (GetC_C1() == a.GetC_C1() && GetC_C2() == a.GetC_C2() && GetC_C3() == a.GetC_C3())
			return true;
		else
			return false;
	}
};
class Edge
{
	//Clockwise Reading
	//Edge_ColorN
private:
	int E_C1;
	int E_C2;
public:
	int GetE_C1()
	{
		return E_C1;
	}
	int GetE_C2()
	{
		return E_C2;
	}
	void SetE_C1(int E_Value)
	{
		E_C1 = E_Value;
	}
	void SetE_C2(int E_Value)
	{
		E_C2 = E_Value;
	}
	void PrintE_C1()
	{
		ColorPrint(E_C1);
	}
	void PrintE_C2()
	{
		ColorPrint(E_C2);
	}
	void SetEdge(int E_Value1, int E_Value2)
	{
		E_C1 = E_Value1;
		E_C2 = E_Value2;
	}
	void PrintE_CN()
	{
		ColorPrint(E_C1);
		ColorPrint(E_C2);
	}
	bool IsEqualTo(Edge a)
	{
		if (GetE_C1() == a.GetE_C1() && GetE_C2() == a.GetE_C2())
			return true;
		else
			return false;
	}
};
class Center
{
private:
	int Cen_C;
public:
	int GetCenter()
	{
		return Cen_C;
	}
	void PrintCenter()
	{
		ColorPrint(Cen_C);
	}
	void SetCenter(int Cen_Value)
	{
		Cen_C = Cen_Value;
	}
	bool IsEqualTo(Center a)
	{
		if (GetCenter() == a.GetCenter())
			return true;
		else
			return false;
	}
};
class Cube
{
private:
	Corner FRU, FLU, FRD, FLD, BRU, BLU, BRD, BLD;
	Edge FU, FD, FL, FR, BU, BD, BL, BR, RU, RD, LU, LD;
	Center FRONT, UP, BACK, DOWN, RIGHT, LEFT;
	int Cross = 0;

public:
	void SetCrossColor(int a)
	{
		Cross = a;
	}
	int GetCrossColor()
	{
		if (Cross != 0)
			return Cross;
		else
		{
			std::cout << "cross color isn't setted\n";
			return 0;
		}
	}
	void SetSolveState()
	{
		FRU.SetCorner(W, R, G);
		FLU.SetCorner(W, G, O);
		FRD.SetCorner(Y, G, R);
		FLD.SetCorner(Y, O, G);
		BRU.SetCorner(W, B, R);
		BLU.SetCorner(W, O, B);
		BRD.SetCorner(Y, R, B);
		BLD.SetCorner(Y, B, O);
		FU.SetEdge(W, G);
		FD.SetEdge(G, Y);
		FL.SetEdge(O, G);
		FR.SetEdge(G, R);
		BU.SetEdge(W, B);
		BD.SetEdge(B, Y);
		BL.SetEdge(O, B);
		BR.SetEdge(R, B);
		RU.SetEdge(W, R);
		RD.SetEdge(R, Y);
		LU.SetEdge(O, W);
		LD.SetEdge(Y, O);
		FRONT.SetCenter(G);
		UP.SetCenter(W);
		BACK.SetCenter(B);
		DOWN.SetCenter(Y);
		RIGHT.SetCenter(R);
		LEFT.SetCenter(O);
	};
	bool IsSolved()
	{
		if (AreValuesEqual(BLU.GetC_C1(), BU.GetE_C1(), BRU.GetC_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FLU.GetC_C1(), FU.GetE_C1(), FRU.GetC_C1()))
		{
			if (AreValuesEqual(BLU.GetC_C2(), LU.GetE_C1(), FLU.GetC_C3(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), BLD.GetC_C3(), LD.GetE_C2(), FLD.GetC_C2()))
			{
				if (AreValuesEqual(FLU.GetC_C2(), FU.GetE_C2(), FRU.GetC_C3(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FLD.GetC_C3(), FD.GetE_C1(), FRD.GetC_C2()))
				{
					if (AreValuesEqual(FRU.GetC_C2(), RU.GetE_C2(), BRU.GetC_C3(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), FRD.GetC_C3(), RD.GetE_C1(), BRD.GetC_C2()))
					{
						if (AreValuesEqual(BRU.GetC_C2(), BU.GetE_C2(), BLU.GetC_C3(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BRD.GetC_C3(), BD.GetE_C1(), BLD.GetC_C2()))
						{
							if (AreValuesEqual(FLD.GetC_C1(), FD.GetE_C2(), FRD.GetC_C1(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BLD.GetC_C1(), BD.GetE_C2(), BRD.GetC_C1()))
							{
								return true;
							}
							else
								return false;
						}
						else
							return false;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	void PrintBoolIsSolved()
	{
		if (IsSolved())
			std::cout << "Cube is solved" << "\n";
		else
			std::cout << "Cube isn't solved" << "\n";
	}
	bool AreAllCrossesSolved()
	{
		if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()))
		{
			if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()))
			{
				if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()))
				{
					if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()))
					{
						if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()))
						{
							if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()))
							{
								return true;
							}
							else
								return false;
						}
						else
							return false;
					}
					else
						return false;
				}
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	int IsCrossSolved()
	{
		if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()))
		{
			return UP.GetCenter();
		}
		else if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()))
		{
			return LEFT.GetCenter();
		}
		else if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()))
		{
			return FRONT.GetCenter();
		}
		else if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()))
		{
			return RIGHT.GetCenter();
		}
		else if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()))
		{
			return BACK.GetCenter();
		}
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int IsCrossSolved(int a)
	{
		if ((AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter())) && (UP.GetCenter() == a))
		{
			return UP.GetCenter();
		}
		else if ((AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter())) && (LEFT.GetCenter() == a))
		{
			return LEFT.GetCenter();
		}
		else if ((AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter())) && (FRONT.GetCenter() == a))
		{
			return FRONT.GetCenter();
		}
		else if ((AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter())) && (RIGHT.GetCenter() == a))
		{
			return RIGHT.GetCenter();
		}
		else if ((AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter())) && (BACK.GetCenter() == a))
		{
			return BACK.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter())) && (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int IsOneBottomCornerSolved(int a)
	{
		if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int IsOneBottomPairSolved(int a)
	{
		if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int AreTwoBottomPairsSolved(int a)
	{
		if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1(), FLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FLD.GetC_C1(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BRD.GetC_C1(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1(), BRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BRD.GetC_C1(), FLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BLD.GetC_C1(), FRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int AreThreeBottomPairsSolved(int a)
	{
		// 1 - BLD unsolved; 2 - BRD unsolved; 3 - FRD unsolved; 4 - FLD unsolved.
		if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1(), FLD.GetC_C1(), BRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return 1;
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FLD.GetC_C1(), BLD.GetC_C1(), FRD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return 2;
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), BRD.GetC_C1(), BLD.GetC_C1(), FLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (FLD.GetC_C2() == LEFT.GetCenter())
			&& (FLD.GetC_C3() == FRONT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return 3;
		}
		else if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1(), BRD.GetC_C1(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (BLD.GetC_C2() == BACK.GetCenter())
			&& (BLD.GetC_C3() == LEFT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BRD.GetC_C2() == RIGHT.GetCenter())
			&& (BRD.GetC_C3() == BACK.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return 4;
		}
		else
			return 0;
	}
	int AreFourBottomPairsSolved(int a)
	{
		if ((AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2(), FRD.GetC_C1(), FLD.GetC_C1(), BRD.GetC_C1(), BLD.GetC_C1())
			&& (FD.GetE_C1() == FRONT.GetCenter())
			&& (RD.GetE_C1() == RIGHT.GetCenter())
			&& (FRD.GetC_C2() == FRONT.GetCenter())
			&& (FRD.GetC_C3() == RIGHT.GetCenter())
			&& (BD.GetE_C1() == BACK.GetCenter())
			&& (LD.GetE_C2() == LEFT.GetCenter()))
			&& (FR.GetE_C1() == FRONT.GetCenter())
			&& (FR.GetE_C2() == RIGHT.GetCenter())
			&& (FL.GetE_C1() == LEFT.GetCenter())
			&& (FL.GetE_C2() == FRONT.GetCenter())
			&& (BR.GetE_C1() == RIGHT.GetCenter())
			&& (BR.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C2() == BACK.GetCenter())
			&& (BL.GetE_C1() == LEFT.GetCenter())
			&& (DOWN.GetCenter() == a))
		{
			return DOWN.GetCenter();
		}
		else
			return 0;
	}
	int AreTwoBottomCrossPiecesSolved(int a)
	{
		if (AreValuesEqual(DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), DOWN.GetCenter(), RD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter()) && (FD.GetE_C1() == FRONT.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), BD.GetE_C1(), DOWN.GetCenter()) && (FD.GetE_C1() == FRONT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(BD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else
			return 0;
	}
	int AreThreeCrossPiecesSolved()
	{
		if (AreValuesEqual(LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()))
			return UP.GetCenter();

		else if (AreValuesEqual(BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()))
			return LEFT.GetCenter();

		else if (AreValuesEqual(FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()))
			return FRONT.GetCenter();

		else if (AreValuesEqual(FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()))
			return RIGHT.GetCenter();

		else if (AreValuesEqual(BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()))
			return BACK.GetCenter();

		else if (AreValuesEqual(LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()))
			return DOWN.GetCenter();
		else
			return 0;
	}
	int AreThreeCrossPiecesSolved(int a)
	{
		if (AreValuesEqual(LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()) && (UP.GetCenter() == a))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), UP.GetCenter(), RU.GetE_C1(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()) && (UP.GetCenter() == a))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), FU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (FU.GetE_C2() == FRONT.GetCenter()) && (UP.GetCenter() == a))
			return UP.GetCenter();
		else if (AreValuesEqual(BU.GetE_C1(), LU.GetE_C2(), UP.GetCenter(), RU.GetE_C1()) && (BU.GetE_C2() == BACK.GetCenter()) && (LU.GetE_C1() == LEFT.GetCenter()) && (RU.GetE_C2() == RIGHT.GetCenter()) && (UP.GetCenter() == a))
			return UP.GetCenter();

		else if (AreValuesEqual(BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()) && (LEFT.GetCenter() == a))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()) && (LEFT.GetCenter() == a))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), LD.GetE_C2()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (LD.GetE_C1() == DOWN.GetCenter()) && (LEFT.GetCenter() == a))
			return LEFT.GetCenter();
		else if (AreValuesEqual(LU.GetE_C1(), BL.GetE_C1(), LEFT.GetCenter(), FL.GetE_C1()) && (LU.GetE_C2() == UP.GetCenter()) && (BL.GetE_C2() == BACK.GetCenter()) && (FL.GetE_C2() == FRONT.GetCenter()) && (LEFT.GetCenter() == a))
			return LEFT.GetCenter();

		else if (AreValuesEqual(FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()) && (FRONT.GetCenter() == a))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()) && (FRONT.GetCenter() == a))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FD.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FD.GetE_C2() == DOWN.GetCenter()) && (FRONT.GetCenter() == a))
			return FRONT.GetCenter();
		else if (AreValuesEqual(FU.GetE_C2(), FL.GetE_C2(), FRONT.GetCenter(), FR.GetE_C1()) && (FU.GetE_C1() == UP.GetCenter()) && (FL.GetE_C1() == LEFT.GetCenter()) && (FR.GetE_C2() == RIGHT.GetCenter()) && (FRONT.GetCenter() == a))
			return FRONT.GetCenter();

		else if (AreValuesEqual(FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()) && (RIGHT.GetCenter() == a))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()) && (RIGHT.GetCenter() == a))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), RD.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C2() == DOWN.GetCenter()) && (RIGHT.GetCenter() == a))
			return RIGHT.GetCenter();
		else if (AreValuesEqual(RU.GetE_C2(), FR.GetE_C2(), RIGHT.GetCenter(), BR.GetE_C1()) && (RU.GetE_C1() == UP.GetCenter()) && (FR.GetE_C1() == FRONT.GetCenter()) && (BR.GetE_C2() == BACK.GetCenter()) && (RIGHT.GetCenter() == a))
			return RIGHT.GetCenter();

		else if (AreValuesEqual(BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()) && (BACK.GetCenter() == a))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BACK.GetCenter(), BL.GetE_C2(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()) && (BACK.GetCenter() == a))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BD.GetE_C1()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C2() == DOWN.GetCenter()) && (BACK.GetCenter() == a))
			return BACK.GetCenter();
		else if (AreValuesEqual(BU.GetE_C2(), BR.GetE_C2(), BACK.GetCenter(), BL.GetE_C2()) && (BU.GetE_C1() == UP.GetCenter()) && (BR.GetE_C1() == RIGHT.GetCenter()) && (BL.GetE_C1() == LEFT.GetCenter()) && (BACK.GetCenter() == a))
			return BACK.GetCenter();

		else if (AreValuesEqual(LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), DOWN.GetCenter(), RD.GetE_C2(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), BD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (BD.GetE_C1() == BACK.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else if (AreValuesEqual(FD.GetE_C2(), LD.GetE_C1(), DOWN.GetCenter(), RD.GetE_C2()) && (FD.GetE_C1() == FRONT.GetCenter()) && (RD.GetE_C1() == RIGHT.GetCenter()) && (LD.GetE_C2() == LEFT.GetCenter()) && (DOWN.GetCenter() == a))
			return DOWN.GetCenter();
		else
			return 0;
	}
	int IsLastLayerOriented()
	{
		if (AreValuesEqual(FRU.GetC_C1(), FLU.GetC_C1(), BRU.GetC_C1(), BLU.GetC_C1(), FU.GetE_C1(), RU.GetE_C1(), LU.GetE_C2(), BU.GetE_C1(), UP.GetCenter()))
		{
			return UP.GetCenter();
		}
		else
			return 0;
	}
	int IsLastLayerPermuted()
	{
		if (AreValuesEqual(FRU.GetC_C1(), FLU.GetC_C1(), BRU.GetC_C1(), BLU.GetC_C1(), FU.GetE_C1(), RU.GetE_C1(), LU.GetE_C2(), BU.GetE_C1(), UP.GetCenter())
			&& AreValuesEqual(FU.GetE_C2(), FRU.GetC_C3(), FLU.GetC_C2())
			&& AreValuesEqual(RU.GetE_C2(), FRU.GetC_C2(), BRU.GetC_C3())
			&& AreValuesEqual(BU.GetE_C2(), BRU.GetC_C2(), BLU.GetC_C3())
			&& AreValuesEqual(LU.GetE_C1(), FLU.GetC_C3(), BLU.GetC_C2()))
		{
			return UP.GetCenter();
		}
		else
			return 0;
	}
	void PrintBoolIsCrossSolved()
	{
		int a = IsCrossSolved();
		if (a)
		{
			ColorPrint(a);
			std::cout << " Cross is solved" << "\n";
		}
		else
			std::cout << "Cross isn't solved" << "\n";
	}
	void PrintSide(int a)
	{
		if (UP.GetCenter() == a)
		{
			BLU.PrintC_C1();
			PrintSpace();
			BU.PrintE_C1();
			PrintSpace();
			BRU.PrintC_C1();
			PrintNewLine();
			LU.PrintE_C2();
			PrintSpace();
			UP.PrintCenter();
			PrintSpace();
			RU.PrintE_C1();
			PrintNewLine();
			FLU.PrintC_C1();
			PrintSpace();
			FU.PrintE_C1();
			PrintSpace();
			FRU.PrintC_C1();
			PrintNewLine();
		}
		else if (LEFT.GetCenter() == a)
		{
			BLU.PrintC_C2();
			PrintSpace();
			LU.PrintE_C1();
			PrintSpace();
			FLU.PrintC_C3();
			PrintSpace();
			PrintNewLine();
			BL.PrintE_C1();
			PrintSpace();
			LEFT.PrintCenter();
			PrintSpace();
			FL.PrintE_C1();
			PrintSpace();
			PrintNewLine();
			BLD.PrintC_C3();
			PrintSpace();
			LD.PrintE_C2();
			PrintSpace();
			FLD.PrintC_C2();
			PrintSpace();
			PrintNewLine();
		}
		else if (FRONT.GetCenter() == a)
		{
			FLU.PrintC_C2();
			PrintSpace();
			FU.PrintE_C2();
			PrintSpace();
			FRU.PrintC_C3();
			PrintSpace();
			PrintNewLine();
			FL.PrintE_C2();
			PrintSpace();
			FRONT.PrintCenter();
			PrintSpace();
			FR.PrintE_C1();
			PrintSpace();
			PrintNewLine();
			FLD.PrintC_C3();
			PrintSpace();
			FD.PrintE_C1();
			PrintSpace();
			FRD.PrintC_C2();
			PrintSpace();
			PrintNewLine();
		}
		else if (RIGHT.GetCenter() == a)
		{
			FRU.PrintC_C2();
			PrintSpace();
			RU.PrintE_C2();
			PrintSpace();
			BRU.PrintC_C3();
			PrintSpace();
			PrintNewLine();
			FR.PrintE_C2();
			PrintSpace();
			RIGHT.PrintCenter();
			PrintSpace();
			BR.PrintE_C1();
			PrintSpace();
			PrintNewLine();
			FRD.PrintC_C3();
			PrintSpace();
			RD.PrintE_C1();
			PrintSpace();
			BRD.PrintC_C2();
			PrintSpace();
			PrintNewLine();
		}
		else if (BACK.GetCenter() == a)
		{
			BRU.PrintC_C2();
			PrintSpace();
			BU.PrintE_C2();
			PrintSpace();
			BLU.PrintC_C3();
			PrintNewLine();
			BR.PrintE_C2();
			PrintSpace();
			BACK.PrintCenter();
			PrintSpace();
			BL.PrintE_C2();
			PrintSpace();
			PrintNewLine();
			BRD.PrintC_C3();
			PrintSpace();
			BD.PrintE_C1();
			PrintSpace();
			BLD.PrintC_C2();
			PrintNewLine();
		}
		else if (DOWN.GetCenter() == a)
		{
			FLD.PrintC_C1();
			PrintSpace();
			FD.PrintE_C2();
			PrintSpace();
			FRD.PrintC_C1();
			PrintNewLine();
			LD.PrintE_C1();
			PrintSpace();
			DOWN.PrintCenter();
			PrintSpace();
			RD.PrintE_C2();
			PrintNewLine();
			BLD.PrintC_C1();
			PrintSpace();
			BD.PrintE_C2();
			PrintSpace();
			BRD.PrintC_C1();
			PrintNewLine();
		}
	}
	void PrintCube()
	{
		// WWW
		//1st WWW BLU1 BU1 BRU1
		PrintSixSpaces();
		BLU.PrintC_C1();
		PrintSpace();
		BU.PrintE_C1();
		PrintSpace();
		BRU.PrintC_C1();
		PrintNewLine();
		//2nd WWW LU2 UP RU1
		PrintSixSpaces();
		LU.PrintE_C2();
		PrintSpace();
		UP.PrintCenter();
		PrintSpace();
		RU.PrintE_C1();
		PrintNewLine();
		//3rd WWW FLU1 FU1 FRU1
		PrintSixSpaces();
		FLU.PrintC_C1();
		PrintSpace();
		FU.PrintE_C1();
		PrintSpace();
		FRU.PrintC_C1();
		PrintNewLine();

		//1st OOO GGG RRR BBB
		//1st OOO BLU2 LU1 FLU3
		BLU.PrintC_C2();
		PrintSpace();
		LU.PrintE_C1();
		PrintSpace();
		FLU.PrintC_C3();
		PrintSpace();
		//1st GGG FLU2 FU2 FRU3
		FLU.PrintC_C2();
		PrintSpace();
		FU.PrintE_C2();
		PrintSpace();
		FRU.PrintC_C3();
		PrintSpace();
		//1st RRR FRU2 RU2 BRU3
		FRU.PrintC_C2();
		PrintSpace();
		RU.PrintE_C2();
		PrintSpace();
		BRU.PrintC_C3();
		PrintSpace();
		//1st BBB BRU2 BU2 BLU3
		BRU.PrintC_C2();
		PrintSpace();
		BU.PrintE_C2();
		PrintSpace();
		BLU.PrintC_C3();
		PrintNewLine();

		//2nd OOO GGG RRR BBB
		//2nd OOO BL1 LEFT FL1
		BL.PrintE_C1();
		PrintSpace();
		LEFT.PrintCenter();
		PrintSpace();
		FL.PrintE_C1();
		PrintSpace();
		//2nd GGG FL2 FRONT FR1
		FL.PrintE_C2();
		PrintSpace();
		FRONT.PrintCenter();
		PrintSpace();
		FR.PrintE_C1();
		PrintSpace();
		//2nd RRR FR2 RIGHT BR1
		FR.PrintE_C2();
		PrintSpace();
		RIGHT.PrintCenter();
		PrintSpace();
		BR.PrintE_C1();
		PrintSpace();
		//2nd BBB BR2 BACK BL2
		BR.PrintE_C2();
		PrintSpace();
		BACK.PrintCenter();
		PrintSpace();
		BL.PrintE_C2();
		PrintSpace();
		PrintNewLine();

		//3rd OOO GGG RRR BBB
		//3rd OOO BLD3 LD2 FLD2
		BLD.PrintC_C3();
		PrintSpace();
		LD.PrintE_C2();
		PrintSpace();
		FLD.PrintC_C2();
		PrintSpace();
		//3rd GGG FLD3 FD1 FRD2
		FLD.PrintC_C3();
		PrintSpace();
		FD.PrintE_C1();
		PrintSpace();
		FRD.PrintC_C2();
		PrintSpace();
		//3rd RRR FRD3 RD1 BRD2
		FRD.PrintC_C3();
		PrintSpace();
		RD.PrintE_C1();
		PrintSpace();
		BRD.PrintC_C2();
		PrintSpace();
		//3rd BBB BRD3 BD1 BLD2
		BRD.PrintC_C3();
		PrintSpace();
		BD.PrintE_C1();
		PrintSpace();
		BLD.PrintC_C2();
		PrintNewLine();

		// YYY
		//1st YYY FLD1 FD2 FRD1
		PrintSixSpaces();
		FLD.PrintC_C1();
		PrintSpace();
		FD.PrintE_C2();
		PrintSpace();
		FRD.PrintC_C1();
		PrintNewLine();
		//2nd YYY LD1 DOWN RD2
		PrintSixSpaces();
		LD.PrintE_C1();
		PrintSpace();
		DOWN.PrintCenter();
		PrintSpace();
		RD.PrintE_C2();
		PrintNewLine();
		//3rd YYY BLD1 BD2 BRD1
		PrintSixSpaces();
		BLD.PrintC_C1();
		PrintSpace();
		BD.PrintE_C2();
		PrintSpace();
		BRD.PrintC_C1();
		PrintNewLine();
	}
	void TurnR()
	{
		//Corners: FRU -> BRU -> BRD -> FRD -> FRU; Edges: FR -> RU -> BR -> RD -> FR.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		C_BUFF2.SetCorner(BRU.GetC_C1(), BRU.GetC_C2(), BRU.GetC_C3());
		C_BUFF3.SetCorner(BRD.GetC_C1(), BRD.GetC_C2(), BRD.GetC_C3());
		E_BUFF1.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		E_BUFF2.SetEdge(BR.GetE_C1(), BR.GetE_C2());
		E_BUFF3.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		FRU.SetCorner(FRD.GetC_C2(), FRD.GetC_C3(), FRD.GetC_C1());
		RU.SetEdge(FR.GetE_C1(), FR.GetE_C2());
		BRU.SetCorner(C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2());
		BR.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BRD.SetCorner(C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1());
		RD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		FRD.SetCorner(C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2());
		FR.SetEdge(E_BUFF3.GetE_C2(), E_BUFF3.GetE_C1());
	}
	void TurnRprime()
	{
		//Corners: FRU -> FRD -> BRD -> BRU -> FRU; Edges: FR -> RD -> BR -> RU -> FR.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		C_BUFF2.SetCorner(FRD.GetC_C1(), FRD.GetC_C2(), FRD.GetC_C3());
		C_BUFF3.SetCorner(BRD.GetC_C1(), BRD.GetC_C2(), BRD.GetC_C3());
		E_BUFF1.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		E_BUFF2.SetEdge(FR.GetE_C1(), FR.GetE_C2());
		E_BUFF3.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		FRU.SetCorner(BRU.GetC_C2(), BRU.GetC_C3(), BRU.GetC_C1());
		RU.SetEdge(BR.GetE_C2(), BR.GetE_C1());
		BRU.SetCorner(C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2());
		BR.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		BRD.SetCorner(C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1());
		RD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FRD.SetCorner(C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2());
		FR.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnL()
	{
		//Corners: FLU -> FLD -> BLD -> BLU -> FLU; Edges: LU -> FL -> LD -> BL -> LU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FLU.GetC_C1(), FLU.GetC_C2(), FLU.GetC_C3());
		C_BUFF2.SetCorner(FLD.GetC_C1(), FLD.GetC_C2(), FLD.GetC_C3());
		C_BUFF3.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		E_BUFF1.SetEdge(LD.GetE_C1(), LD.GetE_C2());
		E_BUFF2.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		E_BUFF3.SetEdge(LU.GetE_C1(), LU.GetE_C2());
		FLU.SetCorner(BLU.GetC_C3(), BLU.GetC_C1(), BLU.GetC_C2());
		LU.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		BLU.SetCorner(C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1());
		BL.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLD.SetCorner(C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2());
		LD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FLD.SetCorner(C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1());
		FL.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnLprime()
	{
		//Corners: FLU -> BLU -> BLD -> FLD -> FLU; Edges: LU -> BL -> LD -> FL -> LU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FLU.GetC_C1(), FLU.GetC_C2(), FLU.GetC_C3());
		C_BUFF2.SetCorner(BLU.GetC_C1(), BLU.GetC_C2(), BLU.GetC_C3());
		C_BUFF3.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		E_BUFF1.SetEdge(LD.GetE_C1(), LD.GetE_C2());
		E_BUFF2.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		E_BUFF3.SetEdge(LU.GetE_C1(), LU.GetE_C2());
		FLU.SetCorner(FLD.GetC_C3(), FLD.GetC_C1(), FLD.GetC_C2());
		LU.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		BLU.SetCorner(C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1());
		BL.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
		BLD.SetCorner(C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2());
		LD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FLD.SetCorner(C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1());
		FL.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
	}
	void TurnU()
	{
		//Corners: FRU -> FLU -> BLU -> BRU -> FRU; Edges: FU -> LU -> BU -> RU -> FU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		C_BUFF2.SetCorner(FLU.GetC_C1(), FLU.GetC_C2(), FLU.GetC_C3());
		C_BUFF3.SetCorner(BLU.GetC_C1(), BLU.GetC_C2(), BLU.GetC_C3());
		E_BUFF1.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		E_BUFF2.SetEdge(LU.GetE_C1(), LU.GetE_C2());
		E_BUFF3.SetEdge(BU.GetE_C1(), BU.GetE_C2());
		FRU.SetCorner(BRU.GetC_C1(), BRU.GetC_C2(), BRU.GetC_C3());
		FU.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		FLU.SetCorner(C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3());
		LU.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLU.SetCorner(C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3());
		BU.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		BRU.SetCorner(C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3());
		RU.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnUprime()
	{
		//Corners: FRU -> BRU -> BLU -> FLU -> FRU; Edges: FU -> RU -> BU -> LU -> FU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(BLU.GetC_C1(), BLU.GetC_C2(), BLU.GetC_C3());
		C_BUFF2.SetCorner(BRU.GetC_C1(), BRU.GetC_C2(), BRU.GetC_C3());
		C_BUFF3.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		E_BUFF1.SetEdge(BU.GetE_C1(), BU.GetE_C2());
		E_BUFF2.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		E_BUFF3.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		FRU.SetCorner(FLU.GetC_C1(), FLU.GetC_C2(), FLU.GetC_C3());
		FU.SetEdge(LU.GetE_C2(), LU.GetE_C1());
		FLU.SetCorner(C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3());
		LU.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLU.SetCorner(C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3());
		BU.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		BRU.SetCorner(C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3());
		RU.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnD()
	{
		//Corners: FRD -> FLD -> BLD -> BRD -> FRD; Egdes: FD -> LD -> BD -> RD -> FD.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		C_BUFF2.SetCorner(BRD.GetC_C1(), BRD.GetC_C2(), BRD.GetC_C3());
		C_BUFF3.SetCorner(FRD.GetC_C1(), FRD.GetC_C2(), FRD.GetC_C3());
		E_BUFF1.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		E_BUFF2.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		E_BUFF3.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		FRD.SetCorner(FLD.GetC_C1(), FLD.GetC_C2(), FLD.GetC_C3());
		FD.SetEdge(LD.GetE_C2(), LD.GetE_C1());
		FLD.SetCorner(C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3());
		LD.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLD.SetCorner(C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3());
		BD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		BRD.SetCorner(C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3());
		RD.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnDprime()
	{
		//Corners: FRD -> BRD -> BLD -> FLD -> FRD; Edges: FD -> RD -> BD -> LD -> FD.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FRD.GetC_C1(), FRD.GetC_C2(), FRD.GetC_C3());
		C_BUFF2.SetCorner(FLD.GetC_C1(), FLD.GetC_C2(), FLD.GetC_C3());
		C_BUFF3.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		E_BUFF1.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		E_BUFF2.SetEdge(LD.GetE_C1(), LD.GetE_C2());
		E_BUFF3.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		FRD.SetCorner(BRD.GetC_C1(), BRD.GetC_C2(), BRD.GetC_C3());
		FD.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		FLD.SetCorner(C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3());
		LD.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLD.SetCorner(C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3());
		BD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		BRD.SetCorner(C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3());
		RD.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnF()
	{
		//Corners: FRU -> FRD -> FLD -> FLU -> FRU; Edges: FU -> FR -> FD -> FL -> FU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		C_BUFF2.SetCorner(FRD.GetC_C1(), FRD.GetC_C2(), FRD.GetC_C3());
		C_BUFF3.SetCorner(FLD.GetC_C1(), FLD.GetC_C2(), FLD.GetC_C3());
		E_BUFF1.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		E_BUFF2.SetEdge(FR.GetE_C1(), FR.GetE_C2());
		E_BUFF3.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		FRU.SetCorner(FLU.GetC_C3(), FLU.GetC_C1(), FLU.GetC_C2());
		FU.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		FRD.SetCorner(C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1());
		FR.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		FLD.SetCorner(C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2());
		FD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		FLU.SetCorner(C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1());
		FL.SetEdge(E_BUFF3.GetE_C2(), E_BUFF3.GetE_C1());
	}
	void TurnFprime()
	{
		//Corners: FRU -> FLU -> FLD -> FRD -> FRU; Edges: FU -> FL -> FD -> FR -> FU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(FLD.GetC_C1(), FLD.GetC_C2(), FLD.GetC_C3());
		C_BUFF2.SetCorner(FLU.GetC_C1(), FLU.GetC_C2(), FLU.GetC_C3());
		C_BUFF3.SetCorner(FRU.GetC_C1(), FRU.GetC_C2(), FRU.GetC_C3());
		E_BUFF1.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		E_BUFF2.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		E_BUFF3.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		FRU.SetCorner(FRD.GetC_C3(), FRD.GetC_C1(), FRD.GetC_C2());
		FU.SetEdge(FR.GetE_C2(), FR.GetE_C1());
		FRD.SetCorner(C_BUFF1.GetC_C2(), C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1());
		FR.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		FLD.SetCorner(C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1(), C_BUFF2.GetC_C2());
		FD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FLU.SetCorner(C_BUFF3.GetC_C2(), C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1());
		FL.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnB()
	{
		//Corners: BRU -> BLU -> BLD -> BRD -> BRU; Edges: BU -> BL -> BD -> BR -> BU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		C_BUFF2.SetCorner(BLU.GetC_C1(), BLU.GetC_C2(), BLU.GetC_C3());
		C_BUFF3.SetCorner(BRU.GetC_C1(), BRU.GetC_C2(), BRU.GetC_C3());
		E_BUFF1.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		E_BUFF2.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		E_BUFF3.SetEdge(BU.GetE_C1(), BU.GetE_C2());
		BRU.SetCorner(BRD.GetC_C2(), BRD.GetC_C3(), BRD.GetC_C1());
		BU.SetEdge(BR.GetE_C1(), BR.GetE_C2());
		BRD.SetCorner(C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2());
		BR.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BLD.SetCorner(C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1());
		BD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		BLU.SetCorner(C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2());
		BL.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnBprime()
	{
		//Corners: BRU -> BRD -> BLD -> BLU -> BRU; Edges: BU -> BR -> BD -> BL -> BU.
		Corner C_BUFF1, C_BUFF2, C_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		C_BUFF1.SetCorner(BRU.GetC_C1(), BRU.GetC_C2(), BRU.GetC_C3());
		C_BUFF2.SetCorner(BRD.GetC_C1(), BRD.GetC_C2(), BRD.GetC_C3());
		C_BUFF3.SetCorner(BLD.GetC_C1(), BLD.GetC_C2(), BLD.GetC_C3());
		E_BUFF1.SetEdge(BU.GetE_C1(), BU.GetE_C2());
		E_BUFF2.SetEdge(BR.GetE_C1(), BR.GetE_C2());
		E_BUFF3.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		BRU.SetCorner(BLU.GetC_C2(), BLU.GetC_C3(), BLU.GetC_C1());
		BU.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		BRD.SetCorner(C_BUFF1.GetC_C3(), C_BUFF1.GetC_C1(), C_BUFF1.GetC_C2());
		BR.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		BLD.SetCorner(C_BUFF2.GetC_C2(), C_BUFF2.GetC_C3(), C_BUFF2.GetC_C1());
		BD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		BLU.SetCorner(C_BUFF3.GetC_C3(), C_BUFF3.GetC_C1(), C_BUFF3.GetC_C2());
		BL.SetEdge(E_BUFF3.GetE_C2(), E_BUFF3.GetE_C1());
	}
	void TurnM()
	{
		//Centers: UP -> FRONT -> DOWN -> BACK -> UP; Edges: FU -> FD -> BD -> BU -> FU.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(DOWN.GetCenter());
		Cen_BUFF2.SetCenter(FRONT.GetCenter());
		Cen_BUFF3.SetCenter(UP.GetCenter());
		E_BUFF1.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		E_BUFF2.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		E_BUFF3.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		UP.SetCenter(BACK.GetCenter());
		BACK.SetCenter(Cen_BUFF1.GetCenter());
		DOWN.SetCenter(Cen_BUFF2.GetCenter());
		FRONT.SetCenter(Cen_BUFF3.GetCenter());
		FU.SetEdge(BU.GetE_C2(), BU.GetE_C1());
		BU.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		BD.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FD.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnMprime()
	{
		//Centers: UP -> BACK -> DOWN -> FRONT -> UP; Edges: FU -> BU -> BD -> FD -> FU.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(UP.GetCenter());
		Cen_BUFF2.SetCenter(BACK.GetCenter());
		Cen_BUFF3.SetCenter(DOWN.GetCenter());
		E_BUFF1.SetEdge(FU.GetE_C1(), FU.GetE_C2());
		E_BUFF2.SetEdge(BU.GetE_C1(), BU.GetE_C2());
		E_BUFF3.SetEdge(BD.GetE_C1(), BD.GetE_C2());
		UP.SetCenter(FRONT.GetCenter());
		BACK.SetCenter(Cen_BUFF1.GetCenter());
		DOWN.SetCenter(Cen_BUFF2.GetCenter());
		FRONT.SetCenter(Cen_BUFF3.GetCenter());
		FU.SetEdge(FD.GetE_C1(), FD.GetE_C2());
		BU.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		FD.SetEdge(E_BUFF3.GetE_C2(), E_BUFF3.GetE_C1());
	}
	void TurnE()
	{
		//Centers: FRONT -> RIGHT -> BACK -> LEFT -> FRONT; Edges: FR -> BR -> BL -> FL -> FR.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(FRONT.GetCenter());
		Cen_BUFF2.SetCenter(RIGHT.GetCenter());
		Cen_BUFF3.SetCenter(BACK.GetCenter());
		E_BUFF1.SetEdge(FR.GetE_C1(), FR.GetE_C2());
		E_BUFF2.SetEdge(BR.GetE_C1(), BR.GetE_C2());
		E_BUFF3.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		FRONT.SetCenter(LEFT.GetCenter());
		RIGHT.SetCenter(Cen_BUFF1.GetCenter());
		BACK.SetCenter(Cen_BUFF2.GetCenter());
		LEFT.SetCenter(Cen_BUFF3.GetCenter());
		FR.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		BR.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		BL.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FL.SetEdge(E_BUFF3.GetE_C2(), E_BUFF3.GetE_C1());
	}
	void TurnEprime()
	{
		//Centers: FRONT -> LEFT -> BACK -> RIGHT -> FRONT; Edges: FR -> FL -> BL -> BR -> FR.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(BACK.GetCenter());
		Cen_BUFF2.SetCenter(LEFT.GetCenter());
		Cen_BUFF3.SetCenter(FRONT.GetCenter());
		E_BUFF1.SetEdge(BL.GetE_C1(), BL.GetE_C2());
		E_BUFF2.SetEdge(FL.GetE_C1(), FL.GetE_C2());
		E_BUFF3.SetEdge(FR.GetE_C1(), FR.GetE_C2());
		FRONT.SetCenter(RIGHT.GetCenter());
		RIGHT.SetCenter(Cen_BUFF1.GetCenter());
		BACK.SetCenter(Cen_BUFF2.GetCenter());
		LEFT.SetCenter(Cen_BUFF3.GetCenter());
		FR.SetEdge(BR.GetE_C1(), BR.GetE_C2());
		BR.SetEdge(E_BUFF1.GetE_C2(), E_BUFF1.GetE_C1());
		BL.SetEdge(E_BUFF2.GetE_C2(), E_BUFF2.GetE_C1());
		FL.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnS()
	{
		//Centers: UP -> RIGHT -> DOWN -> LEFT -> UP; Edges: RU -> RD -> LD -> LU -> RU.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(UP.GetCenter());
		Cen_BUFF2.SetCenter(RIGHT.GetCenter());
		Cen_BUFF3.SetCenter(DOWN.GetCenter());
		E_BUFF1.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		E_BUFF2.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		E_BUFF3.SetEdge(LD.GetE_C1(), LD.GetE_C2());
		UP.SetCenter(LEFT.GetCenter());
		RIGHT.SetCenter(Cen_BUFF1.GetCenter());
		DOWN.SetCenter(Cen_BUFF2.GetCenter());
		LEFT.SetCenter(Cen_BUFF3.GetCenter());
		RU.SetEdge(LU.GetE_C1(), LU.GetE_C2());
		RD.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		LD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		LU.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnSprime()
	{
		//Centers: UP -> LEFT -> DOWN -> RIGHT -> UP; Edges: RU -> LU -> LD -> RD -> RU.
		Center Cen_BUFF1, Cen_BUFF2, Cen_BUFF3;
		Edge E_BUFF1, E_BUFF2, E_BUFF3;
		Cen_BUFF1.SetCenter(DOWN.GetCenter());
		Cen_BUFF2.SetCenter(LEFT.GetCenter());
		Cen_BUFF3.SetCenter(UP.GetCenter());
		E_BUFF1.SetEdge(LD.GetE_C1(), LD.GetE_C2());
		E_BUFF2.SetEdge(LU.GetE_C1(), LU.GetE_C2());
		E_BUFF3.SetEdge(RU.GetE_C1(), RU.GetE_C2());
		UP.SetCenter(RIGHT.GetCenter());
		RIGHT.SetCenter(Cen_BUFF1.GetCenter());
		DOWN.SetCenter(Cen_BUFF2.GetCenter());
		LEFT.SetCenter(Cen_BUFF3.GetCenter());
		RU.SetEdge(RD.GetE_C1(), RD.GetE_C2());
		RD.SetEdge(E_BUFF1.GetE_C1(), E_BUFF1.GetE_C2());
		LD.SetEdge(E_BUFF2.GetE_C1(), E_BUFF2.GetE_C2());
		LU.SetEdge(E_BUFF3.GetE_C1(), E_BUFF3.GetE_C2());
	}
	void TurnX()
	{
		TurnR();
		TurnLprime();
		TurnMprime();
	}
	void TurnXprime()
	{
		TurnRprime();
		TurnL();
		TurnM();
	}
	void TurnY()
	{
		TurnEprime();
		TurnU();
		TurnDprime();
	}
	void TurnYprime()
	{
		TurnE();
		TurnUprime();
		TurnD();
	}
	void TurnZ()
	{
		TurnF();
		TurnS();
		TurnBprime();
	}
	void TurnZprime()
	{
		TurnFprime();
		TurnSprime();
		TurnB();
	}
	void Turnr()
	{
		TurnMprime();
		TurnR();
	}
	void Turnrprime()
	{
		TurnM();
		TurnRprime();
	}
	void Turnl()
	{
		TurnM();
		TurnL();
	}
	void Turnlprime()
	{
		TurnMprime();
		TurnLprime();
	}
	void Turnu()
	{
		TurnU();
		TurnEprime();
	}
	void Turnuprime()
	{
		TurnUprime();
		TurnE();
	}
	void Turnd()
	{
		TurnE();
		TurnD();
	}
	void Turndprime()
	{
		TurnEprime();
		TurnDprime();
	}
	void Turnf()
	{
		TurnF();
		TurnS();
	}
	void Turnfprime()
	{
		TurnFprime();
		TurnSprime();
	}
	void Turnb()
	{
		TurnB();
		TurnSprime();
	}
	void Turnbprime()
	{
		TurnBprime();
		TurnS();
	}
	void TurnR2()
	{
		TurnR();
		TurnR();
	}
	void TurnL2()
	{
		TurnL();
		TurnL();
	}
	void TurnU2()
	{
		TurnU();
		TurnU();
	}
	void TurnD2()
	{
		TurnD();
		TurnD();
	}
	void TurnF2()
	{
		TurnF();
		TurnF();
	}
	void TurnB2()
	{
		TurnB();
		TurnB();
	}
	void TurnM2()
	{
		TurnM();
		TurnM();
	}
	void TurnS2()
	{
		TurnS();
		TurnS();
	}
	void TurnE2()
	{
		TurnE();
		TurnE();
	}
	void TurnX2()
	{
		TurnX();
		TurnX();
	}
	void TurnY2()
	{
		TurnY();
		TurnY();
	}
	void TurnZ2()
	{
		TurnZ();
		TurnZ();
	}
	void Turnr2()
	{
		Turnr();
		Turnr();
	}
	void Turnl2()
	{
		Turnl();
		Turnl();
	}
	void Turnu2()
	{
		Turnu();
		Turnu();
	}
	void Turnd2()
	{
		Turnd();
		Turnd();
	}
	void Turnf2()
	{
		Turnf();
		Turnf();
	}
	void Turnb2()
	{
		Turnb();
		Turnb();
	}
	int SetScrumble(std::string Scrumble)
	{
		int n = 0;
		for (int i = 0; i <= Scrumble.length(); i++)
		{
			if (Scrumble[i] == 'L' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnL();
				n++;
			}
			else if (Scrumble[i] == 'R' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnR();
				n++;
			}
			else if (Scrumble[i] == 'U' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnU();
				n++;
			}
			else if (Scrumble[i] == 'D' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnD();
				n++;
			}
			else if (Scrumble[i] == 'F' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnF();
				n++;
			}
			else if (Scrumble[i] == 'B' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnB();
				n++;
			}
			else if (Scrumble[i] == 'L' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnLprime();
				n++;
			}
			else if (Scrumble[i] == 'R' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnRprime();
				n++;
			}
			else if (Scrumble[i] == 'U' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnUprime();
				n++;
			}
			else if (Scrumble[i] == 'D' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnDprime();
				n++;
			}
			else if (Scrumble[i] == 'F' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnFprime();
				n++;
			}
			else if (Scrumble[i] == 'B' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnBprime();
				n++;
			}
			else if (Scrumble[i] == 'L' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnL2();
				n++;
			}
			else if (Scrumble[i] == 'R' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnR2();
				n++;
			}
			else if (Scrumble[i] == 'U' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnU2();
				n++;
			}
			else if (Scrumble[i] == 'D' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnD2();
				n++;
			}
			else if (Scrumble[i] == 'F' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnF2();
				n++;
			}
			else if (Scrumble[i] == 'B' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnB2();
				n++;
			}
			else if (Scrumble[i] == 'l' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnl2();
				n++;
			}
			else if (Scrumble[i] == 'r' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnr2();
				n++;
			}
			else if (Scrumble[i] == 'u' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnu2();
				n++;
			}
			else if (Scrumble[i] == 'd' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnd2();
				n++;
			}
			else if (Scrumble[i] == 'f' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnf2();
				n++;
			}
			else if (Scrumble[i] == 'b' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				Turnb2();
				n++;
			}
			else if (Scrumble[i] == 'l' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnl();
				n++;
			}
			else if (Scrumble[i] == 'r' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnr();
				n++;
			}
			else if (Scrumble[i] == 'u' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnu();
				n++;
			}
			else if (Scrumble[i] == 'd' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnd();
				n++;
			}
			else if (Scrumble[i] == 'f' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnf();
				n++;
			}
			else if (Scrumble[i] == 'b' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				Turnb();
				n++;
			}
			else if (Scrumble[i] == 'l' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turnlprime();
				n++;
			}
			else if (Scrumble[i] == 'r' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turnrprime();
				n++;
			}
			else if (Scrumble[i] == 'u' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turnuprime();
				n++;
			}
			else if (Scrumble[i] == 'd' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turndprime();
				n++;
			}
			else if (Scrumble[i] == 'f' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turnfprime();
				n++;
			}
			else if (Scrumble[i] == 'b' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				Turnbprime();
				n++;
			}
			else if (Scrumble[i] == 'M' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnM2();
				n++;
			}
			else if (Scrumble[i] == 'E' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnE2();
				n++;
			}
			else if (Scrumble[i] == 'S' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnS2();
				n++;
			}
			else if (Scrumble[i] == 'x' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnX2();
				n++;
			}
			else if (Scrumble[i] == 'y' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnY2();
				n++;
			}
			else if (Scrumble[i] == 'z' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
			{
				TurnZ2();
				n++;
			}
			else if (Scrumble[i] == 'M' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnM();
				n++;
			}
			else if (Scrumble[i] == 'E' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnE();
				n++;
			}
			else if (Scrumble[i] == 'S' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnS();
				n++;
			}
			else if (Scrumble[i] == 'x' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnX();
				n++;
			}
			else if (Scrumble[i] == 'y' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnY();
				n++;
			}
			else if (Scrumble[i] == 'z' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
			{
				TurnZ();
				n++;
			}
			else if (Scrumble[i] == 'M' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnMprime();
				n++;
			}
			else if (Scrumble[i] == 'E' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnEprime();
				n++;
			}
			else if (Scrumble[i] == 'S' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnSprime();
				n++;
			}
			else if (Scrumble[i] == 'x' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnXprime();
				n++;
			}
			else if (Scrumble[i] == 'y' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnYprime();
				n++;
			}
			else if (Scrumble[i] == 'z' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
			{
				TurnZprime();
				n++;
			}
		}
		return n;
		//std::cout << Scrumble << std::endl;
	}
	Cube()
	{
		SetSolveState();
	}
	Cube(std::string Scrumble)
	{
		SetSolveState();
		SetScrumble(Scrumble);
		std::cout << "Scrumble: " << Scrumble << "\n";
	}
	bool IsEqualTo(Cube a)
	{
		if (FRU.IsEqualTo(a.FRU)
			&& FLU.IsEqualTo(a.FLU)
			&& FRD.IsEqualTo(a.FRD)
			&& FLD.IsEqualTo(a.FLD)
			&& BRU.IsEqualTo(a.BRU)
			&& BLU.IsEqualTo(a.BLU)
			&& BRD.IsEqualTo(a.BRD)
			&& BLD.IsEqualTo(a.BLD)
			&& FU.IsEqualTo(a.FU)
			&& FD.IsEqualTo(a.FD)
			&& FL.IsEqualTo(a.FL)
			&& FR.IsEqualTo(a.FR)
			&& BU.IsEqualTo(a.BU)
			&& BD.IsEqualTo(a.BD)
			&& BL.IsEqualTo(a.BL)
			&& BR.IsEqualTo(a.BR)
			&& RU.IsEqualTo(a.RU)
			&& RD.IsEqualTo(a.RD)
			&& LU.IsEqualTo(a.LU)
			&& LD.IsEqualTo(a.LD)
			&& FRONT.IsEqualTo(a.FRONT)
			&& UP.IsEqualTo(a.UP)
			&& BACK.IsEqualTo(a.BACK)
			&& DOWN.IsEqualTo(a.DOWN)
			&& RIGHT.IsEqualTo(a.RIGHT)
			&& LEFT.IsEqualTo(a.LEFT)
			)
			return true;
		else
			return false;
	}
};

//Solving Functions
std::string CreateNeighbors(int i)
{
	switch (i)
	{
	case 0:
		return "R";
		break;
	case 1:
		return "L";
		break;
	case 2:
		return "U";
		break;
	case 3:
		return "D";
		break;
	case 4:
		return "F";
		break;
	case 5:
		return "B";
		break;
	case 6:
		return "R'";
		break;
	case 7:
		return "L'";
		break;
	case 8:
		return "U'";
		break;
	case 9:
		return "D'";
		break;
	case 10:
		return "F'";
		break;
	case 11:
		return "B'";
		break;
	case 12:
		return "R2";
		break;
	case 13:
		return "L2";
		break;
	case 14:
		return "U2";
		break;
	case 15:
		return "D2";
		break;
	case 16:
		return "F2";
		break;
	case 17:
		return "B2";
		break;
	}
}
std::string CreateNeighbors(int i, std::string buff)
{
	char c;
	if (buff.length() == 1)
		c = buff[0];
	else
	{
		char a = buff[buff.length() - 2];
		char b = buff[buff.length() - 1];
		if (b == '2' || b == '\'')
			c = a;
		else
			c = b;
	}
	if (c == 'R')
	{
		switch (i)
		{
		case 0:
			return "B2";
			break;
		case 1:
			return "L";
			break;
		case 2:
			return "U";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "F";
			break;
		case 5:
			return "B";
			break;
		case 6:
			return "F2";
			break;
		case 7:
			return "L'";
			break;
		case 8:
			return "U'";
			break;
		case 9:
			return "D'";
			break;
		case 10:
			return "F'";
			break;
		case 11:
			return "B'";
			break;
		case 12:
			return "D2";
			break;
		case 13:
			return "L2";
			break;
		case 14:
			return "U2";
			break;
		}
	}
	if (c == 'L')
	{
		switch (i)
		{
		case 0:
			return "R";
			break;
		case 1:
			return "B2";
			break;
		case 2:
			return "U";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "F";
			break;
		case 5:
			return "B";
			break;
		case 6:
			return "R'";
			break;
		case 7:
			return "F2";
			break;
		case 8:
			return "U'";
			break;
		case 9:
			return "D'";
			break;
		case 10:
			return "F'";
			break;
		case 11:
			return "B'";
			break;
		case 12:
			return "R2";
			break;
		case 13:
			return "D2";
			break;
		case 14:
			return "U2";
			break;
		}

		if (i == 0 && c != 'R')
			return "R";
		if (i == 1 && c != 'L')
			return "L";
		if (i == 2 && c != 'U')
			return "U";
		if (i == 3 && c != 'D')
			return "D";
		if (i == 4 && c != 'F')
			return "F";
		if (i == 5 && c != 'B')
			return "B";
		if (i == 6 && c != 'R')
			return "R'";
		if (i == 7 && c != 'L')
			return "L'";
		if (i == 8 && c != 'U')
			return "U'";
		if (i == 9 && c != 'D')
			return "D'";
		if (i == 10 && c != 'F')
			return "F'";
		if (i == 11 && c != 'B')
			return "B'";
		if (i == 12 && c != 'R')
			return "R2";
		if (i == 13 && c != 'L')
			return "L2";
		if (i == 14 && c != 'U')
			return "U2";
		if (i == 15 && c != 'D')
			return "D2";
		if (i == 16 && c != 'F')
			return "F2";
		if (i == 17 && c != 'B')
			return "B2";
	}
	if (c == 'U')
	{
		switch (i)
		{
		case 0:
			return "R";
			break;
		case 1:
			return "L";
			break;
		case 2:
			return "B2";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "F";
			break;
		case 5:
			return "B";
			break;
		case 6:
			return "R'";
			break;
		case 7:
			return "L'";
			break;
		case 8:
			return "D2";
			break;
		case 9:
			return "D'";
			break;
		case 10:
			return "F'";
			break;
		case 11:
			return "B'";
			break;
		case 12:
			return "R2";
			break;
		case 13:
			return "L2";
			break;
		case 14:
			return "F2";
			break;
		}
	}
	if (c == 'D')
	{
		switch (i)
		{
		case 0:
			return "R";
			break;
		case 1:
			return "L";
			break;
		case 2:
			return "U";
			break;
		case 3:
			return "B2";
			break;
		case 4:
			return "F";
			break;
		case 5:
			return "B";
			break;
		case 6:
			return "R'";
			break;
		case 7:
			return "L'";
			break;
		case 8:
			return "U'";
			break;
		case 9:
			return "F2";
			break;
		case 10:
			return "F'";
			break;
		case 11:
			return "B'";
			break;
		case 12:
			return "R2";
			break;
		case 13:
			return "L2";
			break;
		case 14:
			return "U2";
			break;
		}
	}
	if (c == 'F')
	{
		switch (i)
		{
		case 0:
			return "R";
			break;
		case 1:
			return "L";
			break;
		case 2:
			return "U";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "B2";
			break;
		case 5:
			return "B";
			break;
		case 6:
			return "R'";
			break;
		case 7:
			return "L'";
			break;
		case 8:
			return "U'";
			break;
		case 9:
			return "D'";
			break;
		case 10:
			return "D2";
			break;
		case 11:
			return "B'";
			break;
		case 12:
			return "R2";
			break;
		case 13:
			return "L2";
			break;
		case 14:
			return "U2";
			break;
		}
	}
	if (c == 'B')
	{
		switch (i)
		{
		case 0:
			return "R";
			break;
		case 1:
			return "L";
			break;
		case 2:
			return "U";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "F";
			break;
		case 5:
			return "F2";
			break;
		case 6:
			return "R'";
			break;
		case 7:
			return "L'";
			break;
		case 8:
			return "U'";
			break;
		case 9:
			return "D'";
			break;
		case 10:
			return "F'";
			break;
		case 11:
			return "D2";
			break;
		case 12:
			return "R2";
			break;
		case 13:
			return "L2";
			break;
		case 14:
			return "U2";
			break;
		}
	}
}
std::string Pre_SolveCube(Cube cube1)
{
	int ICS = cube1.IsSolved();
	if (ICS)
	{
		//ColorPrint(ICS);
		//std::cout << "cross is solved\n";
		//CrossColor = ICS;
		return "";
	}
	int am = 0;
	int n = 0;
	std::vector<std::string> ngbrs;
	std::queue<std::string> q;
	Cube cur;
	std::string buff;
	for (int i = 0; i < 18; i++)
	{
		ngbrs.push_back(CreateNeighbors(i));
		q.push(ngbrs[n]);
		n++;
	}
	while (!q.empty())
	{
		cur = cube1;
		buff = q.front();
		am = cur.SetScrumble(buff);
		if (am > 3)
			return "";
		q.pop();
		ICS = cur.IsSolved();
		if (ICS)
		{
			//std::cout << buff << "\n";
			//ColorPrint(ICS);
			//std::cout << " cross is solved\n";
			//std::cout << "moves: " << am << "\n";
			//CrossColor = ICS;
			return buff;
		}
		for (int i = 0; i < 15; i++)
		{
			ngbrs.push_back(buff + CreateNeighbors(i, buff));
			q.push(ngbrs[n]);
			n++;
		}
	}
}
std::string Pre_SolveCross1(Cube cube1)
{
	int ICS = cube1.IsCrossSolved(CrossColor);
	if (ICS)
	{
		//ColorPrint(ICS);
		//std::cout << "cross is solved\n";
		//CrossColor = ICS;
		return "";
	}
	int am = 0;
	int n = 0;
	std::vector<std::string> ngbrs;
	std::queue<std::string> q;
	Cube cur;
	std::string buff;
	for (int i = 0; i < 18; i++)
	{
		ngbrs.push_back(CreateNeighbors(i));
		q.push(ngbrs[n]);
		n++;
	}
	while (!q.empty())
	{
		cur = cube1;
		buff = q.front();
		am = cur.SetScrumble(buff);
		if (am > 3)
			return "";
		q.pop();
		ICS = cur.IsCrossSolved(CrossColor);
		if (ICS)
		{
			//std::cout << buff << "\n";
			//ColorPrint(ICS);
			//std::cout << " cross is solved\n";
			//std::cout << "moves: " << am << "\n";
			//CrossColor = ICS;
			return buff;
		}
		for (int i = 0; i < 15; i++)
		{
			ngbrs.push_back(buff + CreateNeighbors(i, buff));
			q.push(ngbrs[n]);
			n++;
		}
	}
}
std::string Pre_SolveTwoCrossPieces(Cube cube1)
{
	int ICS = cube1.AreTwoBottomCrossPiecesSolved(CrossColor);
	if (ICS)
	{
		//ColorPrint(ICS);
		//std::cout << "three cross pieces is solved\n";
		//CrossColor = ICS;
		return "";
	}
	int am = 0;
	int n = 0;
	std::vector<std::string> ngbrs;
	std::queue<std::string> q;
	Cube cur;
	std::string buff;
	for (int i = 0; i < 18; i++)
	{
		ngbrs.push_back(CreateNeighbors(i));
		q.push(ngbrs[n]);
		n++;
	}
	while (!q.empty())
	{
		cur = cube1;
		buff = q.front();
		am = cur.SetScrumble(buff);
		q.pop();
		ICS = cur.AreTwoBottomCrossPiecesSolved(CrossColor);
		if (ICS)
		{
			//std::cout << buff << "\n";
			//ColorPrint(ICS);
			//std::cout << " three cross pieces is solved\n";
			//std::cout << "moves: " << am << "\n";
			//CrossColor = ICS;
			return buff;
		}
		for (int i = 0; i < 15; i++)
		{
			ngbrs.push_back(buff + CreateNeighbors(i, buff));
			q.push(ngbrs[n]);
			n++;
		}
	}
}
std::string Pre_SolveThreeCrossPieces(Cube cube1)
{
	int ICS = cube1.AreThreeCrossPiecesSolved(CrossColor);
	if (ICS)
	{
		//ColorPrint(ICS);
		//std::cout << "three cross pieces is solved\n";
		//CrossColor = ICS;
		return "";
	}
	int am = 0;
	int n = 0;
	std::vector<std::string> ngbrs;
	std::queue<std::string> q;
	Cube cur;
	std::string buff;
	for (int i = 0; i < 18; i++)
	{
		ngbrs.push_back(CreateNeighbors(i));
		q.push(ngbrs[n]);
		n++;
	}
	while (!q.empty())
	{
		cur = cube1;
		buff = q.front();
		am = cur.SetScrumble(buff);
		if (am > 3)
			return "";
		q.pop();
		ICS = cur.AreThreeCrossPiecesSolved(CrossColor);
		if (ICS)
		{
			//std::cout << buff << "\n";
			//ColorPrint(ICS);
			//std::cout << " three cross pieces is solved\n";
			//std::cout << "moves: " << am << "\n";
			//CrossColor = ICS;
			return buff;
		}
		for (int i = 0; i < 15; i++)
		{
			ngbrs.push_back(buff + CreateNeighbors(i, buff));
			q.push(ngbrs[n]);
			n++;
		}
	}
}
std::string Pre_SolveCross2(Cube cube1)
{
	int ICS = cube1.IsCrossSolved(CrossColor);
	if (ICS)
	{
		//ColorPrint(ICS);
		//std::cout << "cross is solved\n";
		return "";
	}
	int am = 0;
	int n = 0;
	std::vector<std::string> ngbrs;
	std::queue<std::string> q;
	Cube cur;
	std::string buff;
	for (int i = 0; i < 18; i++)
	{
		ngbrs.push_back(CreateNeighbors(i));
		q.push(ngbrs[n]);
		n++;
	}
	while (!q.empty())
	{
		cur = cube1;
		buff = q.front();
		am = cur.SetScrumble(buff);
		q.pop();
		ICS = cur.IsCrossSolved(CrossColor);
		if (ICS)
		{
			//std::cout << buff << "\n";
			//ColorPrint(ICS);
			//std::cout << " cross is solved\n";
			//std::cout << "moves: " << am << "\n";
			return buff;
		}
		for (int i = 0; i < 15; i++)
		{
			ngbrs.push_back(buff + CreateNeighbors(i, buff));
			q.push(ngbrs[n]);
			n++;
		}
	}
}
std::string Pre_SolveOnePair(Cube cube1, std::string* sexymovecases, std::string* rotcases, std::string* aufcases, std::string* f2lcases)
{
	if (cube1.IsOneBottomPairSolved(CrossColor))
		return "";
	Cube cur, cur2, cur3, cur4;
	for (int l = 0; l < 5; l++)
	{
		cur = cube1;
		cur.SetScrumble(sexymovecases[l]);
		cur2 = cur;
		for (int j = 0; j < 4; j++)
		{
			cur2 = cur;
			cur2.SetScrumble(rotcases[j]);
			cur3 = cur2;
			for (int i = 0; i < 4; i++)
			{
				cur3 = cur2;
				cur3.SetScrumble(aufcases[i]);
				cur4 = cur3;
				for (int n = 0; n < 41; n++)
				{
					cur4 = cur3;
					cur4.SetScrumble(f2lcases[n]);
					//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
					//cur.PrintCube();
					if (cur4.IsOneBottomPairSolved(CrossColor))
					{
						return sexymovecases[l] + rotcases[j] + aufcases[i] + f2lcases[n];
					}
				}
			}
		}
	}
	std::cout << "error f2l 1st pair\n";
	return "";
}
std::string Pre_SolveTwoPairs(Cube cube1, std::string* sexymovecases, std::string* rotcases, std::string* aufcases, std::string* f2lcases)
{
	if (cube1.AreTwoBottomPairsSolved(CrossColor))
		return "";
	Cube cur, cur2, cur3, cur4;
	for (int l = 0; l < 5; l++)
	{
		cur = cube1;
		cur.SetScrumble(sexymovecases[l]);
		cur2 = cur;
		for (int j = 0; j < 4; j++)
		{
			cur2 = cur;
			cur2.SetScrumble(rotcases[j]);
			cur3 = cur2;
			for (int i = 0; i < 4; i++)
			{
				cur3 = cur2;
				cur3.SetScrumble(aufcases[i]);
				cur4 = cur3;
				for (int n = 0; n < 41; n++)
				{
					cur4 = cur3;
					cur4.SetScrumble(f2lcases[n]);
					//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
					//cur.PrintCube();
					if (cur4.AreTwoBottomPairsSolved(CrossColor))
					{
						return sexymovecases[l] + rotcases[j] + aufcases[i] + f2lcases[n];
					}
				}
			}
		}
	}
	std::cout << "error f2l 2nd pair\n";
	return "";
}
std::string Pre_SolveThreePairs(Cube cube1, std::string* sexymovecases, std::string* rotcases, std::string* aufcases, std::string* f2lcases)
{
	if (cube1.AreThreeBottomPairsSolved(CrossColor))
		return "";
	Cube cur, cur2, cur3, cur4;
	for (int l = 0; l < 5; l++)
	{
		cur = cube1;
		cur.SetScrumble(sexymovecases[l]);
		cur2 = cur;
		for (int j = 0; j < 4; j++)
		{
			cur2 = cur;
			cur2.SetScrumble(rotcases[j]);
			cur3 = cur2;
			for (int i = 0; i < 4; i++)
			{
				cur3 = cur2;
				cur3.SetScrumble(aufcases[i]);
				cur4 = cur3;
				for (int n = 0; n < 41; n++)
				{
					cur4 = cur3;
					cur4.SetScrumble(f2lcases[n]);
					//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
					//cur.PrintCube();
					if (cur4.AreThreeBottomPairsSolved(CrossColor))
					{
						return sexymovecases[l] + rotcases[j] + aufcases[i] + f2lcases[n];
					}
				}
			}
		}
	}
	std::cout << "error f2l 3rd pair\n";
	return "";
}
std::string Pre_SolveFourPairs(Cube cube1, std::string* aufcases, std::string* f2lcases)
{
	if (cube1.AreFourBottomPairsSolved(CrossColor))
		return "";
	// 1 - BLD unsolved; 2 - BRD unsolved; 3 - FRD unsolved; 4 - FLD unsolved.
	std::string rot;
	Cube cur = cube1;
	Cube cur2, cur3;
	switch (cube1.AreThreeBottomPairsSolved(CrossColor))
	{
	case 1:
		cur.TurnY2();
		rot = "y2";
		break;
	case 2:
		cur.TurnY();
		rot = "y";
		break;
	case 3:
		rot = "";
		break;
	case 4:
		cur.TurnYprime();
		rot = "y'";
		break;
	}
	std::string rot2;
	for (int i = 0; i < 4; i++)
	{
		cur2 = cur;
		cur2.SetScrumble(aufcases[i]);
		cur3 = cur2;
		for (int n = 0; n < 41; n++)
		{
			cur2 = cur3;
			cur2.SetScrumble(f2lcases[n]);
			//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
			//cur.PrintCube();
			if (cur2.AreFourBottomPairsSolved(CrossColor))
			{
				return rot + aufcases[i] + f2lcases[n];
			}
		}
	}
	std::cout << "error f2l\n";
	return "";
}
std::string Pre_OLL(Cube cube1, std::string* aufcases, std::string* ollcases)
{
	if (cube1.IsLastLayerOriented())
		return "";
	Cube cur, cur2;
	for (int i = 0; i < 4; i++)
	{
		cur = cube1;
		cur.SetScrumble(aufcases[i]);
		cur2 = cur;
		for (int n = 0; n < 57; n++)
		{
			cur = cur2;
			cur.SetScrumble(ollcases[n]);
			//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
			//cur.PrintCube();
			if (cur.IsLastLayerOriented())
			{
				return aufcases[i] + ollcases[n];
			}
		}
	}
	std::cout << "error oll\n";
	return "";
}
std::string Pre_PLL(Cube cube1, std::string* aufcases, std::string* pllcases)
{
	if (cube1.IsLastLayerPermuted())
		return "";
	Cube cur, cur2, cur3;
	for (int i = 0; i < 4; i++)
	{
		cur = cube1;
		cur.SetScrumble(aufcases[i]);
		cur2 = cur;
		for (int n = 0; n < 21; n++)
		{
			cur = cur2;
			cur.SetScrumble(pllcases[n]);
			//std::cout << i << " " << n << " " << aufcases[i] << " " << f2lcases[n] << "\n";
			//cur.PrintCube();
			for (int j = 0; j < 19; j++)
			{

				if (cur.IsLastLayerPermuted())
				{
					return aufcases[i] + pllcases[n];
				}
			}
		}
	}
	std::cout << "error pll\n";
	return "";
}
std::string Pre_AUF(Cube cube1, std::string* aufcases)
{
	if (cube1.IsSolved())
		return "";
	Cube cur, cur2;
	for (int i = 0; i < 4; i++)
	{
		cur = cube1;
		cur.SetScrumble(aufcases[i]);
		if (cur.IsSolved())
		{
			return aufcases[i];
		}
	}
	std::cout << "error auf\n";
	return "";
}
//ScrumblerSimplifier Functions
std::string transformator(std::string rot, std::string move)
{
	if (rot == "x")
	{
		if (move == "L")
			return "L";
		if (move == "R")
			return "R";
		if (move == "B")
			return "U";
		if (move == "F")
			return "D";
		if (move == "U")
			return "F";
		if (move == "D")
			return "B";

		if (move == "L'")
			return "L'";
		if (move == "R'")
			return "R'";
		if (move == "B'")
			return "U'";
		if (move == "F'")
			return "D'";
		if (move == "U'")
			return "F'";
		if (move == "D'")
			return "B'";

		if (move == "L2")
			return "L2";
		if (move == "R2")
			return "R2";
		if (move == "B2")
			return "U2";
		if (move == "F2")
			return "D2";
		if (move == "U2")
			return "F2";
		if (move == "D2")
			return "B2";
	}
	if (rot == "y")
	{
		if (move == "B")
			return "L";
		if (move == "F")
			return "R";
		if (move == "U")
			return "U";
		if (move == "D")
			return "D";
		if (move == "L")
			return "F";
		if (move == "R")
			return "B";

		if (move == "B'")
			return "L'";
		if (move == "F'")
			return "R'";
		if (move == "U'")
			return "U'";
		if (move == "D'")
			return "D'";
		if (move == "L'")
			return "F'";
		if (move == "R'")
			return "B'";

		if (move == "B2")
			return "L2";
		if (move == "F2")
			return "R2";
		if (move == "U2")
			return "U2";
		if (move == "D2")
			return "D2";
		if (move == "L2")
			return "F2";
		if (move == "R2")
			return "B2";
	}
	if (rot == "z")
	{
		if (move == "U")
			return "L";
		if (move == "D")
			return "R";
		if (move == "R")
			return "U";
		if (move == "L")
			return "D";
		if (move == "F")
			return "F";
		if (move == "B")
			return "B";

		if (move == "U'")
			return "L'";
		if (move == "D'")
			return "R'";
		if (move == "R'")
			return "U'";
		if (move == "L'")
			return "D'";
		if (move == "F'")
			return "F'";
		if (move == "B'")
			return "B'";

		if (move == "U2")
			return "L2";
		if (move == "D2")
			return "R2";
		if (move == "R2")
			return "U2";
		if (move == "L2")
			return "D2";
		if (move == "F2")
			return "F2";
		if (move == "B2")
			return "B2";
	}
	if (rot == "x'")
	{
		if (move == "L")
			return "L";
		if (move == "R")
			return "R";
		if (move == "F")
			return "U";
		if (move == "B")
			return "D";
		if (move == "D")
			return "F";
		if (move == "U")
			return "B";

		if (move == "L'")
			return "L'";
		if (move == "R'")
			return "R'";
		if (move == "F'")
			return "U'";
		if (move == "B'")
			return "D'";
		if (move == "D'")
			return "F'";
		if (move == "U'")
			return "B'";

		if (move == "L2")
			return "L2";
		if (move == "R2")
			return "R2";
		if (move == "F2")
			return "U2";
		if (move == "B2")
			return "D2";
		if (move == "D2")
			return "F2";
		if (move == "U2")
			return "B2";
	}
	if (rot == "y'")
	{
		if (move == "F")
			return "L";
		if (move == "B")
			return "R";
		if (move == "U")
			return "U";
		if (move == "D")
			return "D";
		if (move == "R")
			return "F";
		if (move == "L")
			return "B";

		if (move == "F'")
			return "L'";
		if (move == "B'")
			return "R'";
		if (move == "U'")
			return "U'";
		if (move == "D'")
			return "D'";
		if (move == "R'")
			return "F'";
		if (move == "L'")
			return "B'";

		if (move == "F2")
			return "L2";
		if (move == "B2")
			return "R2";
		if (move == "U2")
			return "U2";
		if (move == "D2")
			return "D2";
		if (move == "R2")
			return "F2";
		if (move == "L2")
			return "B2";
	}
	if (rot == "z'")
	{
		if (move == "D")
			return "L";
		if (move == "U")
			return "R";
		if (move == "L")
			return "U";
		if (move == "R")
			return "D";
		if (move == "F")
			return "F";
		if (move == "B")
			return "B";

		if (move == "D'")
			return "L'";
		if (move == "U'")
			return "R'";
		if (move == "L'")
			return "U'";
		if (move == "R'")
			return "D'";
		if (move == "F'")
			return "F'";
		if (move == "B'")
			return "B'";

		if (move == "D2")
			return "L2";
		if (move == "U2")
			return "R2";
		if (move == "L2")
			return "U2";
		if (move == "R2")
			return "D2";
		if (move == "F2")
			return "F2";
		if (move == "B2")
			return "B2";
	}
	if (rot == "x2")
	{
		if (move == "L")
			return "L";
		if (move == "R")
			return "R";
		if (move == "D")
			return "U";
		if (move == "U")
			return "D";
		if (move == "B")
			return "F";
		if (move == "F")
			return "B";

		if (move == "L'")
			return "L'";
		if (move == "R'")
			return "R'";
		if (move == "D'")
			return "U'";
		if (move == "U'")
			return "D'";
		if (move == "B'")
			return "F'";
		if (move == "F'")
			return "B'";

		if (move == "L2")
			return "L2";
		if (move == "R2")
			return "R2";
		if (move == "D2")
			return "U2";
		if (move == "U2")
			return "D2";
		if (move == "B2")
			return "F2";
		if (move == "F2")
			return "B2";
	}
	if (rot == "y2")
	{
		if (move == "R")
			return "L";
		if (move == "L")
			return "R";
		if (move == "U")
			return "U";
		if (move == "D")
			return "D";
		if (move == "B")
			return "F";
		if (move == "F")
			return "B";

		if (move == "R'")
			return "L'";
		if (move == "L'")
			return "R'";
		if (move == "U'")
			return "U'";
		if (move == "D'")
			return "D'";
		if (move == "B'")
			return "F'";
		if (move == "F'")
			return "B'";

		if (move == "R2")
			return "L2";
		if (move == "L2")
			return "R2";
		if (move == "U2")
			return "U2";
		if (move == "D2")
			return "D2";
		if (move == "B2")
			return "F2";
		if (move == "F2")
			return "B2";
	}
	if (rot == "z2")
	{
		if (move == "R")
			return "L";
		if (move == "L")
			return "R";
		if (move == "D")
			return "U";
		if (move == "U")
			return "D";
		if (move == "F")
			return "F";
		if (move == "B")
			return "B";

		if (move == "R'")
			return "L'";
		if (move == "L'")
			return "R'";
		if (move == "D'")
			return "U'";
		if (move == "U'")
			return "D'";
		if (move == "F'")
			return "F'";
		if (move == "B'")
			return "B'";

		if (move == "R2")
			return "L2";
		if (move == "L2")
			return "R2";
		if (move == "D2")
			return "U2";
		if (move == "U2")
			return "D2";
		if (move == "F2")
			return "F2";
		if (move == "B2")
			return "B2";
	}
}
bool IsRot(std::string rot)
{
	if (rot == "x")
	{
		return true;
	}
	if (rot == "y")
	{
		return true;
	}
	if (rot == "z")
	{
		return true;
	}
	if (rot == "x'")
	{
		return true;
	}
	if (rot == "y'")
	{
		return true;
	}
	if (rot == "z'")
	{
		return true;
	}
	if (rot == "x2")
	{
		return true;
	}
	if (rot == "y2")
	{
		return true;
	}
	if (rot == "z2")
	{
		return true;
	}
	if (rot == "l")
	{
		return true;
	}
	if (rot == "l'")
	{
		return true;
	}
	if (rot == "l2")
	{
		return true;
	}
	if (rot == "r")
	{
		return true;
	}
	if (rot == "r'")
	{
		return true;
	}
	if (rot == "r2")
	{
		return true;
	}
	if (rot == "u")
	{
		return true;
	}
	if (rot == "u'")
	{
		return true;
	}
	if (rot == "u2")
	{
		return true;
	}
	if (rot == "d")
	{
		return true;
	}
	if (rot == "d'")
	{
		return true;
	}
	if (rot == "d2")
	{
		return true;
	}
	if (rot == "f")
	{
		return true;
	}
	if (rot == "f'")
	{
		return true;
	}
	if (rot == "f2")
	{
		return true;
	}
	if (rot == "b")
	{
		return true;
	}
	if (rot == "b'")
	{
		return true;
	}
	if (rot == "b2")
	{
		return true;
	}
	if (rot == "M")
	{
		return true;
	}
	if (rot == "M'")
	{
		return true;
	}
	if (rot == "M2")
	{
		return true;
	}
	if (rot == "S")
	{
		return true;
	}
	if (rot == "S'")
	{
		return true;
	}
	if (rot == "S2")
	{
		return true;
	}
	if (rot == "E")
	{
		return true;
	}
	if (rot == "E'")
	{
		return true;
	}
	if (rot == "E2")
	{
		return true;
	}
	return false;
}
std::vector <std::string> ScrumbleParser(std::string Scrumble)
{
	std::vector <std::string> out;
	for (int i = 0; i <= Scrumble.length(); i++)
	{
		if (Scrumble[i] == 'L' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("L");
		}
		else if (Scrumble[i] == 'R' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("R");
		}
		else if (Scrumble[i] == 'U' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("U");
		}
		else if (Scrumble[i] == 'D' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("D");
		}
		else if (Scrumble[i] == 'F' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("F");
		}
		else if (Scrumble[i] == 'B' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("B");
		}
		else if (Scrumble[i] == 'L' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("L'");
		}
		else if (Scrumble[i] == 'R' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("R'");
		}
		else if (Scrumble[i] == 'U' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("U'");
		}
		else if (Scrumble[i] == 'D' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("D'");
		}
		else if (Scrumble[i] == 'F' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("F'");
		}
		else if (Scrumble[i] == 'B' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("B'");
		}
		else if (Scrumble[i] == 'L' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("L2");
		}
		else if (Scrumble[i] == 'R' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("R2");
		}
		else if (Scrumble[i] == 'U' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("U2");
		}
		else if (Scrumble[i] == 'D' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("D2");
		}
		else if (Scrumble[i] == 'F' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("F2");
		}
		else if (Scrumble[i] == 'B' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("B2");
		}
		else if (Scrumble[i] == 'l' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("l2");
		}
		else if (Scrumble[i] == 'r' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("r2");
		}
		else if (Scrumble[i] == 'u' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("u2");
		}
		else if (Scrumble[i] == 'd' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("d2");
		}
		else if (Scrumble[i] == 'f' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("f2");
		}
		else if (Scrumble[i] == 'b' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("b2");
		}
		else if (Scrumble[i] == 'l' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("l");
		}
		else if (Scrumble[i] == 'r' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("r");
		}
		else if (Scrumble[i] == 'u' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("u");
		}
		else if (Scrumble[i] == 'd' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("d");
		}
		else if (Scrumble[i] == 'f' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("f");
		}
		else if (Scrumble[i] == 'b' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("b");
		}
		else if (Scrumble[i] == 'l' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("l'");
		}
		else if (Scrumble[i] == 'r' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("r'");
		}
		else if (Scrumble[i] == 'u' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("u'");
		}
		else if (Scrumble[i] == 'd' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("d'");
		}
		else if (Scrumble[i] == 'f' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("f'");
		}
		else if (Scrumble[i] == 'b' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("b'");
		}
		else if (Scrumble[i] == 'x' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("x2");
		}
		else if (Scrumble[i] == 'y' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("y2");
		}
		else if (Scrumble[i] == 'z' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("z2");
		}
		else if (Scrumble[i] == 'x' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("x");
		}
		else if (Scrumble[i] == 'y' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("y");
		}
		else if (Scrumble[i] == 'z' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("z");
		}
		else if (Scrumble[i] == 'x' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("x'");
		}
		else if (Scrumble[i] == 'y' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("y'");
		}
		else if (Scrumble[i] == 'z' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("z'");
		}
		else if (Scrumble[i] == 'M' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("M2");
		}
		else if (Scrumble[i] == 'E' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("E2");
		}
		else if (Scrumble[i] == 'S' && Scrumble[i + 1] == '2' && Scrumble[i + 1] != '\'')
		{
			out.push_back("S2");
		}
		else if (Scrumble[i] == 'M' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("M");
		}
		else if (Scrumble[i] == 'E' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("E");
		}
		else if (Scrumble[i] == 'S' && Scrumble[i + 1] != '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("S");
		}
		else if (Scrumble[i] == 'M' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("M'");

		}
		else if (Scrumble[i] == 'E' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("E'");
		}
		else if (Scrumble[i] == 'S' && Scrumble[i + 1] == '\'' && Scrumble[i + 1] != '2')
		{
			out.push_back("S'");
		}
	}
	return out;
}
std::string scrumblesimplifier(std::string scr)
{
	std::vector <std::string> pars = ScrumbleParser(scr);
	std::vector <std::string> sol, que;
	std::string buff;
	for (int i = 0; i < pars.size(); i++)
	{
		{
			if (pars.at(i) == "x")
			{
				que.push_back("x");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "y")
			{
				que.push_back("y");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "z")
			{
				que.push_back("z");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "x'")
			{
				que.push_back("x'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "y'")
			{
				que.push_back("y'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "z'")
			{
				que.push_back("z'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "x2")
			{
				que.push_back("x2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "y2")
			{
				que.push_back("y2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "z2")
			{
				que.push_back("z2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "l")
			{
				que.push_back("x'");
				//pars.at(i) = "R";
				sol.push_back("R");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "l'")
			{
				que.push_back("x");
				//pars.at(i) = "R'";
				sol.push_back("R'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "l2")
			{
				que.push_back("x2");
				sol.push_back("R2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "r")
			{
				que.push_back("x");
				pars.at(i) = "L";
				/*sol.push_back("L");
				if (pars.size() <= i)
					i++;*/
			}
			if (pars.at(i) == "r'")
			{
				que.push_back("x'");
				pars.at(i) = "L'";
				/*sol.push_back("L'");
				if (pars.size() <= i)
					i++;*/
			}
			if (pars.at(i) == "r2")
			{
				que.push_back("x2");
				sol.push_back("L2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "u")
			{
				que.push_back("y");
				sol.push_back("D");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "u'")
			{
				que.push_back("y'");
				sol.push_back("D'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "u2")
			{
				que.push_back("y2");
				sol.push_back("D2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "d")
			{
				que.push_back("y'");
				sol.push_back("U");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "d'")
			{
				que.push_back("y");
				sol.push_back("U'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "d2")
			{
				que.push_back("y2");
				sol.push_back("D2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "f")
			{
				que.push_back("z");
				sol.push_back("B");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "f'")
			{
				que.push_back("z'");
				sol.push_back("B'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "f2")
			{
				que.push_back("z2");
				sol.push_back("B2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "b")
			{
				que.push_back("z'");
				sol.push_back("F");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "b'")
			{
				que.push_back("z");
				sol.push_back("F'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "b2")
			{
				que.push_back("z2");
				sol.push_back("F2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "M")
			{
				que.push_back("x'");
				sol.push_back("L'");
				sol.push_back("R");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "M'")
			{
				que.push_back("x");
				sol.push_back("L");
				sol.push_back("R'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "M2")
			{
				que.push_back("x2");
				sol.push_back("L2");
				sol.push_back("R2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "S")
			{
				que.push_back("z");
				sol.push_back("F'");
				sol.push_back("B");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "S'")
			{
				que.push_back("z'");
				sol.push_back("F");
				sol.push_back("B'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "S2")
			{
				que.push_back("z2");
				sol.push_back("F2");
				sol.push_back("B2");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "E")
			{
				que.push_back("y'");
				sol.push_back("U");
				sol.push_back("D'");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "E'")
			{
				que.push_back("y");
				sol.push_back("U'");
				sol.push_back("D");
				if (pars.size() <= i)
					i++;
			}
			if (pars.at(i) == "E2")
			{
				que.push_back("y2");
				sol.push_back("U2");
				sol.push_back("D2");
				if (pars.size() <= i)
					i++;
			}
		}
		if (que.empty())
		{
			sol.push_back(pars.at(i));
		}
		else if (!IsRot(pars.at(i)))
		{
			for (int j = 0; j < que.size(); j++)
			{
				buff = transformator(que.at(j), pars.at(i));
				pars.at(i) = buff;
			}
			sol.push_back(pars.at(i));
		}
	}
	buff = sol.at(0);
	for (int j = 1; j < sol.size(); j++)
	{
		buff += sol.at(j);
	}
	return buff;
}

std::string SolveCube(Cube cube1)
{
	//std::string allmoves[19] = { "U'","U","U2","","R","R2","R'","F","F2","F'","L","L2","L'","B","B2","B'","D","D2","D'" };

	std::string rotcases[4] = { "","y2","y","y'" };

	std::string aufcases[4] = { "","U","U2","U'" };

	std::string sexymovecases[5] = { "","RUR'","L'U'L","R'U'R","LUL'" };

	std::string f2lcases[41] = { "URU'R'","U'F'UF","RUR'","F'U'F","RU'R'URU'R'","F'UFU'F'UF",
	"RUR'U'RUR'","F'U'FUF'U'F","U'RUR'U2RU'R'","UF'U'FU2F'UF","U'RU2R'U2RU'R'","UF'U2FU2F'UF",
	"U'RU'R'UF'U'F","UF'UFU'RUR'","U'RU2R'UF'U'F","RU'R'URU'R'U2RU'R'","U'RU'R'URUR'","UF'UFU'F'U'F",
	"R2B'R'BR'U2RU'R'","F2LFL'FU2F'UF","RU2R'U'RUR'","F'U2FUF'U'F","URU2R'URU'R'","U'F'U2FU'F'UF",
	"U2RUR'URU'R'","U2F'U'FU'F'UF","URU'R'U'RU'R'URU'R'","U'F'UFUF'UFU'F'UF","R'F'RURU'R'F","URU'R'FR'F'R",
	"U'R'FRF'RU'R'","URU'R'URU'R'URU'R'","U'RU'R'U2RU'R'","U'RU2R'URUR'","U'RUR'UF'U'F","UF'U'FU'RUR'",
	"RU'R'U'RUR'U2RU'R'","F'UFUF'U'FU2F'UF","RU'R'U'RU'R'UF'U'F","F'UFU2RU'R'U'RUR'","RU'R'UF'U2FU2F'UF" };

	std::string ollcases[57] = { "RU2R2FRF'U2R'FRF'","FRUR'U'F'BULU'L'B'","L'RB'LU2L'B'RB'R2L","L'R2BR'BLU2L'BR'L","RUR'UR'FRF'U2R'FRF'","LFR'FRF2L2B'RB'R'B2L",
	"L'B2RBR'BL2F2R'F'RF'L'","L'RBRBR'B'L2R2FRF'L'","RU2R2U'RU'R'U2FRF'","FRUR'U'RF'LFR'F'L'","FURU'R'URU'R'F'","R'U'RU'R'UF'UFR","LF2R'F'RFR'F'RF'L'","L'B2RBR'B'RBR'BL",
	"RB'R2FR2BR2F'R","R'FR2B'R2F'R2BR'","FRUR'U'RUR'U'F'","B'R'U'RUR'U'RUB","LFR'FRF2L'","L'B'RB'R'B2L","LR2F'RF'R'F2RF'RL'","L'R2BR'BRB2R'BR'L","R'U'RFR'F'UFRF'","U2RUR'UR'FRF'RU2R'",
	"L'B2RBR'BL","LF2R'F'RF'L'","FURU'U'R'U'RUR'F'","R'FRUR'F'RFU'F'","LFL'RUR'U'LF'L'","R'F'RL'U'LUR'FR","RUR'URU2R'FRUR'U'F'","R'U'RUFRUR'U'R'URU'F'","R2UR'B'RU'R2URBR'",
	"RUR'U'RU'R'F'U'FRUR'","RUB'U'R'URBR'","R'U'FURU'R'F'R","FRU'R'U'RUR'F'","FURU'R'F'","B'U'R'URB","RU2R2FRF'RU2R'","FRUR'U'F'","RUR'U'R'FRF'","RB'R'U'RUBU'R'","R'FRUR'U'F'UR",
	"RUR2U'R'FRURU'F'","R'U'R'FRF'UR","RUR'URU'R'U'R'FRF'", "R'U'RU'R'URURB'R'B","RU2R'U'RUR'U'RU'R'","RU2R2U'R2U'R2U2R","R'U2RFU'R'U'RUF'","LFR'F'L'FRF'","F'LFR'F'L'FR","RU2R'U'RU'R'",
	"RUR'URU2R'","LFR'F'L'RURU'R'","RUR'U'LR'FRF'L'" };

	std::string pllcases[21] = { "R'FR'B2RF'R'B2R2","R2B2RFR'B2RF'R","R'U'R'D'RU'R'DRUR'D'RUR'DR2","R'UR'U'R'U'R'URUR2","R2U'R'U'RURURU'R","R'U'RU'RURU'R'URUR2U'R'","R2U2R'U2R2U2R2U2R'U2R2",
	"RUR'F'RUR'U'R'FR2U'R'","L'R'U2RUR'U2LU'R",	"R'U2RU2R'FRUR'U'R'F'R2","RU2R'U2RB'R'U'RURBR2","RUR'U'R'FR2U'R'U'RUR'F'","R'U'F'RUR'U'R'FR2U'R'U'RUR'UR","L'URU'LUL'UR'U'LU2RU'U'R'",
	"FRU'R'U'RUR'F'RUR'U'R'FRF'","R'URU'R'F'U'FRUR'FR'F'RU'R","RU'R'URBUB'R'U'RB'RBR'UR'","RUR'F2D'LU'L'UL'DF2","R2D'FU'FUF'DR2BU'B'","F'U'FR2DB'UBU'BD'R2","R2DB'UB'U'BD'R2F'UF" };

	Cube cur = cube1;
	std::string a0, a, b, b1, b2, b3, c, d, e, f, g, h, i, j, solution;

	a0 = Pre_SolveCube(cur);
	//std::cout << a0 << "  -  pre cube (3 step max)\n";
	cur.SetScrumble(a0);

	a = Pre_SolveCross1(cur);
	//std::cout << a << "  -  pre cross (3 step max)\n";
	cur.SetScrumble(a);

	b = Pre_SolveThreeCrossPieces(cur);
	//std::cout << b << "  -  3 cross pieces (4 step max)\n";
	cur.SetScrumble(b);

	b1 = Pre_SolveTwoCrossPieces(cur);
	//std::cout << b1 << "  -  2 cross pieces\n";
	cur.SetScrumble(b1);

	b2 = Pre_SolveCross1(cur);
	//std::cout << b2 << "  -  pre cross2 (3 step max)\n";
	cur.SetScrumble(b2);

	b3 = Pre_SolveThreeCrossPieces(cur);
	//std::cout << b3 << "  -  3 cross pieces\n";
	cur.SetScrumble(b3);

	c = Pre_SolveCross2(cur);
	//std::cout << c << "  -  cross\n";
	cur.SetScrumble(c);

	d = Pre_SolveOnePair(cur, sexymovecases, rotcases, aufcases, f2lcases);
	//std::cout << d << "  -  1 pair\n";
	cur.SetScrumble(d);

	e = Pre_SolveTwoPairs(cur, sexymovecases, rotcases, aufcases, f2lcases);
	//std::cout << e << "  -  2 pair\n";
	cur.SetScrumble(e);

	f = Pre_SolveThreePairs(cur, sexymovecases, rotcases, aufcases, f2lcases);
	//std::cout << f << "  -  3 pair\n";
	cur.SetScrumble(f);

	g = Pre_SolveFourPairs(cur, aufcases, f2lcases);
	//std::cout << g << "  -  4 pair\n";
	cur.SetScrumble(g);

	h = Pre_OLL(cur, aufcases, ollcases);
	//std::cout << h << "  -  oll\n";
	cur.SetScrumble(h);

	i = Pre_PLL(cur, aufcases, pllcases);
	//std::cout << i << "  -  pll\n";
	cur.SetScrumble(i);

	j = Pre_AUF(cur, aufcases);
	//std::cout << j << "  -  auf\n";
	cur.SetScrumble(j);

	solution = scrumblesimplifier(a0 + a + b + b1 + b2 + b3 + c + d + e + f + g + h + i + j);

	return solution;
}
//Добавить больше случаев f2l из pdf.
//Допилить симплифаер.
int main()
{
	std::string solve;
	int am;
	/*Cube Cube2("E");
	Cube2.PrintCube();
	BoolCheck(Cube2.IsLastLayerPermuted());*/
	Cube Cube1("L R U2 F2 D2 F2 U2 L2 R D2 B2 R' F U' B' U' R F R'");
	Cube1.PrintCube();
	solve = SolveCube(Cube1);
	std::cout << "Solution: " << solve << "\n";
	am = Cube1.SetScrumble(solve);
	std::cout << "Moves: " << am << "\n";
	Cube1.PrintCube();
	Cube1.PrintBoolIsSolved();
}

//Comments for Testing
//3 step cross scrumble D2 L D2 R' U2 F2 R' B2 F2 D2 B2 R' F U B2 U2 R F2 D2 U L'
//T perm - R (U R') U' (R' F) (R2 U') R' U' R (U R') F'
// L R2 B' D2 F' U2 F' D2 L2 R' F2 U' R U' R' D' R test 1
//fast FRD - RUR'U' FLD - L'U'LU  BRD - R'U'RU  BLD - LUL'U'
//problem scrumbles
