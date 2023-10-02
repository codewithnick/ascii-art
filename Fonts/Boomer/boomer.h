#ifndef BOOMER_H
#define BOOMER_H
#include "../fonts.h"
class Boomer : public Fonts
{
public:
	Boomer() {}

	char** a()
	{
		char** character = getCharGrid();

		character[2][2]=character[2][3]=character[2][5]='_';
		character[3][1]='/';character[3][3]='_';character[3][4]='`';character[3][6]='|';
		character[4][0]='|';character[4][2]='(';character[4][3]='_';character[4][4]='|';character[4][6]='|';
		character[5][1]='\\';character[5][2]='_';character[5][3]='_';character[5][4]=',';character[5][5]='_';character[5][6]='|';
		return character;
	}

	char** A()
	{

		char** character = getCharGrid();
		character[0][2]=character[0][3]=character[0][4]=character[1][3]=character[2][3]=character[3][3]=character[5][1]=character[5][5]='_';
		character[1][1]=character[2][0]=character[2][2]=character[5][6]='/';
		character[1][5]=character[2][4]=character[2][6]=character[5][0]='\\';
		character[3][0]=character[3][6]=character[4][0]=character[4][2]=character[4][4]=character[4][6]=character[5][2]=character[5][4]='|';
		return character;
	}
	char** J()
	{	
	
		char** character = getCharGrid();
		character[0][0]=character[0][1]=character[0][2]=character[0][6]=character[1][0]=character[1][1]=character[1][4]=character[1][5]=character[2][0]=character[2][1]=character[2][2]=character[2][3]=character[2][5]=character[3][0]=character[3][1]=character[3][2]=character[3][3]=character[3][5]=character[4][5]=character[5][6]=' ';
		character[1][2]=character[1][6]=character[2][4]=character[2][6]=character[3][4]=character[3][6]='|';
		character[4][0]=character[4][4]=character[4][6]=character[5][5]='/';
		character[4][1]=character[5][0]='\\';
		character[4][2]=character[4][3]=character[5][1]=character[5][2]=character[5][3]=character[5][4]=character[0][3]=character[0][4]=character[0][5]=character[1][3]=character[0][5]='_';
		return character;
	}
    
  
};
#endif
