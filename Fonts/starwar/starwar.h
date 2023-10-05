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

    char **A()
    {
        char **character = getCharGrid();
        character[5][0] = character[4][1] = character[3][2] = character[2][3] = character[1][4] = character[5][3] = character[3][5] = '/';
        character[1][8] = character[2][9] = character[3][10] = character[4][11] = character[5][12] = character[3][7] = character[5][9] = '\\';
        character[0][5] = character[0][6] = character[0][7] = character[3][6] = character[4][4] = character[4][5] = character[4][6] = character[4][7] = character[4][8] = character[5][1] = character[5][2] = character[5][10] = character[5][11] = '_';
        character[2][6] = '^';
        return character;
    }

    
    char **B()
    {
        char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[0][0] = '.';
            character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[5][1] = character[5][2] = character[5][3] = character[5][4] = character[5][5] = character[5][6] = character[1][4] = character[2][4]= character[3][4]= character[4][4] = '_';
            character[1][0] = character[5][0] = character[4][0] = character[3][0] = character[2][0] = character[2][3] = character[4][3]= character[2][8]= character[4][8] = '|';
            character[1][7] = '\\';
            character[5][7] = '/';
            character[3][7] = '<';
            character[2][5] = character[4][5] = ')';
            return character;
    }


    char **C()
    {
        char **character = getCharGrid();
        
            //Enter the character grid in ROWS X COLS
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

    /*
        char **D()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **E()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **F()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **G()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    
        char **H()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
             character[1][0] = character[1][3] = character[1][5] = character[1][8] = character[2][0] = character[2][3] = character[2][5]= character[2][8]= character[3][0] = character[3][8] = character[4][0] =  character[4][3] = character[4][5] = character[4][8] = character[5][0] = character[5][3] = character[5][5] = character[5][8] ='|';

            character[0][1] = character[0][2] = character[0][6] = character[0][7]= character[2][4]= character[3][4] = character[5][1] = character[5][2] = character[5][6] = character[5][7] = '_';
            character[0][0] = character[0][4] = character[0][8] = character[1][1] = character[1][2] = character[1][6] = character[1][7] = character[2][1] = character[2][2] = character[2][6] = character[2][7] = character[3][1] = character[3][2] = character[3][6] = character[3][7] = character[4][1] = character[4][1] = character[4][1] = character[4][1] = character[4][1] = character[4][1] = character[4][2] = character[4][6] = character[4][7] = character[1][4] = character[4][4] = character[5][4] =  ' ';     
            return character;
        }
    

    /*
        char **I()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **J()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **K()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **L()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **M()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **N()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **O()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **P()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Q()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **R()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **S()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **T()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **U()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **V()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **W()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **X()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Y()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Z()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    // Lowercase

    /*
        char **a()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **b()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **c()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **d()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **e()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **f()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **g()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **h()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **i()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **j()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **k()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **l()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **m()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **n()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **o()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **p()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **q()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **r()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **s()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **t()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **u()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **v()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **w()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **x()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **y()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **z()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    // Numbers

    /*
        char **zero()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **one()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **two()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **three()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **four()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **five()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **six()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **seven()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **eight()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **nine()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */
};
#endif
