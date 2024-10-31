#ifndef BLOCK_H
#define BLOCK_H
#include <string.h>
#include "../fonts.h"

class Block : public Fonts
{
    static const int rows = 11;
    static const int cols = 20;

public:
    Block() : Fonts(rows, cols) {}
    // Uppercase

    vs A()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][9] = character[2][10] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[6][4] = character[6][15] = character[7][12] = character[7][13] = character[7][14] = character[7][15] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = '_';
        character[3][8] = character[4][7] = character[5][6] = character[6][5] = character[4][9] = character[6][7] = '/';
        character[3][11] = character[4][12] = character[5][13] = character[6][14] = character[6][12] = character[4][10] = '\\';
        character[7][3] = character[7][8] = character[7][11] = character[7][16] = '|';

        return character;
    }

    vs B()
    {
        vs character = getCharGrid(11, 20);

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[5][13] = '.';
        character[1][0] = character[1][19] = character[2][0] = character[2][2] = character[2][17] = character[2][19] = character[3][0] = character[3][2] = character[3][5] = character[3][17] = character[3][19] = character[4][0] = character[4][2] = character[4][7] = character[4][9] = character[4][13] = character[4][17] = character[4][19] = character[5][0] = character[5][2] = character[5][7] = character[5][17] = character[5][19] = character[6][0] = character[6][2] = character[6][7] = character[6][9] = character[6][14] = character[6][17] = character[6][19] = character[7][0] = character[7][2] = character[7][5] = character[7][17] = character[7][19] = character[8][0] = character[8][2] = character[8][17] = character[8][19] = character[9][0] = character[9][19] = '|';
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][8] = character[9][9] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = '-';
        character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[3][6] = character[3][10] = character[4][10] = character[5][10] = character[5][11] = character[6][6] = character[6][10] = character[6][11] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[7][13] = '/';
        character[3][12] = '\\';
        character[5][12] = character[9][2] = character[9][17] = character[10][1] = character[10][18] = '\'';
        character[4][11] = character[6][12] = ')';

        return character;
    }

    vs C()
    {
        vs character = getCharGrid();

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[3][9] = character[3][10] = character[3][11] = character[4][13] = character[6][9] = character[6][10] = character[6][11] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = '_';
        character[3][14] = character[4][14] = character[5][5] = character[5][7] = '|';
        character[4][12] = character[6][5] = character[6][14] = '\\';
        character[4][5] = '/';
        character[3][6] = character[4][7] = character[6][8] = character[6][12] = character[7][7] = character[7][13] = '.';
        character[3][7] = character[4][8] = character[6][13] = character[7][14] = '\'';
        character[6][7] = character[7][6] = '`';

        return character;
    }

    vs D()
    {
        vs character = getCharGrid();

        // Enter the character grid in ROWS X COLS

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][5] = character[3][9] = character[3][10] = character[3][11] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[6][5] = character[6][9] = character[6][10] = character[6][11] = '_';
        character[3][4] = character[4][6] = character[4][8] = character[5][6] = character[5][8] = character[5][13] = character[5][15] = character[6][6] = character[6][8] = character[7][4] = '|';
        character[3][14] = character[4][13] = character[6][12] = character[7][13] = '.';
        character[4][15] = '\\';
        character[6][15] = '/';
        character[6][13] = character[7][14] = '\'';
        character[3][13] = character[4][12] = '`';

        return character;
    }

    vs E()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = character[3][5] = character[3][9] = character[3][10] = character[3][11] = character[4][9] = character[4][13] = character[5][9] = character[5][13] = character[6][5] = character[6][9] = character[6][10] = character[6][11] = '_';
        character[3][4] = character[3][14] = character[4][6] = character[4][8] = character[4][14] = character[5][6] = character[5][10] = character[6][6] = character[6][8] = character[6][14] = character[7][4] = character[7][14] = '|';
        character[4][12] = '\\';
        character[6][12] = '/';

        return character;
    }

    vs F()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[3][5] = character[3][9] = character[3][10] = character[3][11] = character[4][9] = character[4][13] = character[5][9] = character[6][5] = character[6][9] = '_';
        character[3][4] = character[3][14] = character[4][6] = character[4][8] = character[4][14] = character[5][6] = character[5][10] = character[6][6] = character[6][8] = character[7][4] = character[7][10] = '|';
        character[4][12] = '\\';

        return character;
    }

    vs G()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[5][11] = character[5][12] = character[5][13] = character[5][14] = character[6][14] = character[6][8] = character[6][9] = character[6][10] = character[4][12] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][9] = character[3][10] = '_';
        character[3][13] = character[4][13] = character[5][4] = character[5][6] = character[6][15] = '|';
        character[3][6] = character[4][7] = character[7][13] = '\'';
        character[4][4] = '/';
        character[6][4] = character[4][11] = '\\';
        character[3][5] = character[4][6] = character[6][7] = character[7][6] = character[7][12] = '.';
        character[7][5] = character[6][6] = '`';
        character[6][11] = ']';
        return character;
    }

    vs H()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][5] = character[3][14] = character[4][9] = character[4][10] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[6][5] = character[6][14] = character[5][9] = character[5][10] = '_';
        character[3][4] = character[3][9] = character[3][10] = character[3][15] = character[4][6] = character[4][8] = character[4][11] = character[4][13] = character[5][13] = character[5][6] = character[6][6] = character[6][8] = character[6][11] = character[6][13] = character[7][4] = character[7][9] = character[7][10] = character[7][15] = '|';

        return character;
    }

    vs I()
    {
        vs character = getCharGrid();

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][12] = character[6][8] = character[6][12] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[3][7] = character[3][13] = character[4][9] = character[4][11] = character[5][9] = character[5][11] = character[6][9] = character[6][11] = character[7][7] = character[7][13] = '|';

        return character;
    }

    vs J()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][12] = character[5][6] = character[6][8] = character[7][7] = character[7][8] = character[7][9] = '_';
        character[3][7] = character[3][13] = character[4][9] = character[4][11] = character[5][9] = character[5][11] = character[6][5] = character[6][7] = character[6][11] = '|';
        character[6][9] = character[7][11] = '\'';
        character[7][5] = '`';
        character[7][6] = character[7][10] = '.';

        return character;
    }

    vs K()
    {
        vs character = getCharGrid();

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][8] = character[9][9] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = '-';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[5][12] = '.';
        character[9][2] = character[9][17] = character[10][1] = character[10][18] = character[5][11] = '\'';
        character[1][0] = character[1][19] = character[2][0] = character[2][19] = character[3][0] = character[3][19] = character[4][0] = character[4][19] = character[5][0] = character[5][19] = character[6][0] = character[6][19] = character[7][0] = character[7][19] = character[8][0] = character[8][19] = character[9][0] = character[9][19] = character[2][2] = character[2][17] = character[3][2] = character[3][17] = character[4][2] = character[4][17] = character[5][2] = character[5][17] = character[6][2] = character[6][17] = character[7][2] = character[7][17] = character[8][2] = character[8][17] = '|';
        character[3][4] = character[3][8] = character[3][9] = character[3][14] = character[4][6] = character[4][8] = character[5][6] = character[6][6] = character[6][8] = character[7][4] = character[7][9] = character[7][10] = character[7][15] = '|';
        character[2][5] = character[2][6] = character[2][7] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[3][5] = character[3][10] = character[3][13] = character[4][9] = character[5][9] = character[5][10] = character[6][5] = character[6][14] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = '_';
        character[4][10] = character[4][12] = '/';
        character[6][11] = character[6][13] = '\\';
        return character;
    }

    vs L()
    {
        vs character = getCharGrid();

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[3][6] = character[3][10] = character[6][6] = character[6][10] = character[6][11] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = character[5][13] = '_';
        character[3][5] = character[3][11] = character[4][7] = character[5][7] = character[6][7] = character[4][9] = character[5][9] = character[6][9] = character[7][5] = character[7][14] = character[6][14] = '|';
        character[6][12] = '/';

        return character;
    }

    vs M()
    {
        vs character = getCharGrid();

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][12] = character[2][13] = character[2][14] = character[2][15] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[7][15] = character[6][4] = character[6][8] = character[6][11] = character[6][15] = character[3][4] = character[3][15] = '_';
        character[3][3] = character[3][16] = character[4][5] = character[4][14] = character[5][5] = character[5][14] = character[6][5] = character[6][14] = character[7][3] = character[7][9] = character[7][10] = character[7][16] = character[5][7] = character[5][12] = character[6][7] = character[6][12] = '|';
        character[3][8] = character[4][9] = character[5][8] = character[6][9] = '\\';
        character[3][11] = character[4][10] = character[5][11] = character[6][10] = '/';
        return character;
    }

    vs N()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][4] = character[3][10] = character[3][14] = character[6][4] = character[6][8] = character[6][14] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = '_';
        character[3][3] = character[3][9] = character[3][15] = character[4][5] = character[4][11] = character[4][13] = character[5][5] = character[5][11] = character[5][13] = character[6][5] = character[6][7] = character[6][13] = character[7][3] = character[7][9] = character[7][15] = '|';
        character[3][8] = character[4][9] = character[5][8] = character[5][10] = character[6][9] = character[7][10] = '\\';
        return character;
    }

    
    vs O()
        {
        vs character = getCharGrid(11, 20);
        character[0] = " .----------------. ";
        character[1] = "| .--------------. |";
        character[2] = "| |     ____     | |";
        character[3] = "| |   .'    `.   | |";
        character[4] = "| |  /  .--.  \\  | |";
        character[5] = "| |  | |    | |  | |";
        character[6] = "| |  \\  `--'  /  | |";
        character[7] = "| |   '.____.'   | |";
        character[8] = "| |              | |";
        character[9] = "| '--------------' |";
        character[10] ="'----------------' ";
        
        return character;

        }
           

    vs P()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[3][6] = character[3][10] = character[3][11] = character[4][10] = character[4][11] = character[5][10] = character[5][11] = character[5][12] = character[6][6] = character[6][10] = '_';
        character[3][5] = character[4][7] = character[4][9] = character[4][14] = character[5][7] = character[6][7] = character[6][9] = character[7][5] = character[7][11] = '|';
        character[3][14] = '\\';
        character[4][12] = ')';
        character[5][13] = '/';

        return character;
    }

    vs Q()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][7] = character[2][8] = character[2][9] = character[6][13] = character[7][7] = character[7][8] = character[7][9] = character[7][12] = character[7][13] = '_';
        character[5][4] = character[5][6] = character[5][10] = character[5][12] = character[7][14] = '|';
        character[3][5] = character[3][11] = character[4][7] = character[4][9] = character[7][6] = character[7][10] = '.';
        character[4][12] = character[6][4] = character[6][12] = character[7][11] = '\\';
        character[4][4] = '/';
        character[6][7] = character[7][5] = '`';
        character[4][8] = character[6][8] = '-';
        character[3][6] = character[3][10] = character[6][9] = '\'';

        return character;
    }

    vs R()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[3][5] = character[3][9] = character[3][10] = character[4][10] = character[4][9] = character[5][9] = character[5][10] = character[6][5] = character[7][5] = character[7][6] = character[7][7] = character[6][14] = character[7][12] = character[7][13] = character[7][14] = '_';
        character[3][4] = character[4][6] = character[4][8] = character[4][13] = character[5][6] = character[6][6] = character[6][8] = character[7][4] = character[7][9] = character[7][11] = character[7][15] = '|';
        character[3][12] = character[6][11] = character[6][13] = '\\';
        character[5][12] = '/';
        character[4][11] = ')';
        return character;
    }

    vs S()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = '_';
        character[3][9] = character[3][10] = character[3][11] = '_';
        character[4][9] = character[4][10] = character[4][13] = '_';
        character[5][8] = character[5][9] = character[5][10] = '_';
        character[6][8] = character[6][9] = character[6][10] = character[6][11] = '_';
        character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[4][5] = character[6][5] = character[7][5] = character[3][14] = character[4][14] = character[6][14] = '|';
        character[5][12] = '-';
        character[5][7] = character[5][12] = character[7][13] = '.';
        character[5][6] = character[7][14] = '\'';
        character[5][11] = character[6][6] = '`';
        character[3][6] = '/';
        character[4][12] = character[6][7] = '\\';
        character[4][8] = '(';
        character[6][12] = ')';

        return character;
    }

    vs T()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[6][7] = character[6][11] = character[3][7] = character[3][11] = character[4][5] = character[4][13] = character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = '_';
        character[3][4] = character[3][14] = character[4][4] = character[4][14] = character[4][8] = character[4][10] = character[5][8] = character[5][10] = character[6][8] = character[6][10] = character[7][6] = character[7][12] = '|';
        character[4][6] = '/';
        character[4][12] = '\\';

        return character;
    }

    vs U()
    {
        vs character = getCharGrid(11, 20);

        character[0] = " .----------------. ";
        character[1] = "| .--------------. |";
        character[2] = "| | _____  _____ | |";
        character[3] = "| ||_   _||_   _|| |";
        character[4] = "| |  | |    | |  | |";
        character[5] = "| |  | '    ' |  | |";
        character[6] = "| |   \\ `--' /   | |";
        character[7] = "| |    `.__.'    | |";
        character[8] = "| |              | |";
        character[9] = "| '--------------' |";
        character[10] = " '----------------' ";

        return character;
    }

    vs V()
    {
        vs character = getCharGrid(11, 20);

        character[0] = " .----------------. ";
        character[1] = "| .--------------. |";
        character[2] = "| |  ____  ____  | |";
        character[3] = "| | |_  _||_  _| | |";
        character[4] = "| |   \\ \\  / /   | |";
        character[5] = "| |    \\ \\/ /    | |";
        character[6] = "| |     \\  /     | |";
        character[7] = "| |     |__|     | |";
        character[8] = "| |              | |";
        character[9] = "| '--------------' |";
        character[10] = " '----------------' ";

        return character;
    }

    vs W()
    {
        vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][12] = character[2][13] = character[2][14] = character[2][15] = character[7][6] = character[7][7] = character[7][12] = character[7][13] = character[3][4] = character[3][15] = character[3][11] = character[3][8] = character[2][11] = character[2][8] = '_';
        character[3][3] = character[3][16] = character[4][5] = character[4][14] = character[5][5] = character[5][14] = character[6][5] = character[6][14] = character[7][5] = character[3][9] = character[3][10] = character[7][14] = character[5][7] = character[5][12] = character[4][7] = character[4][12] = '|';
        character[5][8] = character[4][9] = character[7][8] = character[6][9] = '/';
        character[5][11] = character[4][10] = character[7][11] = character[6][10] = '\\';

        return character;
    }

    vs X()
    {
        vs character = getCharGrid();
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][12] = character[2][13] = character[2][14] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[7][15] = character[3][5] = character[3][14] = character[3][11] = character[3][8] = character[6][5] = character[6][8] = character[6][11] = character[6][14] = character[2][11] = character[2][8] = '_';
        character[3][4] = character[3][15] = character[7][4] = character[7][9] = character[7][10] = character[3][9] = character[3][10] = character[7][15] = '|';
        character[4][6] = character[4][8] = character[6][11] = character[6][13] = '\\';
        character[4][11] = character[4][13] = character[6][6] = character[6][8] = '/';
        character[5][7] = '>';
        character[5][12] = '<';
        character[5][9] = character[6][10] = '`';
        character[5][10] = character[6][9] = '\'';
        return character;
    }

vs Y()
{
   vs character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] ='.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] =  '\'';
        character[2][5]= character[2][6]= character[2][7]= character[2][8]= character[2][11]= character[2][12]= character[2][13]= character[2][14]= character[6][7]= character[6][12]= character[3][5]= character[3][8]=character[3][11]=character[3][14]='_';
for(int i=7;i<13;i++){
    character[7][i]='_';
}
character[3][4]=character[3][9]=character[3][10]=character[3][15]=character[6][8]=character[6][11]=character[7][6]=character[7][13]='|';
character[4][6]=character[4][8]=character[5][7]=character[5][9]='\\';
character[4][11]=character[4][13]=character[5][10]=character[5][12]='/';

    return character;
}


    vs Z()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[9][2] = character[9][17] = '.';
        character[10][1] = character[10][18] = '\'';

        character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[4][6] = character[3][8] = character[3][9] = character[3][13] = character[6][6] = character[6][10] = character[6][11] = character[5][13] = '_';
        character[6][14] = character[7][5] = character[3][5] = character[4][5] = character[3][14] = character[7][14] = '|';
        character[4][7] = character[4][10] = character[4][12] = character[5][8] = character[6][7] = character[6][9] = character[6][12] = '/';
        character[5][9] = character[5][11] = '\'';
        character[5][8] = character[5][10] = '.';
        character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = '_';

        return character;
    }

    // Lowercase
        vs a()
        {
        vs character = getCharGrid(11, 20);
            
        character[0] =  " .----------------. ";
        character[1] =  "| .--------------. |";
        character[2] =  "| |      __      | |";
        character[3] =  "| |     /  \\     | |";
        character[4] =  "| |    / /\\ \\    | |";
        character[5] =  "| |   / /__\\ \\   | |";
        character[6] =  "| | _/ /    \\ \\_ | |";
        character[7] =  "| ||____|  |____|| |";
        character[8] =  "| |              | |";
        character[9] =  "| '--------------' |";
        character[10] = " '----------------' ";

            return character;
        }
        

    
    vs b()
    {
       vs character = getCharGrid(11, 20);

       character[0] =  " .----------------. ";
       character[1] =  "| .--------------. |";
       character[2] =  "| |   ______     | |";
       character[3] =  "| |  |_   _ \\    | |";
       character[4] =  "| |    | |_) |   | |";
       character[5] =  "| |    |  __'.   | |";
       character[6] =  "| |   _| |__) |  | |";
       character[7] =  "| |  |_______/   | |";
       character[8] =  "| |              | |";
       character[9] =  "| '--------------' |";
       character[10] = " '----------------' ";

    return character;
    };

    vs c()
    {
        // vs character = getCharGrid();

        // Enter the character grid in ROWS X COLS
        vs character = getCharGrid();

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[3][9] = character[3][10] = character[3][11] = character[4][13] = character[6][9] = character[6][10] = character[6][11] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = '_';
        character[3][14] = character[4][14] = character[5][5] = character[5][7] = '|';
        character[4][12] = character[6][5] = character[6][14] = '\\';
        character[4][5] = '/';
        character[3][6] = character[4][7] = character[6][8] = character[6][12] = character[7][7] = character[7][13] = '.';
        character[3][7] = character[4][8] = character[6][13] = character[7][14] = '\'';
        character[6][7] = character[7][6] = '`';

        return character;

        return character;
    }


    vs d()
    { 
        vs character = getCharGrid(11, 20);

      character[0] = " .----------------. ";
      character[1] = "| .--------------. |";
      character[2] = "| |  ________    | |";
      character[3] = "| | |_   ___ `.  | |";
      character[4] = "| |   | |   `. ) | |";
      character[5] = "| |   | |    } ) | |";
      character[6] = "| |  _| |___,' ) | |";
      character[7] = "| | |________,'  | |";
      character[8] = "| |              | |";
      character[9] = "| '..............' |";
      character[10] ="'..................' ";
      
        return character;
    };


    // It is same as E in Ascii-Generator
    vs e()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = character[3][5] = character[3][9] = character[3][10] = character[3][11] = character[4][9] = character[4][13] = character[5][9] = character[5][13] = character[6][5] = character[6][9] = character[6][10] = character[6][11] = '_';
        character[3][4] = character[3][14] = character[4][6] = character[4][8] = character[4][14] = character[5][6] = character[5][10] = character[6][6] = character[6][8] = character[6][14] = character[7][4] = character[7][14] = '|';
        character[4][12] = '\\';
        character[6][12] = '/';

        return character;
    }
    

    vs f()
    {
        vs character = getCharGrid(11, 20);
            
        character[0] = " .----------------. ";
        character[1] = "| .--------------. |";
        character[2] = "| |  _________   | |";
        character[3] = "| | |_   ___  |  | |";
        character[4] = "| |   | |__ `_|  | |";
        character[5] = "| |   |  __|     | |";
        character[6] = "| |  _| |_       | |";
        character[7] = "| | |_____|      | |";
        character[8] = "| |              | |";
        character[9] = "| '..............' |";
        character[10] ="'..................' ";

            return character;
        }


    vs g()
    {
        vs character = getCharGrid(11, 20);

        character[0] =  " .----------------. ";
        character[1] =  "| .--------------. |";
        character[2] =  "| |    ______    | |";
        character[3] =  "| |  .' ___  |   | |";
        character[4] =  "| | / .'   \\_|   | |";
        character[5] =  "| | | |    ____  | |";
        character[6] =  "| | \\ `.___]  _| | |";
        character[7] =  "| |  `._____.'   | |";
        character[8] =  "| |              | |";
        character[9] =  "| '--------------' |";
        character[10] = " '----------------' ";

        return character;
    }

    vs h()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][5] = character[3][14] = character[4][9] = character[4][10] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[6][5] = character[6][14] = character[5][9] = character[5][10] = '_';
        character[3][4] = character[3][9] = character[3][10] = character[3][15] = character[4][6] = character[4][8] = character[4][11] = character[4][13] = character[5][13] = character[5][6] = character[6][6] = character[6][8] = character[6][11] = character[6][13] = character[7][4] = character[7][9] = character[7][10] = character[7][15] = '|';

        return character;
    }

    vs i()
    {
        vs character = getCharGrid();

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][12] = character[6][8] = character[6][12] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[3][7] = character[3][13] = character[4][9] = character[4][11] = character[5][9] = character[5][11] = character[6][9] = character[6][11] = character[7][7] = character[7][13] = '|';

        return character;
    }

    vs j()
    {
        vs character = getCharGrid(11, 20);

        character[0] =  " .----------------. ";
        character[1] =  "| .--------------. |";
        character[2] =  "| |     _____    | |";
        character[3] =  "| |    |_   _|   | |";
        character[4] =  "| |      | |     | |";
        character[5] =  "| |   _  | |     | |";
        character[6] =  "| |  | |_' |     | |";
        character[7] =  "| |  `.___.'     | |";
        character[8] =  "| |              | |";
        character[9] =  "| '--------------' |";
        character[10] = " '----------------' ";

        return character;
    }

    
        vs k()
        {
            vs character = getCharGrid(11, 20);

           character[0] = " .----------------. ";
           character[1] = "| .--------------. |";
           character[2] = "| |  ___  ____   | |";
           character[3] = "| | |_  ||_  _|  | |";
           character[4] = "| |   | |_/ /    | |";
           character[5] = "| |   |  __'.    | |";
           character[6] = "| |  _| |  \\ \\_  | |";
           character[7] = "| | |____||____| | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";

            return character;
        }

    

    
        vs l()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |   _____      | |";
            character[3] = "| |  |_   _|     | |";
            character[4] = "| |    | |       | |";
            character[5] = "| |    | |   _   | |";
            character[6] = "| |   _| |__/ |  | |";
            character[7] = "| |  |________|  | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";


            return character;
        }

    

    
        vs m()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| | ____    ____ | |";
            character[3] = "| ||_   \\  /   _|| |";
            character[4] = "| |  |   \\/   |  | |";
            character[5] = "| |  | |\\  /| |  | |";
            character[6] = "| | _| |_\\/_| |_ | |";
            character[7] = "| ||_____||_____|| |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

    
        vs n()
        {
            vs character = getCharGrid(11, 20);

           character[0] = " .----------------. ";
           character[1] = "| .--------------. |";
           character[2] = "| | ____  _____  | |";
           character[3] = "| ||_   \\|_   _| | |";
           character[4] = "| |  |   \\ | |   | |";
           character[5] = "| |  | |\\ \\| |   | |";
           character[6] = "| | _| |_\\   |_  | |";
           character[7] = "| ||_____|\\____| | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";


            return character;
        }

    

    
        vs o()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |     ____     | |";
            character[3] = "| |   .'    `.   | |";
            character[4] = "| |  /  .--.  \\  | |";
            character[5] = "| |  | |    | |  | |";
            character[6] = "| |  \\  `--'  /  | |";
            character[7] = "| |   `.____.'   | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

    
        vs p()
        {
            vs character = getCharGrid(11, 20);

           character[0] = " .----------------. ";
           character[1] = "| .--------------. |";
           character[2] = "| |   ______     | |";
           character[3] = "| |  |_   __ \\   | |";
           character[4] = "| |    | |__) |  | |";
           character[5] = "| |    |  ___/   | |";
           character[6] = "| |   _| |_      | |";
           character[7] = "| |  |_____|     | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";


            return character;
        }

    

    
        vs q()
        {
            vs character = getCharGrid(11 ,20);

           character[0] = " .----------------. ";
           character[1] = "| .--------------. |";
           character[2] = "| |    ___       | |";
           character[3] = "| |  .'   '.     | |";
           character[4] = "| | /  .-.  \\    | |";
           character[5] = "| | | |   | |    | |";
           character[6] = "| | \\  `-'  \\_   | |";
           character[7] = "| |  `.___.\\__|  | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";

            return character;
        }

    

    
        vs r()
        {
            vs character = getCharGrid(11 ,20);

           character[0] = " .----------------.";
           character[1] = "| .--------------. |";
           character[2] = "| |  _______     | |";
           character[3] = "| | |_   __ \\    | |";
           character[4] = "| |   | |__) |   | |";
           character[5] = "| |   |  __ /    | |";
           character[6] = "| |  _| |  \\ \\_  | |";
           character[7] = "| | |____| |___| | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";

            return character;
        }

    

    
        vs s()
        {
            vs character = getCharGrid(11 ,20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |    _______   | |";
            character[3] = "| |   /  ___  |  | |";
            character[4] = "| |  |  (__ \\_|  | |";
            character[5] = "| |   '.___`-.   | |";
            character[6] = "| |  |`\\____) |  | |";
            character[7] = "| |  |_______.'  | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

    vs t()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[6][7] = character[6][11] = character[3][7] = character[3][11] = character[4][5] = character[4][13] = character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = '_';
        character[3][4] = character[3][14] = character[4][4] = character[4][14] = character[4][8] = character[4][10] = character[5][8] = character[5][10] = character[6][8] = character[6][10] = character[7][6] = character[7][12] = '|';
        character[4][6] = '/';
        character[4][12] = '\\';

        return character;
    }

    
        vs u()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| | _____  _____ | |";
            character[3] = "| ||_   _||_   _|| |";
            character[4] = "| |  | |    | |  | |";
            character[5] = "| |  | '    ' |  | |";
            character[6] = "| |   \\ `--' /   | |";
            character[7] = "| |    `.__.'    | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

        vs v()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |  ____  ____  | |";
            character[3] = "| | |_  _||_  _| | |";
            character[4] = "| |   \\ \\  / /   | |";
            character[5] = "| |    \\ \\/ /    | |";
            character[6] = "| |     \\  /     | |";
            character[7] = "| |     |__|     | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10] = " '----------------' ";

            return character;
        }

    
        vs w()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| | _____  _____ | |";
            character[3] = "| ||_   _||_   _|| |";
            character[4] = "| |  | | /\\ | |  | |";
            character[5] = "| |  | |/  \\| |  | |";
            character[6] = "| |  |   /\\   |  | |";
            character[7] = "| |  |__/  \\__|  | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
           character[10] = " '----------------' ";

            return character;
        }

    

    
        vs x()
        {
            vs character = getCharGrid(11, 20);

           character[0] = " .----------------. ";
           character[1] = "| .--------------. |";
           character[2] = "| |  ____  ____  | |";
           character[3] = "| | |_  _||_  _| | |";
           character[4] = "| |   \\ \\  / /   | |";
           character[5] = "| |    > `' <    | |";
           character[6] = "| |  _/ /'`\\ \\_  | |"; 
           character[7] = "| | |____||____| | |";
           character[8] = "| |              | |";
           character[9] = "| '--------------' |";
           character[10]= " '----------------' ";

            return character;
        }

    

    
        vs y()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |  ____  ____  | |";
            character[3] = "| | |_  _||_  _| | |";
            character[4] = "| |   \\ \\  / /   | |";
            character[5] = "| |    \\ \\/ /    | |";
            character[6] = "| |    _|  |_    | |";
            character[7] = "| |   |______|   | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

    
        vs z()
        {
            vs character = getCharGrid(11, 20);

            character[0] = " .----------------. ";
            character[1] = "| .--------------. |";
            character[2] = "| |   ________   | |";
            character[3] = "| |  |  __   _|  | |";
            character[4] = "| |  |_/  / /    | |";
            character[5] = "| |     .'.' _   | |";
            character[6] = "| |   _/ /__/ |  | |";
            character[7] = "| |  |________|  | |";
            character[8] = "| |              | |";
            character[9] = "| '--------------' |";
            character[10]= " '----------------' ";

            return character;
        }

    

    // Numbers

    vs zero()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = '_';
        character[4][5] = character[4][14] = character[5][5] = character[5][7] = character[5][12] = character[5][14] = character[6][5] = character[6][14] = '|';
        character[4][9] = character[4][10] = character[6][9] = character[6][10] = '-';
        character[3][6] = character[3][13] = character[4][8] = character[4][11] = character[7][7] = character[7][12] = '.';
        character[3][7] = character[3][12] = character[6][11] = character[7][6] = character[7][13] = '\'';
        character[6][8] = '`';

        return character;
    }

    vs one()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[9][2] = character[9][17] = '.';
        character[10][1] = character[10][18] = '\'';
        character[2][8] = character[2][9] = character[6][7] = character[6][11] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = '_';
        character[3][10] = character[4][8] = character[4][10] = character[5][8] = character[5][10] = character[6][8] = character[6][10] = character[7][6] = character[7][12] = '|';
        character[3][7] = '/';
        character[4][7] = '`';

        return character;
    }

    vs two()
    {
        vs character = getCharGrid(11, 20);

        character[0] = " .----------------. ";
        character[1] = "| .--------------. |";
        character[2] = "| |    _____     | |";
        character[3] = "| |   / ___ `.   | |";
        character[4] = "| |  |_/___) |   | |";
        character[5] = "| |   .'____.'   | |";
        character[6] = "| |  / /____     | |";
        character[7] = "| |  |_______|   | |";
        character[8] = "| |              | |";
        character[9] = "| '--------------' |";
        character[10] = " '----------------' ";

        return character;
    }

    vs three()
    {
        vs character = getCharGrid(11, 20);

        character[0][1] = '.';
        character[0][2] = '-';
        character[0][3] = '-';
        character[0][4] = '-';
        character[0][5] = '-';
        character[0][6] = '-';
        character[0][7] = '-';
        character[0][8] = '-';
        character[0][9] = '-';
        character[0][10] = '-';
        character[0][11] = '-';
        character[0][12] = '-';
        character[0][13] = '-';
        character[0][14] = '-';
        character[0][15] = '-';
        character[0][16] = '-';
        character[0][17] = '-';
        character[0][18] = '.';

        character[1][0] = '|';
        character[1][2] = '.';
        character[1][3] = '-';
        character[1][4] = '-';
        character[1][5] = '-';
        character[1][6] = '-';
        character[1][7] = '-';
        character[1][8] = '-';
        character[1][9] = '-';
        character[1][10] = '-';
        character[1][11] = '-';
        character[1][12] = '-';
        character[1][13] = '-';
        character[1][14] = '-';
        character[1][15] = '-';
        character[1][16] = '-';
        character[1][17] = '.';
        character[1][19] = '|';

        character[2][0] = '|';
        character[2][2] = '|';
        character[2][7] = '_';
        character[2][8] = '_';
        character[2][9] = '_';
        character[2][10] = '_';
        character[2][11] = '_';
        character[2][12] = '_';
        character[2][17] = '|';
        character[2][19] = '|';

        character[3][0] = '|';
        character[3][2] = '|';
        character[3][6] = '/';
        character[3][8] = '_';
        character[3][9] = '_';
        character[3][10] = '_';
        character[3][11] = '_';
        character[3][13] = '\'';
        character[3][14] = '.';
        character[3][17] = '|';
        character[3][19] = '|';

        character[4][0] = '|';
        character[4][2] = '|';
        character[4][6] = '\'';
        character[4][7] = '\'';
        character[4][10] = '_';
        character[4][11] = '_';
        character[4][12] = ')';
        character[4][14] = '|';
        character[4][17] = '|';
        character[4][19] = '|';

        character[5][0] = '|';
        character[5][2] = '|';
        character[5][6] = '_';
        character[5][9] = '|';
        character[5][10] = '_';
        character[5][11] = '_';
        character[5][13] = '\'';
        character[5][14] = '.';
        character[5][17] = '|';
        character[5][19] = '|';

        character[6][0] = '|';
        character[6][2] = '|';
        character[6][5] = '|';
        character[6][7] = '\\';
        character[6][8] = '_';
        character[6][9] = '_';
        character[6][10] = '_';
        character[6][11] = '_';
        character[6][12] = ')';
        character[6][14] = '|';
        character[6][17] = '|';
        character[6][19] = '|';

        character[7][0] = '|';
        character[7][2] = '|';
        character[7][6] = '\\';
        character[7][7] = '_';
        character[7][8] = '_';
        character[7][9] = '_';
        character[7][10] = '_';
        character[7][11] = '_';
        character[7][12] = '_';
        character[7][13] = '.';
        character[7][14] = '\'';
        character[7][17] = '|';
        character[7][19] = '|';

        character[8][0] = '|';
        character[8][2] = '|';
        character[8][17] = '|';
        character[8][19] = '|';

        character[9][0] = '|';
        character[9][2] = '|';
        character[9][3] = '-';
        character[9][4] = '-';
        character[9][5] = '-';
        character[9][6] = '-';
        character[9][7] = '-';
        character[9][8] = '-';
        character[9][9] = '-';
        character[9][10] = '-';
        character[9][11] = '-';
        character[9][12] = '-';
        character[9][13] = '-';
        character[9][14] = '-';
        character[9][15] = '-';
        character[9][16] = '-';
        character[9][17] = '\'';
        character[9][19] = '|';

        character[10][1] = '\'';
        character[10][2] = '-';
        character[10][3] = '-';
        character[10][4] = '-';
        character[10][5] = '-';
        character[10][6] = '-';
        character[10][7] = '-';
        character[10][8] = '-';
        character[10][9] = '-';
        character[10][10] = '-';
        character[10][11] = '-';
        character[10][12] = '-';
        character[10][13] = '-';
        character[10][14] = '-';
        character[10][15] = '-';
        character[10][16] = '-';
        character[10][17] = '-';
        character[10][18] = '\'';

        return character;
    }

    vs four()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][6] = character[2][11] = character[4][8] = character[4][9] = character[4][13] = character[5][6] = character[5][7] = character[5][8] = character[5][9] = character[5][13] = character[6][9] = character[6][13] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = '_';
        character[3][5] = character[3][7] = character[3][10] = character[3][12] = character[4][5] = character[4][7] = character[4][10] = character[4][12] = character[5][5] = character[5][14] = character[6][10] = character[6][12] = character[7][8] = character[7][14] = '|';

        return character;
    }

    vs five()
    {
        vs character = getCharGrid(11, 20);

        character[0][1] = '.';
        character[0][2] = '-';
        character[0][3] = '-';
        character[0][4] = '-';
        character[0][5] = '-';
        character[0][6] = '-';
        character[0][7] = '-';
        character[0][8] = '-';
        character[0][9] = '-';
        character[0][10] = '-';
        character[0][11] = '-';
        character[0][12] = '-';
        character[0][13] = '-';
        character[0][14] = '-';
        character[0][15] = '-';
        character[0][16] = '-';
        character[0][17] = '-';
        character[0][18] = '.';
        character[1][0] = '|';
        character[1][2] = '.';
        character[1][3] = '-';
        character[1][4] = '-';
        character[1][5] = '-';
        character[1][6] = '-';
        character[1][7] = '-';
        character[1][8] = '-';
        character[1][9] = '-';
        character[1][10] = '-';
        character[1][11] = '-';
        character[1][12] = '-';
        character[1][13] = '-';
        character[1][14] = '-';
        character[1][15] = '-';
        character[1][16] = '-';
        character[1][17] = '.';
        character[1][19] = '|';
        character[2][0] = '|';
        character[2][2] = '|';
        character[2][6] = '_';
        character[2][7] = '_';
        character[2][8] = '_';
        character[2][9] = '_';
        character[2][10] = '_';
        character[2][11] = '_';
        character[2][12] = '_';
        character[2][17] = '|';
        character[2][19] = '|';
        character[3][0] = '|';
        character[3][2] = '|';
        character[3][5] = '|';
        character[3][8] = '_';
        character[3][9] = '_';
        character[3][10] = '_';
        character[3][11] = '_';
        character[3][12] = '_';
        character[3][13] = '|';
        character[3][17] = '|';
        character[3][19] = '|';
        character[4][0] = '|';
        character[4][2] = '|';
        character[4][5] = '|';
        character[4][7] = '|';
        character[4][8] = '_';
        character[4][9] = '_';
        character[4][10] = '_';
        character[4][11] = '_';
        character[4][17] = '|';
        character[4][19] = '|';
        character[5][0] = '|';
        character[5][2] = '|';
        character[5][5] = '\'';
        character[5][6] = '_';
        character[5][7] = '.';
        character[5][8] = '_';
        character[5][9] = '_';
        character[5][10] = '_';
        character[5][11] = '_';
        character[5][12] = '\'';
        character[5][13] = '\'';
        character[5][14] = '.';
        character[5][17] = '|';
        character[5][19] = '|';
        character[6][0] = '|';
        character[6][2] = '|';
        character[6][5] = '|';
        character[6][7] = '\\';
        character[6][8] = '_';
        character[6][9] = '_';
        character[6][10] = '_';
        character[6][11] = '_';
        character[6][12] = ')';
        character[6][14] = '|';
        character[6][17] = '|';
        character[6][19] = '|';
        character[7][0] = '|';
        character[7][2] = '|';
        character[7][6] = '\\';
        character[7][7] = '_';
        character[7][8] = '_';
        character[7][9] = '_';
        character[7][10] = '_';
        character[7][11] = '_';
        character[7][12] = '_';
        character[7][13] = '.';
        character[7][14] = '\'';
        character[7][17] = '|';
        character[7][19] = '|';
        character[8][0] = '|';
        character[8][2] = '|';
        character[8][17] = '|';
        character[8][19] = '|';
        character[9][0] = '|';
        character[9][2] = '\'';
        character[9][3] = '-';
        character[9][4] = '-';
        character[9][5] = '-';
        character[9][6] = '-';
        character[9][7] = '-';
        character[9][8] = '-';
        character[9][9] = '-';
        character[9][10] = '-';
        character[9][11] = '-';
        character[9][12] = '-';
        character[9][13] = '-';
        character[9][14] = '-';
        character[9][15] = '-';
        character[9][16] = '-';
        character[9][17] = '\'';
        character[9][19] = '|';
        character[10][1] = '\'';
        character[10][2] = '-';
        character[10][3] = '-';
        character[10][4] = '-';
        character[10][5] = '-';
        character[10][6] = '-';
        character[10][7] = '-';
        character[10][8] = '-';
        character[10][9] = '-';
        character[10][10] = '-';
        character[10][11] = '-';
        character[10][12] = '-';
        character[10][13] = '-';
        character[10][14] = '-';
        character[10][15] = '-';
        character[10][16] = '-';
        character[10][17] = '-';
        character[10][18] = '\'';

        return character;
    }

    vs six()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][9] = character[3][10] = character[3][11] = character[4][8] = character[4][9] = character[4][10] = character[4][11] = character[4][13] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = character[6][8] = character[6][9] = character[6][10] = character[6][11] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[3][6] = character[5][7] = character[5][13] = character[7][5] = character[7][14] = '\'';
        character[4][7] = character[4][5] = character[5][5] = character[6][5] = character[4][14] = character[6][14] = '|';
        character[3][13] = character[4][12] = '\\';
        character[6][7] = '(';
        character[6][12] = ')';
        character[3][5] = character[7][6] = character[5][14] = character[7][13] = '.';
        character[5][12] = '`';
        return character;
    }

    vs seven()
    {
        vs character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] = character[10][18] = '.';
        character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';
        character[3][5] = character[3][13] = character[4][5] = '|';
        character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[4][6] = character[3][8] = character[3][9] = character[3][10] = character[7][8] = '_';
        character[4][7] = character[4][10] = character[5][9] = character[6][8] = character[7][7] = character[7][9] = character[6][10] = character[5][11] = character[4][12] = '/';

        return character;
    }

    vs eight()
    {
        vs character = getCharGrid(11, 20);
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[6][5] = character[4][6] = character[4][13] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[6][14] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[3][6] = character[3][13] = character[10][1] = character[7][6] = character[7][13] = character[5][13] = character[5][6] = character[10][18] = '.';
        character[5][7] = character[7][5] = '`';
        character[4][9] = character[4][10] = character[3][9] = character[3][10] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = character[6][8] = character[6][9] = character[6][10] = character[6][11] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[4][8] = character[6][7] = '(';
        character[4][11] = character[6][12] = ')';
        character[7][14] = character[5][12] = character[3][7] = character[3][12] = character[10][1] = character[9][2] = character[9][17] = character[10][18] = '\'';

        return character;
    }

    vs nine()
    {
        vs character = getCharGrid(11, 20);

        character[0][1] = '.';
        character[0][2] = '-';
        character[0][3] = '-';
        character[0][4] = '-';
        character[0][5] = '-';
        character[0][6] = '-';
        character[0][7] = '-';
        character[0][8] = '-';
        character[0][9] = '-';
        character[0][10] = '-';
        character[0][11] = '-';
        character[0][12] = '-';
        character[0][13] = '-';
        character[0][14] = '-';
        character[0][15] = '-';
        character[0][16] = '-';
        character[0][17] = '-';
        character[0][18] = '.';
        character[1][0] = '|';
        character[1][2] = '.';
        character[1][3] = '-';
        character[1][4] = '-';
        character[1][5] = '-';
        character[1][6] = '-';
        character[1][7] = '-';
        character[1][8] = '-';
        character[1][9] = '-';
        character[1][10] = '-';
        character[1][11] = '-';
        character[1][12] = '-';
        character[1][13] = '-';
        character[1][14] = '-';
        character[1][15] = '-';
        character[1][16] = '-';
        character[1][17] = '.';
        character[1][19] = '|';
        character[2][0] = '|';
        character[2][2] = '|';
        character[2][7] = '_';
        character[2][8] = '_';
        character[2][9] = '_';
        character[2][10] = '_';
        character[2][11] = '_';
        character[2][12] = '_';
        character[2][17] = '|';
        character[2][19] = '|';
        character[3][0] = '|';
        character[3][2] = '|';
        character[3][5] = '.';
        character[3][6] = '\'';
        character[3][8] = '_';
        character[3][9] = '_';
        character[3][10] = '_';
        character[3][11] = '_';
        character[3][13] = '\'';
        character[3][14] = '.';
        character[3][17] = '|';
        character[3][19] = '|';
        character[4][0] = '|';
        character[4][2] = '|';
        character[4][5] = '|';
        character[4][7] = '(';
        character[4][8] = '_';
        character[4][9] = '_';
        character[4][10] = '_';
        character[4][11] = '_';
        character[4][12] = ')';
        character[4][14] = '|';
        character[4][17] = '|';
        character[4][19] = '|';
        character[5][0] = '|';
        character[5][2] = '|';
        character[5][5] = '\'';
        character[5][6] = '_';
        character[5][7] = '.';
        character[5][8] = '_';
        character[5][9] = '_';
        character[5][10] = '_';
        character[5][11] = '_';
        character[5][12] = '.';
        character[5][14] = '|';
        character[5][17] = '|';
        character[5][19] = '|';
        character[6][0] = '|';
        character[6][2] = '|';
        character[6][5] = '|';
        character[6][7] = '\\';
        character[6][8] = '_';
        character[6][9] = '_';
        character[6][10] = '_';
        character[6][11] = '_';
        character[6][12] = '|';
        character[6][14] = '|';
        character[6][17] = '|';
        character[6][19] = '|';
        character[7][0] = '|';
        character[7][2] = '|';
        character[7][6] = '\\';
        character[7][7] = '_';
        character[7][8] = '_';
        character[7][9] = '_';
        character[7][10] = '_';
        character[7][11] = '_';
        character[7][12] = '_';
        character[7][13] = ',';
        character[7][14] = '\'';
        character[7][17] = '|';
        character[7][19] = '|';
        character[8][0] = '|';
        character[8][2] = '|';
        character[8][17] = '|';
        character[8][19] = '|';
        character[9][0] = '|';
        character[9][2] = '\'';
        character[9][3] = '-';
        character[9][4] = '-';
        character[9][5] = '-';
        character[9][6] = '-';
        character[9][7] = '-';
        character[9][8] = '-';
        character[9][9] = '-';
        character[9][10] = '-';
        character[9][11] = '-';
        character[9][12] = '-';
        character[9][13] = '-';
        character[9][14] = '-';
        character[9][15] = '-';
        character[9][16] = '-';
        character[9][17] = '\'';
        character[9][19] = '|';
        character[10][1] = '\'';
        character[10][2] = '-';
        character[10][3] = '-';
        character[10][4] = '-';
        character[10][5] = '-';
        character[10][6] = '-';
        character[10][7] = '-';
        character[10][8] = '-';
        character[10][9] = '-';
        character[10][10] = '-';
        character[10][11] = '-';
        character[10][12] = '-';
        character[10][13] = '-';
        character[10][14] = '-';
        character[10][15] = '-';
        character[10][16] = '-';
        character[10][17] = '-';
        character[10][18] = '\'';

        return character;
    }
};
#endif
