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
	
	void a(int colnumber)
	{
		int col=col_num(colnumber);

		letters[2][2+col]=letters[2][3+col]=letters[2][5+col]='_';
		letters[3][1+col]='/';letters[3][3+col]='_';letters[3][4+col]='`';letters[3][6+col]='|';
	letters[4][0+col]='|';letters[4][2+col]='(';letters[4][3+col]='_';letters[4][4+col]='|';letters[4][6+col]='|';
	letters[5][1+col]='\\';letters[5][2+col]='_';letters[5][3+col]='_';letters[5][4+col]=',';letters[5][5+col]='_';letters[5][6+col]='|';
}

void A(int colnumber)
{
	
	int col =col_num(colnumber);
	letters[0][2+col]=letters[0][3+col]=letters[0][4+col]=letters[1][3+col]=letters[2][3+col]=letters[3][3+col]=letters[5][1+col]=letters[5][5+col]='_';
	letters[1][1+col]=letters[2][0+col]=letters[2][2+col]=letters[5][6+col]='/';
	letters[1][5+col]=letters[2][4+col]=letters[2][6+col]=letters[5][0+col]='\\';
	letters[3][0+col]=letters[3][6+col]=letters[4][0+col]=letters[4][2+col]=letters[4][4+col]=letters[4][6+col]=letters[5][2+col]=letters[5][4+col]='|';
	

}
};
#endif