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
  void A(int colnumber)
  {
    int col = col_num(colnumber);
    for (int i = 0; i < 7; i++)
    {
      for (int j = 0; j < 7; j++)
      {
        if (i == 0)
        {
          if (j == 2 || j == 3 || j == 4)
            letters[i][j + col] = '%';
          else
            letters[i][j + col] = ' ';
        }

        if (i == 1)
        {
          if (j % 3 == 0)
          {
            letters[i][j + col] = ' ';
          }
          else
          letters[i][j + col] = '%';
        }

        if (i == 2 || i == 3 || i == 5 || i == 6)
        {
          if (j == 0 || j == 1 || j == 5 || j == 6)
          {
            letters[i][j + col] = '%';          }
          else
          {
           letters[i][j + col] = ' ';
          }
        }

        if (i == 4)
        {

         letters[i][j + col] = '%';
        }
      }
    }
  }
 void B(int colnumber)
{ int col=col_num(colnumber);
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(i==0||i==6)
			{
				  if(j==5||j==6) letters[i][j + col] = ' ';
				  else letters[i][j + col] = '%';

			}			
			
			if(i>=1&&i<=5&&i!=3)
			{
				if(j==2||j==3||j==4)letters[i][j + col] = ' ';
				else letters[i][j + col] = '%';
			}

			

			if(i==3)
			{
				if(j==6) letters[i][j + col] = ' ';
				else letters[i][j + col] = '%';			}
			
	
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
};
#endif