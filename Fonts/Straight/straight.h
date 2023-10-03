#ifndef STRAIGHT_H
#define STRAIGHT_H
#define ROWS 7
#define COLS 7
#include "../fonts.h"
class Straight : public Fonts
{
    public:
       Straight() : Fonts(ROWS, COLS) {}

    char** A()
	{
		char** character = getCharGrid();

		for(int i=0;i<ROWS;i++) {
            for(int j=0;j<COLS;j++) {
                if((i==4 && j==2) || (i==6 && j==0)) {
                    character[i][j]='/';
                }
                else if((i==4 && j==3) || (i==6 && j==5)) {
                    character[i][j]='\\';
                }
                else if((i==6 && j==2) || (i==6 && j==3)) {
                    character[i][j]='-';
                }
            }
        }
        return character;
	}
};
#endif