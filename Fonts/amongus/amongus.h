#ifndef AMONGUS_H
#define AMONGUS_H
#include "../fonts.h"

class Amongus : public Fonts
{
    static const int rows = 4;
    static const int cols = 9;

public:
    Amongus() : Fonts(rows, cols) {}

    // Uppercase

    char **A()
    {
        char **character = getCharGrid(4, 8);

        character[0][3] = character[0][4] =
            character[1][3] = character[1][4] =
                character[2][3] = character[2][4] =
                    character[3][1] = character[3][2] = character[3][5] = character[3][6] = '_';
        character[1][2] = character[2][1] = '/';
        character[1][5] = character[2][6] = '\\';
        character[3][0] = character[2][2] = character[3][4] = '(';
        character[2][5] = character[3][3] = character[3][7] = ')';

        return character;
    }

    
        char **B()
        {
            char **character = getCharGrid(4,6);
            character[0][1]= character[0][2]=character[0][3]=character[0][4]=character[1][3]=character[2][3]=
            character[3][1]=character[3][2]=character[3][3]=character[3][4] = '_';
            character[1][0]=character[3][0]='(';
            character[2][1]=')';
            character[1][5]='\\';
            character[2][5]='<';
            character[3][5]='/';

            return character;
        }
    

    /*
        char **C()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **D()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **E()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **F()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **G()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **H()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **I()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **J()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **K()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **L()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **M()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **N()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **O()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **P()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Q()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **R()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    
        // char **S()
        // {
        //     char **character = getCharGrid(4,5);

        //     return character;
        // }
    

    /*
        char **T()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **U()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **V()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **W()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **X()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Y()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Z()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    // Lowercase

    char **a()
    {
        char **character = getCharGrid(4, 8);

        character[0][3] = character[0][4] =
            character[1][3] = character[1][4] =
                character[2][3] = character[2][4] =
                    character[3][1] = character[3][2] = character[3][5] = character[3][6] = '_';
        character[1][2] = character[2][1] = '/';
        character[1][5] = character[2][6] = '\\';
        character[3][0] = character[2][2] = character[3][4] = '(';
        character[2][5] = character[3][3] = character[3][7] = ')';

        return character;
    }

    /*
        char **b()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **c()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **d()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **e()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **f()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **g()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **h()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **i()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **j()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **k()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **l()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **m()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **n()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **o()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **p()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **q()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **r()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **s()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **t()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **u()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **v()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **w()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **x()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **y()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **z()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    // Numbers

    /*
        char **zero()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **one()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **two()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **three()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **four()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **five()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **six()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **seven()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    
        char **eight()
        {
            char **character = getCharGrid(4,5);
            character[0][1]=character[0][2]=character[0][3]=character[1][2]=character[2][2]=
            character[3][1]=character[3][2]=character[3][3]='_';
            character[2][0]=character[3][4]='/';
            character[2][4]=character[3][0]='\\';
            character[1][0]='(';
            character[1][4]=')';

            return character;
        }



    /*
        char **nine()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */
};
#endif