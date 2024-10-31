#ifndef STARWAR_H
#define STARWAR_H
#include "../fonts.h"

class Starwar : public Fonts
{
    static const int rows = 6;
    static const int cols = 13;

public:
    Starwar() : Fonts(rows, cols) {}
    // Uppercase

    vs A()
    {
        vs character = getCharGrid(6,13);
        character[5][0] = character[4][1] = character[3][2] = character[2][3] = character[1][4] = character[5][3] = character[3][5] = '/';
        character[1][8] = character[2][9] = character[3][10] = character[4][11] = character[5][12] = character[3][7] = character[5][9] = '\\';
        character[0][5] = character[0][6] = character[0][7] = character[3][6] = character[4][4] = character[4][5] = character[4][6] = character[4][7] = character[4][8] = character[5][1] = character[5][2] = character[5][10] = character[5][11] = '_';
        character[2][6] = '^';
        return character;
    }

    vs B()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[0][0] = '.';
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[1][4] = character[2][4] = character[3][4] = character[4][4] = '_';
        character[1][0] = character[5][0] = character[4][0] = character[3][0] = character[2][0] = character[2][3] = character[4][3] = character[2][8] = character[4][8] = '|';
        character[1][7] = '\\';
        character[5][7] = '/';
        character[3][7] = '<';
        character[2][5] = character[4][5] = ')';
        return character;
    }

    vs C()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[5][0] = character[0][0] = character[0][1] = ' ';
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[1][8] = character[2][0] = character[3][0] = character[4][0] = character[5][8] = character[3][3] = '|';
        character[1][1] = '/';
        character[5][1] = '\\';
        character[2][3] = ',';
        character[4][4] = character[4][5] = character[4][6] = character[4][7] = character[2][4] = character[2][5] = character[2][6] = character[2][7] = '-';
        character[4][8] = '.';
        character[4][3] = '`';
        character[2][8] = '\'';

        return character;
    }

    vs D()
    {
        vs character = getCharGrid(6,10);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[2][9] = character[3][9] = character[4][9] = character[3][3] = character[3][6] = '|';
        character[2][4] = character[2][5] = character[4][4] = character[4][5] = '-';
        character[2][3] = character[2][6] = '.';
        character[4][3] = character[4][6] = '\'';
        character[1][8] = '\\';
        character[5][8] = '/';

        return character;
    }

    vs E()
    {
        vs character = getCharGrid(6, 9);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[1][4] = character[1][5] = character[1][6] = character[1][7] = '_';
        character[4][4] = character[4][5] = character[4][6] = character[4][7] = '_';
        character[2][4] = character[2][5] = '_';
        character[3][4] = character[3][5] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = '|';
        character[1][8] = character[5][8] =  '|';
        character[2][3] = character[4][3] =   '|';
        character[3][6] =   '|';

        return character;
    }

    vs F()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[2][4] = character[2][5] = character[3][4] = character[3][5] = character[5][1] = character[5][2] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[2][3] = character[4][3] = character[5][3] = character[1][8] = character[3][6] = '|';
        return character;
    }

    vs G()
    {
        vs character = getCharGrid(6, 10);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[2][6] = character[2][7] = character[3][6] = character[4][4] = character[4][5] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[1][1] = '/';
        character[5][1] = '\\';
        character[1][9] = character[2][0] = character[2][3] = character[3][0] = character[3][3] = character[3][5] = character[3][8] = character[4][0] = character[4][3] = character[4][6] = character[4][8] = character[5][8] = '|';

        return character;
    }

    vs H()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[1][3] = character[1][5] = character[1][8] = character[2][0] = character[2][3] = character[2][5] = character[2][8] = character[3][0] = character[3][8] = character[4][0] = character[4][3] = character[4][5] = character[4][8] = character[5][0] = character[5][3] = character[5][5] = character[5][8] = '|';
        character[0][1] = character[0][2] = character[0][6] = character[0][7] = character[2][4] = character[3][4] = character[5][1] = character[5][2] = character[5][6] = character[5][7] = '_';
        character[0][0] = character[0][4] = character[0][8] = character[1][1] = character[1][2] = character[1][6] = character[1][7] = character[2][1] = character[2][2] = character[2][6] = character[2][7] = character[3][1] = character[3][2] = character[3][6] = character[3][7] = character[4][1] = character[4][2] = character[4][6] = character[4][7] = character[1][4] = character[4][4] = character[5][4] = ' ';
        return character;
    }
    vs I()
    {
        vs character = getCharGrid(6,4);
        character[0][1] = character[5][1] = character[0][2] = character[5][2] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[1][3] = character[2][3] = character[3][3] = character[4][3] = character[5][3] = '|';
        return character;
    }

    vs J()
    {
        vs character = getCharGrid(6,10);

        // Enter the character grid in ROWS X COLS
        character[4][0] = character[3][6] = character[2][6] = character[1][6] = character[1][9] = character[2][9] = character[3][9] = character[4][9] = '|';
        character[0][7] = character[0][8] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[3][1] = character[3][2] = character[4][4] = character[4][5] = '-';
        character[3][0] = character[3][3] = '.';
        character[5][1] = '\\';
        character[5][8] = '/';
        character[4][3] = '`';
        character[4][6] = '\'';
        return character;
    }

    vs K()
    {
        vs character = getCharGrid(6, 8);

        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[1][3] = character[5][3] = '|';
        character[0][1] = character[0][2] = character[0][5] = character[0][6] = character[0][7] = character[5][1] = character[5][2] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[2][3] = '\'';
        character[4][3] = '.';
        character[3][5] = '<';
        character[1][4] = character[1][7] = character[2][6] = '/';
        character[5][4] = character[5][7] = character[4][6] = '\\';

        return character;
    }

    vs L()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[0][0] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[1][1] = character[1][2] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[2][1] = character[2][2] = character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[3][1] = character[3][2] = character[3][4] = character[3][5] = character[3][6] = character[3][7] = character[3][8] = character[4][1] = character[4][2] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = character[5][8] = ' ';
        character[1][0] = character[1][3] = character[2][0] = character[2][3] = character[3][0] = character[3][3] = character[4][0] = character[5][0] = character[5][8] = '|';
        character[4][3] = '`';
        character[4][8] = '.';
        character[4][4] = character[4][5] = character[4][6] = character[4][7] = '-';
        character[0][1] = character[0][2] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';

        return character;
    }

    vs M()
    {
        vs character = getCharGrid(6,10);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[3][3] = character[4][3] = character[5][3] = character[1][9] = character[2][9] = character[3][9] = character[4][9] = character[5][9] = character[3][6] = character[4][6] = character[5][6] = '|';
        character[0][1] = character[0][2] = character[0][3] = character[0][6] = character[0][7] = character[0][8] = character[5][1] = character[5][2] = character[5][7] = character[5][8] = '_';
        character[1][4] = character[2][3] = character[3][4] = '\\';
        character[1][5] = character[3][5] = character[2][6] = '/';
        character[0][0] = character[0][9] = '.';

        return character;
    }

    vs N()
    {
        // Enter the character grid in ROWS X COLS
        vs character = getCharGrid(6,9);
        character[0][1] = character[0][2] = character[0][6] = character[0][7] = character[5][1] = character[5][2] = character[5][6] = character[5][7] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[4][3] = character[5][3] = character[1][5] = character[2][5] = character[1][8] = character[2][8] = character[3][8] = character[4][8] = character[5][8] = '|';
        character[1][3] = character[2][4] = character[4][4] = character[5][5] = '\\';
        character[0][0] = character[0][8] = character[3][3] = '.';
        character[3][5] = '`';

        return character;
    }

    vs O()
    {
        vs character = getCharGrid(6,10);

        // Enter the character grid in ROWS X COLS
        character[1][4] = character[1][5] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[2][0] = character[3][0] = character[4][0] = character[2][9] = character[3][9] = character[4][9] = character[2][3] = character[2][6] = character[3][3] = character[3][6] = '|';
        character[1][8] = character[5][1] = '\\';
        character[1][1] = character[5][8] = '/';
        character[4][4] = character[4][5] = '-';
        character[4][3] = '`';
        character[4][6] = '\'';

        return character;
    }

    vs P()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[2][4] = character[1][4] = character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[5][2] = character[3][5] = character[3][4] = character[3][6] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[2][8] = character[2][3] = character[4][3] = character[5][3] = '|';
        character[1][7] = '\\';
        character[0][0] = '.';
        character[3][7] = '/';
        character[2][5] = ')';

        return character;
    }

    
        vs Q()
        {
            vs character = getCharGrid(6,14);

            //Enter the character grid in ROWS X COLS
            character[1][4] = character[1][5] =  character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = character[5][12] =  '_';
            character[2][0] = character[3][0] = character[4][0] = character[2][3] = character[3][3] = character[2][6] = character[3][6] = character[2][9] = character[3][9] = '|';
            character[4][4] = character[4][5] = character[4][10] = character[4][11] = '-';
            character[1][8] = character[5][1] = character[5][7] = '\\';
            character[4][6] = character[4][9] = '\'';
            character[5][13] = '\\';
            character[4][12] = '.';
            character[4][3] = '`';
            character[1][1] = '/';

            return character;
        }


    

    vs R()
    {
        vs character = getCharGrid(6,13);

        // Enter the character grid in ROWS X COLS
        character[1][4] = character[2][4] = character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[5][2] = character[5][7] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[2][8] = character[2][3] = character[5][12] = character[5][3] = '|';
        character[4][8] = character[4][9] = character[4][10] = character[4][11] = '-';
        character[1][7] = character[4][4] = character[4][7] = '\\';
        character[0][0] = character[5][6] = character[4][12] = '.';
        character[3][7] = '/';
        character[2][5] = ')';
        character[5][5] = '`';

        return character;
    }

    
    vs S()
    {
        vs character = getCharGrid(6,13);

        //Enter the character grid in ROWS X COLS
        character[0][12] = character[4][0] = '.';
        character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[1][4] = character[5][8] = '/';
        character[1][12] = character[2][3] = character[4][9] = character[5][0] = '|';
        character[2][7] = '(';
        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[4][1] = character[4][2] = character[4][3] = character[4][4] = '-';
        character[2][12] = '`';
        character[3][4] = character[3][8] = '\\';
        character[4][5] = ')';

        

        return character;
    }
    

    vs T()
    {
        vs character = getCharGrid(6,13);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[2][1] = character[2][2] = character[2][3] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[5][5] = character[5][6] = '-';
        character[0][0] = character[0][12] = '.';
        character[2][0] = character[2][12] = '`';
        character[1][0] = character[1][12] = character[2][4] = character[2][7] = character[3][4] = character[3][7] = character[4][4] = character[4][7] = character[5][4] = character[5][7] = '|';
        return character;
    }

    vs U()
    {
        vs character = getCharGrid(6,10);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[1][3] = character[2][3] = character[3][3] = character[1][6] = character[2][6] = character[3][6] = character[1][9] = character[2][9] = character[3][9] = character[4][9] = '|';
        character[0][1] = character[0][2] = character[0][7] = character[0][8] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[5][7] = '_';
        character[4][4] = character[4][5] = '-';
        character[4][3] = '`';
        character[4][6] = '\'';
        character[5][1] = '\\';
        character[5][8] = '/';
        return character;
    }

    vs V()
    {
        vs character = getCharGrid(6,12);

        // Enter the character grid in ROWS X COLS

        character[0][0] = character[0][1] = character[0][2] = character[0][3] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[5][5] = character[5][6] = '_';
        character[1][0] = character[2][1] = character[3][2] = character[4][3] = character[5][4] = character[1][4] = character[2][5] = '\\';
        character[1][11] = character[2][10] = character[3][9] = character[4][8] = character[5][7] = character[1][7] = character[2][6] = '/';

        return character;
    }

     vs W()
        {
            vs character = getCharGrid(6,18);

            //Enter the character grid in ROWS X COLS
        character[0][0] = character[0][1] = character[0][2] = character[0][3] = character[0][8] = character[0][9] = character[0][14] = character[0][15] = character[0][16] = character[0][17]= character[5][5]= character[5][6]= character[5][11]= character[5][12] = '_';
        character[1][0] = character[2][1] = character[3][2] = character[4][3] = character[5][4] = character[1][4] = character[2][5]= character[2][11]= character[1][10]= character[4][9]= character[5][10]= '\\';
        character[1][13] = character[2][12] = character[3][15] = character[4][14] = character[5][13] = character[1][7] = character[2][6]= character[4][8]= character[5][7]= character[1][17]= character[2][16] = '/';

            return character;
        }


    vs X()
    {
        vs character = getCharGrid(6,9);

        // Enter the character grid in ROWS X COLS
        character[0][0] = character[0][1] = character[0][2] = character[0][6] = character[0][7] = character[0][8] = character[5][1] = character[5][2] = character[5][6] = character[5][7] = '_';
        character[1][0] = character[1][3] = character[2][1] = character[5][5] = character[5][8] = character[4][7] = '\\';
        character[4][1] = character[5][0] = character[5][3] = character[1][5] = character[1][8] = character[2][7] = '/';
        character[2][4] = 'v';
        character[3][2] = '>';
        character[3][6] = '<';
        character[4][4] = '.';
        return character;
    }

    vs Y()
    {
        vs character = getCharGrid(6, 12);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][0] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[3][3] = character[3][8] = character[5][5] = character[5][6] = '_';
        character[1][0] = character[2][1] = character[3][2] = character[1][4] = character[2][5] = '\\';
        character[1][7] = character[2][6] = character[1][11] = character[2][10] = character[3][9] = '/';
        character[4][4] = character[5][4] = character[4][7] = character[5][7] = '|';

        return character;
    }

    vs Z()
        {
            vs character = getCharGrid(6,11);

            //Enter the character grid in ROWS X COLS
            character[0][4] = character[0][1] = character[0][2] = character[0][3] = character[0][8] = character[0][5] = character[0][6] = character[0][7] = character[5][6]= character[5][7]= character[5][8]= character[5][9] = character[5][2]= character[5][3]= character[5][4]= character[5][5] = '_';
        character[1][8] = character[2][7] = character[3][6] = character[4][5] = character[5][1] = character[4][2] = character[2][4]= character[3][3]='/';
        character[2][0] = '`';
        character[5][10] = character[1][0] ='|';
        character[4][10] = '.';
        character[2][1] = character[2][2] = character[2][3] = character[4][6] = character[4][7] = character[4][8] = character[4][9] = '-';

        return character;
        }

    // Lowercase

    vs a()
    {
        vs character = getCharGrid(6, 13);

        character[5][0] = character[4][1] = character[3][2] = character[2][3] = character[1][4] = character[5][3] = character[3][5] = '/';
        character[1][8] = character[2][9] = character[3][10] = character[4][11] = character[5][12] = character[3][7] = character[5][9] = '\\';
        character[0][5] = character[0][6] = character[0][7] = character[3][6] = character[4][4] = character[4][5] = character[4][6] = character[4][7] = character[4][8] = character[5][1] = character[5][2] = character[5][10] = character[5][11] = '_';
        character[2][6] = '^';

        return character;
    }

    /*
        vs b()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs c()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs d()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs e()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs f()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs g()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs h()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs i()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs j()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs k()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs l()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs m()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs n()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs o()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs p()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs q()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs r()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs s()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs t()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs u()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs v()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs w()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs x()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs y()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs z()
        {
            vs character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    // Numbers

    vs zero()
    {
        vs character = getCharGrid(6,7);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[4][3] = character[5][2] = character[5][3] = character[5][4] = '_';
        character[1][1] = character[5][5] = '/';
        character[1][5] = character[5][1] = '\\';
        character[2][0] = character[3][0] = character[4][0] = character[2][6] = character[3][6] = character[4][6] = character[2][2] = character[3][2] = character[4][2] = character[2][4] = character[3][4] = character[4][4] = '|';

        return character;
    }

    vs one()
    {
        vs character = getCharGrid(6,4);
        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[5][2] = '_';
        character[1][0] = '/';
        character[1][1] = character[5][2] = '_';
        character[2][1] = character[3][1] = character[4][1] = character[5][1] = character[1][3] = character[2][3] = character[3][3] = character[4][3] = character[5][3] = '|';

        return character;
    }

    vs two()
    {
        vs character = getCharGrid(6,6);
        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[1][1] = character[1][2] = character[4][4] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = '_';
        character[1][4] = '\\';
        character[3][2] = character[3][4] = character[4][1] = character[4][3] = '/';
        character[2][3] = ')';
        character[1][0] = character[2][5] = character[5][0] = character[5][5] = '|';
        return character;
    }

    
        vs three()
        {
            vs character = getCharGrid(6,7);

            //Enter the character grid in ROWS X COLS
            character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][1] = character[1][2] = character[1][3] = character[2][2] = character[2][3] = character[3][2] = character[3][3] = character[4][1] = character[4][2] = character[4][3] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = '_';
            character[1][0] = character[3][1] = character[5][0] = character[2][6] = character[4][6] = '|';
            character[2][4] = character[4][4] = ')';
            character[3][5] = '<';
            character[1][5] = '\\';
            character[5][5] = '/';

            return character;
        }

    

    vs four()
    {
        vs character = getCharGrid(6,8);

        character[0][1] = character[0][4] = character[3][1] = character[3][2] = character[3][6] = character[5][4] = character[2][6] = '_';
        character[1][0] = character[1][2] = character[1][3] = character[1][5] = character[2][0] = character[2][2] = character[2][3] = character[2][5] = character[3][0] = character[3][7] = character[4][3] = character[4][5] = character[5][3] = character[5][5] = '|';

        return character;
    }

    vs five()
    {
        vs character = getCharGrid(6,7);

        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][2] = character[1][3] = character[1][4] = character[1][5] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[4][1] = character[4][2] = character[4][3] = character[5][1] = character[5][2] = character[5][3] = '_';
        character[1][0] = character[2][0] = character[3][0] = character[5][0] = character[1][6] = character[2][2] = character[4][6] = '|';
        character[4][4] = ')';
        character[3][5] = '\\';
        character[5][5] = '/';
        return character;
    }

    vs six()
    {
        vs character = getCharGrid(6, 7);

        // Enter the character grid in ROWS X COLS
        character[0][3] = character[0][4] = character[2][4] = character[3][3] = character[4][3] = character[5][2] = character[5][3] = character[5][4] = '_';
        character[1][2] = character[1][4] = character[2][1] = character[2][3] = character[5][5] = '/';
        character[3][0] = character[4][0] = character[4][6] = '|';
        character[3][5] = character[5][1] = '\\';
        character[4][2] = '(';
        character[4][4] = ')';
        character[3][2] = '.';
        return character;
    }

    vs seven()
    {
        vs character = getCharGrid(6, 8);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[1][1] = character[1][2] = character[1][3] = character[1][4] = character[5][2] = '_';
        character[1][0] = character[1][7] = '|';
        character[2][4] = character[2][6] = character[3][3] = character[3][5] = character[4][2] = character[4][4] = character[5][1] = character[5][3] = '/';

        return character;
    }

    vs eight()
    {
        vs character = getCharGrid(6,7);
        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][3] = character[3][3] = character[4][3] = character[5][2] = character[5][3] = character[5][4] = '_';
        character[1][1] = character[5][5] = '/';
        character[5][1] = character[1][5] = '\\';
        character[2][2] = character[4][2] = '(';
        character[2][4] = character[4][4] = ')';
        character[3][1] = '>';
        character[3][5] = '<';
        character[2][0] = character[2][6] = character[4][0] = character[4][6] = '|';
        return character;
    }

    vs nine()
    {
        vs character = getCharGrid(6,7);
        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][3] = character[3][2] = character[3][3] = character[5][3] = '_';
        character[1][1] = character[4][3] = character[4][5] = character[5][2] = character[5][4] = '/';
        character[1][5] = character[3][1] = '\\';
        character[2][2] = '(';
        character[2][4] = ')';
        character[3][4] = ',';
        character[2][0] = character[2][6] = character[3][6] = '|';
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
