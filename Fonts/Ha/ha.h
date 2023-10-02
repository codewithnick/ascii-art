#ifndef HA_H
#define HA_H
#include "../fonts.h"
class Ha : public Fonts
{
public:
	Ha() {}

	
  char** H()
	{



		char** character = getCharGrid();

		character[0][1]=character[0][5]=character[3][3]=character[2][3]=character[5][1]=character[5][5]='_';
		character[1][0]=character[1][2]=character[1][4]=character[1][6]=character[2][0]=character[2][2]=character[2][4]=character[2][6]=character[3][0]=character[3][6]=character[4][0]=character[4][2]=character[4][4]=character[4][6]=character[5][2]=character[5][4]='|';
        character[5][0]='\\';
		character[5][6]='/';
		
		return character;
	}
};
#endif
