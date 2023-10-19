#ifndef SEVENSTAR_H
#define SEVENSTAR_H
#define ROWS 7
#define COLS 7
#include "../fonts.h"

class SevenStar : public Fonts
{
	static const int rows = 7;
	static const int cols = 7;

public:
	SevenStar() : Fonts(rows, cols) {}

	char **A()
	{
		char **character = getCharGrid();

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 1)
				{
					if (j % 3 == 0)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 3 || i == 5 || i == 6)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				if (i == 4)
				{

					character[i][j] = '%';
				}
			}
		}

		return character;
	}
	char **B()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 1 && i <= 5 && i != 3)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}
	char **C()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				// first aur last line
				if (i == 0 || i == 6)
				{
					if ((j % 7) % 3 != 0)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				// second nd second last line

				if (i == 1 || i == 5)
				{
					if (((j) % 7) < 2 || ((j) % 7) > 4)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				// rest

				if (i == 2 || i == 4 || i == 3)
				{
					if (((j) % 7) < 2)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}
	char **D()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (((j) % 7) != 0 && ((j) % 7) % 3 == 0)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (((j) % 7) == 1 || ((j) % 7) == 2 || ((j) % 7) == 5 || ((j) % 7) == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **E()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **F()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					character[i][j] = '%';
				}

				if (i == 2 || i == 5 || i == 6 || i == 1 || i == 4)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **G()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5 || i == 4)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 2 || j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **H()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i >= 0 && i <= 6)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j > 1 && j < 5)
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **I()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					character[i][j] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
					{
						character[i][j] = '%';
					}
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **J()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j < 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2 || i == 3)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 6)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **K()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 4 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 2 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **L()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i < 6)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				else
					character[i][j] = '%';
			}
		}
		return character;
	}

	char **M()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1)
				{
					if (j == 3)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **N()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 1)
				{
					if (j == 3 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
					{
						character[i][j] = '%';
					}
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}
	char **O()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6 || i == 0)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			//	cout<<endl;
		}
		return character;
	}

	char **P()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2)
				{
					if (j == 2 || j == 3 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 0 || j == 1)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}

	char **Q()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j % 3 == 0)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 1 && i <= 4)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				if (i == 6)
				{
					if (j == 0 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **R()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
			// cout<<endl;
		}
		return character;
	}

	char **S()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 3 || j == 2 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5 || j == 6)
					{
						character[i][j] = ' ';
					}
					else
					{
						character[i][j] = '%';
					}
				}

				if (i == 3)
				{

					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					if (j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **T()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					character[i][j] = '%';
				}

				if (i >= 1 && i <= 6)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **U()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i <= 5)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (j == 0 || j == 6)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **V()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 5)
				{
					if (j % 3 == 0)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}
				if (i < 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}

	char **W()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 2 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					character[i][j] = '%';
				}

				if (i == 5)
				{
					if (j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **X()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **Y()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{

			for (int j = 0; j < 7; j++)
			{

				if (i == 0 || i == 1 || i == 2)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i > 3)
				{
					if (j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **Z()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j > 0)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 1)
				{
					if (j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 5)
				{
					if (j == 1 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}

			// cout<<endl;
		}
		return character;
	}
	// small letter
	char **a()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 1)
				{
					if (j % 3 == 0)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 3 || i == 5 || i == 6)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				if (i == 4)
				{

					character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **b()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 1 && i <= 5 && i != 3)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}
	char **c()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				// first aur last line
				if (i == 0 || i == 6)
				{
					if ((j % 7) % 3 != 0)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				// second nd second last line

				if (i == 1 || i == 5)
				{
					if (((j) % 7) < 2 || ((j) % 7) > 4)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}

				// rest

				if (i == 2 || i == 4 || i == 3)
				{
					if (((j) % 7) < 2)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}
	char **d()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (((j) % 7) != 0 && ((j) % 7) % 3 == 0)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (((j) % 7) == 1 || ((j) % 7) == 2 || ((j) % 7) == 5 || ((j) % 7) == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **e()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **f()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					character[i][j] = '%';
				}

				if (i == 2 || i == 5 || i == 6 || i == 1 || i == 4)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **g()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5 || i == 4)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j == 2 || j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **h()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i >= 0 && i <= 6)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 3)
				{
					if (j > 1 && j < 5)
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **i()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					character[i][j] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
					{
						character[i][j] = '%';
					}
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **j()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j < 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2 || i == 3)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 6)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **k()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 4 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 2 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **l()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i < 6)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				else
					character[i][j] = '%';
			}
		}
		return character;
	}

	char **m()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1)
				{
					if (j == 3)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **n()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 1)
				{
					if (j == 3 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
					{
						character[i][j] = '%';
					}
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}
	char **o()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6 || i == 0)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			//	cout<<endl;
		}
		return character;
	}

	char **p()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2)
				{
					if (j == 2 || j == 3 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 0 || j == 1)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}

	char **q()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j % 3 == 0)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i >= 1 && i <= 4)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				if (i == 6)
				{
					if (j == 0 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **r()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 2 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}
			// cout<<endl;
		}
		return character;
	}

	char **s()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 3 || j == 2 || j == 4)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5 || j == 6)
					{
						character[i][j] = ' ';
					}
					else
					{
						character[i][j] = '%';
					}
				}

				if (i == 3)
				{

					if (j == 0 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					if (j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **t()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					character[i][j] = '%';
				}

				if (i >= 1 && i <= 6)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **u()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i <= 5)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
				else
				{
					if (j == 0 || j == 6)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}
			}
		}
		return character;
	}

	char **v()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 5)
				{
					if (j % 3 == 0)
					{
						character[i][j] = ' ';
					}
					else
						character[i][j] = '%';
				}
				if (i < 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
					{
						character[i][j] = '%';
					}
					else
					{
						character[i][j] = ' ';
					}
				}
			}
		}
		return character;
	}

	char **w()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 2 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 4)
				{
					character[i][j] = '%';
				}

				if (i == 5)
				{
					if (j == 3)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	char **x()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **y()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{

			for (int j = 0; j < 7; j++)
			{

				if (i == 0 || i == 1 || i == 2)
				{
					if (j == 2 || j == 3 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i == 3)
				{
					if (j == 0 || j == 5 || j == 6)
						character[i][j] = ' ';
					else
						character[i][j] = '%';
				}

				if (i > 3)
				{
					if (j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **z()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j > 0)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 1)
				{
					if (j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 3 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 5)
				{
					if (j == 1 || j == 2)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}

			// cout<<endl;
		}
		return character;
	}

	// digits
	char **zero()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 3 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 0 || j == 1 || j == 2 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **one()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 2 || i == 3 || i == 4 || i == 5)
				{
					if (j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 1 || j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 6)
				{
					if (j == 1 || j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}
	char **two()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 5)
				{
					if (j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 6)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **three()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2 || i == 4)
				{
					if (j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **four()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 5 || i == 6)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 0 || j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **five()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **six()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1 || i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **seven()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 3 || j == 4)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3 || i == 4 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **eight()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1 || i == 2 || i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	char **nine()
	{
		char **character = getCharGrid();
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 1)
				{
					if (j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 3)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 4)
				{
					if (j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
				if (i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						character[i][j] = '%';
					else
						character[i][j] = ' ';
				}
			}
		}
		return character;
	}

	 // for space
     char **space()
    {
        char **character = getCharGrid(1,1);

        character[0][0] = ' ';

        return character;
    }
};
#endif