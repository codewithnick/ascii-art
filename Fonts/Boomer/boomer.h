#ifndef BOOMER_H
#define BOOMER_H
#define ROWS 7
#define COLS 7
#include "../fonts.h"

class Boomer : public Fonts
{
public:
	Boomer() : Fonts(ROWS, COLS) {}

	// Uppercase

	char **A()
	{

		char **character = getCharGrid();
		character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][3] = character[3][3] = character[5][1] = character[5][5] = '_';
		character[1][1] = character[2][0] = character[2][2] = character[5][6] = '/';
		character[1][5] = character[2][4] = character[2][6] = character[5][0] = '\\';
		character[3][0] = character[3][6] = character[4][0] = character[4][2] = character[4][4] = character[4][6] = character[5][2] = character[5][4] = '|';
		return character;
	}

	char **B()
	{
		char **character = getCharGrid();
		character[0][0] = character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][2] = character[1][3] = character[1][4] = character[2][3] = character[3][2] = character[3][3] = character[3][4] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[4][3] = '_';
		character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[2][2] = character[4][2] = '|';
		character[1][6] = character[3][6] = character[5][0] = '\\';
		character[2][4] = character[2][6] = character[4][6] = character[5][5] = character[4][4] = '/';
		return character;
	}
	char **C()
	{
		char **character = getCharGrid();
		character[0][0] = character[0][1] = character[1][1] = character[1][2] = character[1][5] = character[2][1] = character[2][3] = character[2][4] = character[3][1] = character[3][3] = character[3][4] = character[3][5] = character[3][6] = character[4][1] = character[5][1] = character[6][0] = character[6][1] = character[6][2] = character[6][3] = character[6][4] = character[6][5] = character[6][6] = ' ';
		character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[1][3] = character[1][4] = character[4][3] = character[4][4] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = '_';
		character[2][0] = character[3][0] = character[3][2] = character[4][0] = '|';
		character[1][0] = character[2][2] = character[2][6] = character[4][5] = character[5][6] = '/';

		character[1][6] = character[2][5] = character[4][2] = character[4][6] = character[5][1] = '\\';
		return character;
	}

	char **D()
	{

		char **character = getCharGrid();
		character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[5][1] = character[1][3] = character[5][2] = character[5][3] = '_';
		character[4][3] = character[4][5] = character[5][4] = '/';
		character[1][6] = '\\';
		character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[2][2] = character[3][2] = character[4][2] = character[2][4] = character[3][4] = character[2][6] = character[3][6] = '|';
		return character;
	}

	char **E()
	{

		char **character = getCharGrid();
		character[0][0] = character[0][5] = character[1][1] = character[1][2] = character[2][1] = character[2][2] = character[3][1] = character[3][2] = character[4][1] = character[4][2] = ' ';
		character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[2][3] = character[2][4] = character[3][3] = character[3][4] = character[4][3] = character[4][4] = character[4][5] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = '_';
		character[1][0] = character[1][6] = character[2][0] = character[2][2] = character[3][0] = character[3][5] = character[4][0] = character[4][2] = '|';
		character[5][0] = '\\';
		character[5][5] = '/';
		return character;
	}

	char **Q()
	{
		char **character = getCharGrid();
		character[0][0] = character[1][1] = character[1][2] = character[1][4] = character[1][5] = character[2][1] = character[2][3] = character[2][5] = character[3][1] = character[3][3] = character[3][5] = character[4][1] = character[4][5] = character[5][0] = ' ';
		character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][3] = character[5][2] = character[5][5] = '_';
		character[4][0] = character[4][2] = character[5][1] = character[5][4] = character[5][6] = '\\';
		character[1][0] = character[1][6] = character[2][0] = character[2][2] = character[2][4] = character[2][6] = character[3][0] = character[3][2] = character[3][4] = character[3][6] = '|';
		character[4][4] = '\'';
		character[4][3] = character[4][6] = character[5][3] = '/';
		return character;
	}
	char **T()
	{

		char **character = getCharGrid();
		character[0][0] = character[0][6] = character[1][2] = character[1][3] = character[1][4] = character[2][0] = character[2][1] = character[2][3] = character[2][5] = character[2][6] = character[3][0] = character[3][1] = character[3][3] = character[3][5] = character[3][6] = character[4][0] = character[4][1] = character[4][3] = character[4][5] = character[4][6] = character[5][0] = character[5][1] = character[5][3] = character[5][5] = character[5][6] = ' ';
		character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][1] = character[1][5] = character[5][3] = '_';
		character[1][0] = character[1][6] = character[2][2] = character[2][4] = character[3][2] = character[3][4] = character[4][2] = character[4][4] = '|';
		character[5][4] = '/';
		character[5][2] = '\\';
		return character;
	}

	char **U()
	{
		char **character = getCharGrid();
		character[1][0] = character[1][2] = character[1][4] = character[1][6] = character[2][0] = character[2][2] = character[2][4] = character[2][6] = character[3][0] = character[3][2] = character[3][4] = character[3][6] = character[4][0] = character[4][2] = character[4][4] = character[4][6] = '|';
		character[0][1] = character[0][5] = character[4][3] = character[5][2] = character[5][3] = character[5][4] = '_';
		character[5][1] = '\\';
		character[5][5] = '/';
		return character;
	}

	char **V()
	{
		char **character = getCharGrid();
		character[0][1] = character[0][5] = character[4][3] = character[5][2] = character[5][3] = character[5][4] = '_';
		character[1][0] = character[1][2] = character[1][4] = character[1][6] = character[2][0] = character[2][2] = character[2][4] = character[2][6] = character[3][0] = character[3][2] = character[3][4] = character[3][6] = '|';
		character[4][0] = character[4][2] = character[5][1] = '\\';
		character[4][4] = character[4][6] = character[5][5] = '/';
		return character;
	}

	char **Z()
	{
		char **character = getCharGrid();
		// character[1][0] = character[2][4] = character[2][5] = character[3][0] = character[3][1] = character[3][2] = character[3][4] = character[3][6] = character[4][0] = character[4][1] = character[4][3] = character[4][5] = character[4][6] = character[5][0] = character[5][2] = ' ';
		character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[1][1] = character[1][2] = character[1][3] = character[4][5] = character[4][6] = character[4][4] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = '_';
		character[2][3] = character[2][5] = character[1][6] = character[3][2] = character[3][4] = character[4][1] = character[4][3] = character[5][6] = '/';
		character[5][0] = '\\';
		character[1][0] = '|';
		return character;
	}

	// Lowercase

	char **a()
	{
		char **character = getCharGrid();

		character[2][2] = character[2][3] = character[2][5] = '_';
		character[3][1] = '/';
		character[3][3] = '_';
		character[3][4] = '`';
		character[3][6] = '|';
		character[4][0] = '|';
		character[4][2] = '(';
		character[4][3] = '_';
		character[4][4] = '|';
		character[4][6] = '|';
		character[5][1] = '\\';
		character[5][2] = '_';
		character[5][3] = '_';
		character[5][4] = ',';
		character[5][5] = '_';
		character[5][6] = '|';
		return character;
	}

	// Numbers
};
#endif
