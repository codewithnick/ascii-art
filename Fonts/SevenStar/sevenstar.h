#ifndef SEVENSTAR_H
#define SEVENSTAR_H
#include "../fonts.h"
class SevenStar : public Fonts
{
public:
	SevenStar() {}
	inline int col_num(int colnumber)
	{
		return (colnumber != 0) ? ((colnumber * 7) + colnumber + colnumber) : 0;
	}
	std::vector<std::vector<char>> A()
	{

		std::vector<std::vector<char>> character = getCharGrid();
		
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
	void B(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 5 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i >= 1 && i <= 5 && i != 3)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}
	void C(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				// first aur last line
				if (i == 0 || i == 6)
				{
					if ((j % 7) % 3 != 0)
					{
						letters[i][j + col] = '%';
					}
					else
					{
						letters[i][j + col] = ' ';
					}
				}

				// second nd second last line

				if (i == 1 || i == 5)
				{
					if (((j) % 7) < 2 || ((j) % 7) > 4)
					{
						letters[i][j + col] = '%';
					}
					else
					{
						letters[i][j + col] = ' ';
					}
				}

				// rest

				if (i == 2 || i == 4 || i == 3)
				{
					if (((j) % 7) < 2)
					{
						letters[i][j + col] = '%';
					}
					else
					{
						letters[i][j + col] = ' ';
					}
				}
			}
		}
	}
	void D(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (((j) % 7) != 0 && ((j) % 7) % 3 == 0)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
				else
				{
					if (((j) % 7) == 1 || ((j) % 7) == 2 || ((j) % 7) == 5 || ((j) % 7) == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}
	void E(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					letters[i][j + col] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void F(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					letters[i][j + col] = '%';
				}

				if (i == 2 || i == 5 || i == 6 || i == 1 || i == 4)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 3)
				{
					if (j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}

			// cout<<endl;
		}
	}

	void G(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 5 || i == 4)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 3)
				{
					if (j == 2 || j == 3)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 2)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void H(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i >= 0 && i <= 6)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 3)
				{
					if (j > 1 && j < 5)
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void I(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					letters[i][j + col] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
					{
						letters[i][j + col] = '%';
					}
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}
	void J(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j < 3)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 2 || i == 3)
				{
					if (j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 6)
				{
					if (j == 0 || j == 5 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void K(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 4 || j == 5 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 2 || j == 5 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void L(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i < 6)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				else
					letters[i][j + col] = '%';
			}
		}
	}

	void M(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1)
				{
					if (j == 3)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}

				if (i == 2)
				{
					letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void N(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 2 || i == 1)
				{
					if (j == 3 || j == 4)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
					{
						letters[i][j + col] = ' ';
					}
					else
					{
						letters[i][j + col] = '%';
					}
				}

				if (i == 4 || i == 5)
				{
					if (j == 2 || j == 3)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}
	void O(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6 || i == 0)
				{
					if (j == 0 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
				else
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}

			//	cout<<endl;
		}
	}

	void P(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 2)
				{
					if (j == 2 || j == 3 || j == 4)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}

				if (i >= 4 && i <= 6)
				{
					if (j == 0 || j == 1)
					{
						letters[i][j + col] = '%';
					}
					else
					{
						letters[i][j + col] = ' ';
					}
				}
			}
		}
	}

	void Q(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j % 3 == 0)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i >= 1 && i <= 4)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 5)
				{
					if (j == 2 || j == 3 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
				if (i == 6)
				{
					if (j == 0 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}

			// cout<<endl;
		}
	}

	void R(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3)
				{
					if (j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 2 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 4)
				{
					if (j == 2 || j == 3 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}
			// cout<<endl;
		}
	}

	void S(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 0 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 1 || i == 5)
				{
					if (j == 3 || j == 2 || j == 4)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5 || j == 6)
					{
						letters[i][j + col] = ' ';
					}
					else
					{
						letters[i][j + col] = '%';
					}
				}

				if (i == 3)
				{

					if (j == 0 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 4)
				{
					if (j == 4 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void T(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					letters[i][j + col] = '%';
				}

				if (i >= 1 && i <= 6)
				{
					if (j == 3 || j == 2)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}

			// cout<<endl;
		}
	}

	void U(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i <= 5)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
				else
				{
					if (j == 0 || j == 6)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}
			}
		}
	}

	void V(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 5)
				{
					if (j % 3 == 0)
					{
						letters[i][j + col] = ' ';
					}
					else
						letters[i][j + col] = '%';
				}
				if (i < 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
					{
						letters[i][j + col] = '%';
					}
					else
					{
						letters[i][j + col] = ' ';
					}
				}
			}
		}
	}

	void W(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 2 || i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 2 || j == 4)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 4)
				{
					letters[i][j + col] = '%';
				}

				if (i == 5)
				{
					if (j == 3)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}
			}

			// cout<<endl;
		}
	}

	void X(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 1 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 2 || i == 4)
				{
					if (j == 0 || j == 5 || j == 6)
						letters[i][j + col] = ' ';
					else
						letters[i][j + col] = '%';
				}

				if (i == 3)
				{
					if (j == 3 || j == 2)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}
	void Y(int colnumber)
{
	int col = col_num(colnumber);
    for(int i=0;i<7;i++)
    {

        for(int j=0;j<7;j++)
        {
          
            if(i==0||i==1||i==2)
            {
                 if(j==2||j==3||j==6) letters[i][j + col] = ' ';
                 else letters[i][j + col] = '%';
            }
            

            if(i==3)
            {
                if(j==0||j==5||j==6) letters[i][j + col] = ' ';
                else letters[i][j + col] = '%';
            }

            if(i>3)
            {
                if(j==2||j==3) letters[i][j + col] = '%';
                else letters[i][j + col] = ' ';
            }

        }
	}
}





	void Z(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j > 0)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 1)
				{
					if (j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}

				if (i == 2)
				{
					if (j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4)
				{
					if (j == 3 || j == 2)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 5)
				{
					if (j == 1 || j == 2)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}

			// cout<<endl;
		}
	}


	
	void zero(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 3 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4)
				{
					if (j == 0 || j == 1 || j == 2 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void one(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 2 || i == 3 || i == 4 || i == 5)
				{
					if (j == 2 || j == 3)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 1 || j == 2 || j == 3)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 6)
				{
					if (j == 1 || j == 2 || j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}
	void two(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4)
				{
					if (j == 2 || j == 3)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 5)
				{
					if (j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 6)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void three(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2 || i == 4)
				{
					if (j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 3 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void four(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 5 || i == 6)
				{
					if (j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4)
				{
					if (j == 0 || j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void five(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 6)
				{
					if (j == 2 || j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void six(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1 || i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 0 || j == 1 || j == 3 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void seven(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0)
				{
					if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 0 || j == 1 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 3 || j == 4)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3 || i == 4 || i == 5 || i == 6)
				{
					if (j == 2 || j == 3)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void eight(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 3 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1 || i == 2 || i == 4 || i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}

	void nine(int colnumber)
	{
		int col = col_num(colnumber);
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i == 0 || i == 6)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 1)
				{
					if (j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 2)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 3)
				{
					if (j == 1 || j == 2 || j == 4 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 4)
				{
					if (j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
				if (i == 5)
				{
					if (j == 0 || j == 1 || j == 5 || j == 6)
						letters[i][j + col] = '%';
					else
						letters[i][j + col] = ' ';
				}
			}
		}
	}
};
#endif