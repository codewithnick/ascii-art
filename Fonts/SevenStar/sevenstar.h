#ifndef SEVENSTAR_H
#define SEVENSTAR_H
#include "../fonts.h"

class SevenStar : public Fonts
{
	static const int ROWS = 7;
	static const int COLS = 7;

public:
	SevenStar() : Fonts(ROWS, COLS) {}

	vs A()
	{
		vs character = getCharGrid();

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
	vs B()
	{
		vs character = getCharGrid();
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
	vs C()
	{
		vs character = getCharGrid();
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
	vs D()
	{
		vs character = getCharGrid();
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
	vs E()
	{
		vs character = getCharGrid();
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

	vs F()
	{
		vs character = getCharGrid();
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

	vs G()
	{
		vs character = getCharGrid();
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

	vs H()
	{
		vs character = getCharGrid();
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

	vs I()
	{
		vs character = getCharGrid();
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
	vs J()
	{
		vs character = getCharGrid();
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

	vs K()
	{
		vs character = getCharGrid();
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

	vs L()
	{
		vs character = getCharGrid();
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

	vs M()
	{
		vs character = getCharGrid();
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

	vs N()
	{
		vs character = getCharGrid();
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
	vs O()
	{
		vs character = getCharGrid();
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

	vs P()
	{
		vs character = getCharGrid();
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

	vs Q()
	{
		vs character = getCharGrid();
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

	vs R()
	{
		vs character = getCharGrid();
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

	vs S()
	{
		vs character = getCharGrid();
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

	vs T()
	{
		vs character = getCharGrid();
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

	vs U()
	{
		vs character = getCharGrid();
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

	vs V()
	{
		vs character = getCharGrid();
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

	vs W()
	{
		vs character = getCharGrid();
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

	vs X()
	{
		vs character = getCharGrid();
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
	vs Y()
	{
		vs character = getCharGrid();
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

	vs Z()
	{
		vs character = getCharGrid();
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
	vs a()
	{
		vs character = getCharGrid();
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

	vs b()
	{
		vs character = getCharGrid();
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
	vs c()
	{
		vs character = getCharGrid();
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
	vs d()
	{
		vs character = getCharGrid();
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
	vs e()
	{
		vs character = getCharGrid();
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

	vs f()
	{
		vs character = getCharGrid();
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

	vs g()
	{
		vs character = getCharGrid();
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

	vs h()
	{
		vs character = getCharGrid();
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

	vs i()
	{
		vs character = getCharGrid();
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
	vs j()
	{
		vs character = getCharGrid();
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

	vs k()
	{
		vs character = getCharGrid();
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

	vs l()
	{
		vs character = getCharGrid();
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

	vs m()
	{
		vs character = getCharGrid();
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

	vs n()
	{
		vs character = getCharGrid();
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
	vs o()
	{
		vs character = getCharGrid();
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

	vs p()
	{
		vs character = getCharGrid();
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

	vs q()
	{
		vs character = getCharGrid();
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

	vs r()
	{
		vs character = getCharGrid();
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

	vs s()
	{
		vs character = getCharGrid();
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

	vs t()
	{
		vs character = getCharGrid();
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

	vs u()
	{
		vs character = getCharGrid();
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

	vs v()
	{
		vs character = getCharGrid();
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

	vs w()
	{
		vs character = getCharGrid();
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

	vs x()
	{
		vs character = getCharGrid();
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
	vs y()
	{
		vs character = getCharGrid();
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

	vs z()
	{
		vs character = getCharGrid();
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
	vs zero()
	{
		vs character = getCharGrid();
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

	vs one()
	{
		vs character = getCharGrid();
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
	vs two()
	{
		vs character = getCharGrid();
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

	vs three()
	{
		vs character = getCharGrid();
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

	vs four()
	{
		vs character = getCharGrid();
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

	vs five()
	{
		vs character = getCharGrid();
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

	vs six()
	{
		vs character = getCharGrid();
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

	vs seven()
	{
		vs character = getCharGrid();
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

	vs eight()
	{
		vs character = getCharGrid();
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

	vs nine()
	{
		vs character = getCharGrid();
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
     vs space()
    {
        vs character = getCharGrid(1,1);

        character[0][0] = ' ';

        return character;
    }
};
#endif
