#ifndef BOOMER_H
#define BOOMER_H
#include "../fonts.h"
class Boomer : public Fonts
{
public:
	Boomer() {}
	inline int col_num(int colnumber)
	{
		return (colnumber != 0) ? ((colnumber * 7) + colnumber + colnumber) : 0;
	}
	void A(int colnumber)
	{
		int col = col_num(colnumber);

		letters[0][2 + col] = letters[0][3 + col] = letters[0][5] = '_';
		letters[1][1 + col] = '/';
		letters[1][3 + col] = '_';
		letters[1][4 + col] = '`';
		letters[1][6 + col] = '|';
		letters[2][0 + col] = '|';
		letters[2][2 + col] = '(';
		letters[2][3 + col] = '_';
		letters[2][4 + col] = '|';
		letters[2][6 + col] = '|';
		letters[3][1 + col] = '\\';
		letters[3][2 + col] = '_';
		letters[3][3 + col] = '_';
		letters[3][4 + col] = ',';
		letters[3][5 + col] = '_';
		letters[3][6 + col] = '|';
	}
};
#endif