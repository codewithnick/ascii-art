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
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][3] =
            character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = ')';
        character[1][5] = '\\';
        character[2][5] = '<';
        character[3][5] = '/';

        return character;
    }

    char **C()
    {
        char **character = getCharGrid(4, 6);

        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[1][4] =
            character[2][3] = character[2][4] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][5] = character[3][5] = ')';
        character[2][0] = character[2][2] = '(';
        character[1][1] = '/';
        character[3][1] = '\\';

        return character;
    }

    char **D()
    {
        char **character = getCharGrid(4, 7);
        character[0][1] = character[0][4] = character[0][2] = character[0][3] = character[1][3] = character[2][3] =
            character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = character[2][2] = '(';
        character[2][1] = character[2][4] = character[2][6] = ')';
        character[1][5] = '\\';
        character[3][5] = '/';

        // Enter the character grid in ROWS X COLS

        return character;
    }

    char **E()
    {
        char **character = getCharGrid(4, 6);
        character[1][0] = character[3][0] = '(';
        character[1][5] = character[2][1] = character[2][4] = character[3][5] = ')';
        character[1][2] = character[1][3] = character[1][4] = character[2][2] = character[2][3] = character[3][2] = character[3][3] = character[3][4] = character[0][1] = character[0][2] = character[0][3] = character[0][4] = '_';

        return character;
    }

    char **F()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][2] = character[1][3] = character[1][4] = character[2][2] = character[2][3] = character[3][1] = character[3][2] = '_';
        character[1][0] = character[3][0] = '(';
        character[1][5] = character[2][1] = character[2][4] = character[3][3] = ')';
        return character;
    }

    char **G()
    {
        char **character = getCharGrid(4, 6);
        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[1][4] = character[2][3] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[2][0] = character[2][2] = '(';
        character[1][5] = ')';
        character[1][1] = character[3][5] = '/';
        character[3][1] = '\\';
        character[2][4] = '-';
        character[2][5] = '.';

        // Enter the character grid in ROWS X COLS

        return character;
    }

    char **H()
    {
        char **character = getCharGrid(4, 7);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][5] = character[1][3] = character[2][3] = character[3][1] = character[3][5] = '_';
        character[1][0] = character[1][4] = character[2][5] = character[3][0] = character[3][4] = '(';
        character[1][2] = character[1][6] = character[2][1] = character[3][2] = character[3][6] = ')';
        return character;
    }

    char **I()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][1] = character[1][4] = character[2][1] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = character[2][3] = '(';
        character[1][5] = character[3][5] = character[2][2] = ')';

        return character;
    }

    char **J()
    {
        char **character = getCharGrid(4, 7);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][2] = character[1][5] = character[2][2] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][1] = character[2][4] = '(';
        character[1][6] = character[2][3] = character[3][5] = ')';
        character[2][0] = '.';
        character[2][1] = '-';
        character[3][0] = '\\';
        return character;
    }

    char **K()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[2][4] = character[3][0] = '(';
        character[1][2] = character[1][5] = character[2][1] = character[3][2] = character[3][5] = ')';
        character[1][3] = '/';
        character[3][3] = '\\';
        // Enter the character grid in ROWS X COLS

        return character;
    }

    char **L()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[2][2] = character[3][0] = '(';
        character[1][3] = character[2][1] = character[3][5] = ')';
        return character;
    }

    char **M()
    {
        char **character = getCharGrid(4, 8);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][5] = character[0][6] = character[3][1] = character[3][6] = '_';
        character[1][0] = character[2][6] = character[3][0] = '(';
        character[1][7] = character[2][1] = character[3][7] = ')';
        character[1][3] = character[3][3] = character[3][5] = '\\';
        character[1][4] = character[3][2] = character[3][4] = '/';
        return character;
    }

    char **N()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[1][3] = character[2][4] = character[3][0] = '(';
        character[1][5] = character[2][1] = character[3][2] = character[3][5] = ')';
        character[1][2] = character[3][3] = '\\';

        // Enter the character grid in ROWS X COLS

        return character;
    }

    char **O()
    {
        char **character = getCharGrid(4, 7);

        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] =
            character[3][1] = character[3][2] = character[3][3] = character[3][4] = character[3][5] =
                character[1][3] = character[2][3] = '_';
        character[1][0] = character[3][0] = character[2][2] = character[2][5] = '(';
        character[1][6] = character[2][1] = character[2][4] = character[3][6] = ')';
        return character;
    }

    char **P()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][2] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[3][3] = ')';
        character[1][5] = '\\';
        character[2][5] = '/';

        return character;
    }

    char **Q()
    {
        char **character = getCharGrid(4, 7);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] =
            character[3][1] = character[3][2] = character[3][3] = character[1][3] = character[2][3] = '_';
        character[1][0] = character[3][0] = character[2][2] = character[2][5] = '(';
        character[1][6] = character[2][1] = character[2][4] = ')';
        character[3][4] = '/';
        character[3][5] = character[3][6] = '\\';
        return character;
    }

    char **R()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[3][2] = character[3][5] = ')';
        character[3][3] = character[1][5] = '\\';
        character[2][5] = '/';
        return character;
    }

    char **S()
    {
        char **character = getCharGrid(4, 5);

        character[0][1] = character[0][2] = character[0][3] =
            character[1][2] = character[1][3] =
                character[2][1] = character[2][2] =
                    character[3][1] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[3][4] = '/';
        character[1][1] = character[2][3] = ' ';
        character[2][0] = character[2][4] = '\\';
        character[1][4] = ')';
        character[3][0] = '(';

        return character;
    }

    char **T()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] =
            character[1][1] = character[1][4] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[2][3] = character[3][1] = '(';
        character[1][5] = character[2][2] = character[3][4] = ')';
        return character;
    }

    char **U()
    {
        char **character = getCharGrid(4, 8);
        character[0][1] = character[0][2] = character[0][5] = character[0][6] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = character[3][5] = character[3][6] = '_';
        character[1][0] = character[1][4] = character[2][2] = character[2][6] = character[3][0] = '(';
        character[1][3] = character[1][7] = character[2][1] = character[2][5] = character[3][7] = ')';

        // Enter the character grid in ROWS X COLS

        return character;
    }

    char **V()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][4] = '_';
        character[1][2] = character[2][1] = character[3][2] = '\\';
        character[1][0] = '(';
        character[1][3] = character[2][4] = character[3][3] = '/';
        character[1][5] = ')';
        return character;
    }

    char **W()
    {
        char **character = getCharGrid(4, 8);
        character[0][1] = character[0][6] = character[3][1] = character[3][2] = character[3][5] = character[3][6] = '_';
        character[1][0] = character[3][0] = '(';
        character[1][7] = character[3][7] = ')';
        character[1][3] = character[1][5] = character[3][3] = '/';
        character[1][2] = character[1][4] = character[3][4] = '\\';
        character[2][1] = ')';
        character[2][6] = '(';
        return character;
    }

    char **X()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[2][4] = character[3][0] = '(';
        character[1][2] = character[3][3] = '\\';
        character[1][3] = character[3][2] = '/';
        character[1][5] = character[2][1] = character[3][5] = ')';
        return character;
    }

    char **Y()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS

        character[0][1] = character[0][4] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[3][1] = '(';
        character[1][5] = character[3][4] = ')';
        character[1][2] = character[2][1] = '\\';
        character[1][3] = character[2][4] = '/';
        return character;
    }

    char **Z()
    {
        char **character = getCharGrid(5, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][1] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[1][5] = character[3][5] = ')';
        character[2][1] = character[2][3] = '/';

        return character;
    }

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

    char **b()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][3] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = ')';
        character[1][5] = '\\';
        character[3][5] = '/';
        character[2][5] = '<';
        return character;
    }

    char **c()
    {
        char **character = getCharGrid(4, 6);
        character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[1][4] = character[2][3] = character[2][4] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][1] = '/';
        character[3][1] = '\\';
        character[2][0] = character[2][2] = '(';
        character[1][5] = character[3][5] = ')';
        return character;
    }

    char **d()
    {
        char **character = getCharGrid(4, 7);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[3][4] =
            character[3][1] = character[3][2] = character[3][3] = character[1][3] = character[2][3] = '_';
        character[1][0] = character[3][0] = character[2][2] = '(';
        character[2][1] = character[2][4] = character[2][6] = ')';
        character[3][5] = '/';
        character[1][5] = '\\';
        return character;
    }

    char **e()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][2] = character[1][3] = character[1][4] = character[2][2] = character[2][3] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[1][5] = character[2][4] = character[3][5] = ')';
        return character;
    }
    char **f()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][2] = character[1][3] = character[1][4] = character[2][2] = character[2][3] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[1][5] = character[2][4] = character[3][5] = ')';
        return character;
    }

    
        char **g()
        {
            char **character = getCharGrid(4,7);

            character[0][2]= character[0][3] = character[0][4]= character[1][3] = character[1][4] = character[2][3] = character[3][2] = character[3][3] =character[3][4] ='_';
            character[1][1] =character[3][5] = '/';
            character[1][5] = ')';
            character[2][0] = character[2][2] = '(';
            character[2][4] = '-';
            character[2][5] = '.';
            character[3][1] = '\\';

            return character;
        }
    

    
    char **h()
    {
        char **character = getCharGrid(4,7);

        //Enter the character grid in ROWS X COLS

        character[0][1] = character[0][5]= character[1][3]= character[2][3]=character[3][5] = character[3][1]='_';
        character[1][0] = character[1][4] =character[3][0] = character[3][4] = character[2][5]='(';
        character[1][6] = character[1][2] = character[3][2] = character[3][6] = character[2][1] = ')';

        return character;
    }

        char **i()
        {
            char **character = getCharGrid(4,6);
            character[0][1]= character[0][2]= character[0][3]= character[0][4]= character[1][1]= character[1][4]= character[2][1]= character[2][4]= character[3][1]= character[3][2]= character[3][3]= character[3][4]='_';
            character[1][0]= character[2][3]= character[3][0]='(';
            character[1][5]= character[2][2]= character[3][5]=')';
            return character;
        }
    

   

    char **j()
    {
        char **character = getCharGrid(4, 7);
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][2] = character[1][5] = character[2][2] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][1] = character[2][4] = '(';
        character[1][6] = character[2][3] = character[3][5] = ')';
        character[2][0] = '.';
        character[3][0] = '\\';
        return character;
    }

    char **k()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[2][4] = character[3][0] = '(';
        character[1][2] = character[1][5] = character[2][1] = character[3][2] = character[3][5] = ')';
        character[1][3] = '/';
        character[3][3] = '\\';
        return character;
    }

    char **l()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[2][2] = character[3][0] = '(';
        character[1][3] = character[2][1] = character[3][5] = ')';
        return character;
    }

    char **m()
    {
        char **character = getCharGrid(4, 8);
        character[0][1] = character[0][2] = character[0][5] = character[0][6] = character[3][1] = character[3][6] = '_';
        character[1][0] = character[2][6] = character[3][0] = '(';
        character[1][7] = character[2][1] = character[3][7] = ')';
        character[1][4] = character[3][2] = character[3][4] = '/';
        character[1][3] = character[3][3] = character[3][5] = '\\';
        return character;
    }

    char **n()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[1][3] = character[3][0] = character[2][4] = '(';
        character[1][5] = character[2][1] = character[3][2] = character[3][5] = ')';
        character[1][2] = character[3][3] = '\\';
        // character[0][0] = character[0][2] = character[0][3] = character[0][5] = character[1][1] = character[1][4] = character[2][0] =character[2][2] =character[2][3] = character[2][5]  = ' ';

        return character;
    }

    char **o()
    {
        char **character = getCharGrid(4, 7);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][3] = character[2][3] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = character[3][5] = '_';
        character[1][0] = character[2][2] = character[2][5] = character[3][0] = '(';
        character[1][6] = character[2][1] = character[2][4] = character[3][6] = ')';
        return character;
    }

    char **p()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[2][2] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = '_';
        character[1][5] = '\\';
        character[3][3] = character[2][1] = ')';
        character[1][0] = character[3][0] = '(';
        character[2][5] = '/';

        return character;
    }

    char **q()
    {
        char **character = getCharGrid(4, 7);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[1][3] = character[3][3] = character[2][3] = character[3][1] = character[3][2] = '_';
        character[3][5] = character[3][6] = '\\';
        character[1][6] = character[2][1] = character[2][4] = ')';
        character[1][0] = character[2][2] = character[2][5] = character[3][0] = '(';
        character[3][4] = '/';

        return character;
    }

    char **r()
    {
        char **character = getCharGrid(4, 6);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][3] = character[3][1] = character[3][4] = '_';
        character[1][5] = character[3][3] = '\\';
        character[3][5] = character[2][1] = character[3][2] = ')';
        character[1][0] = character[3][0] = '(';
        character[2][5] = '/';

        return character;
    }

    char **s()
    {
        char **character = getCharGrid(4, 5);
        character[0][1] = character[0][2] = character[0][3] = character[1][2] = character[1][3] = character[2][1] = character[2][2] = character[3][1] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[3][4] = '/';
        character[2][0] = character[2][4] = '\\';
        character[1][4] = ')';
        character[3][0] = '(';
        return character;
    }

    char **t()
    {
        char **character = getCharGrid(4,6);

        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][1] = character[1][4] = character[3][2] = character[3][3] ='_';
        character[1][0] = character[2][3] = character[3][1] = '(';
        character[1][5] = character[2][2] = character[3][4] = ')';
        

        return character;
    }

    char **u()
        {
            char **character = getCharGrid(4,8);

            character[0][1] = character[0][2] = character[0][5] = character[0][6] = character[2][3] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = character[3][5] = character[3][6] = '_';
            character[1][0] = character[1][4] = character[2][2] = character[2][6] = character[3][0] = '(';
            character[1][3] = character[1][7] = character[2][1] = character[2][5] = character[3][7] = ')';
            return character;
        }

    char **v()
        {
            char **character = getCharGrid(4,6);

            character[0][1] = character[0][4] = '_';
            character[1][0] = '(';
            character[1][5] = ')';
            character[1][2] = character[2][1] = character[3][2] = '\\';
            character[1][3] = character[2][4] = character[3][3] = '/';
            return character;
        }


  char **w()
        {
            char **character = getCharGrid(4,8);

            character[0][1] = character[0][6] = character[3][1] = character[3][2] = character[3][5] = character[3][6] = '_';
            character[1][0] = character[2][6] = character[3][0] = '(';
            character[1][7] = character[2][1] = character[3][7] = ')';
            character[1][2] = character[1][4] = character[3][4] = '\\';
            character[1][3] = character[1][5] = character[3][3] = '/';
            return character;
        }
    char **x()
    {
        char **character = getCharGrid(4, 6);

        character[0][1] = character[0][4] = character[3][1] = character[3][4] = '_';
        character[1][0] = character[3][0] = character[2][4] = '(';
        character[1][5] = character[3][5] = character[2][1] = ')';
        character[1][2] = character[3][3] = '\\';
        character[1][3] = character[3][2] = '/';

        return character;
    }

    /*
        char **y()
        {
            char **character = getCharGrid(ROWS,COLS);

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    char **z()
    {
        char **character = getCharGrid(ROWS, COLS);
        character[0][1] = character[0][2] = character[0][3] = character[0][4] = character[1][1] = character[2][4] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[2][3] = '/';
        character[1][5] = character[3][5] = ')';
        return character;
    }

    // Numbers

    char **zero()
    {
        char **character = getCharGrid(4, 7);
        character[0][2] = character[0][3] = character[0][4] = character[3][2] = character[3][3] =
            character[3][4] = character[1][3] = character[2][3] = '_';
        character[1][1] = character[3][5] = '/';
        character[1][5] = character[3][1] = '\\';
        character[2][0] = character[2][2] = '(';
        character[2][4] = character[2][6] = ')';

        return character;
    }
    char **one()
    {
        char **character = getCharGrid(4, 4);

        character[0][1] = character[0][2] = character[3][1] = character[3][2] = '_';
        character[1][0] = '/';
        character[1][3] = character[2][1] = character[3][3] = ')';
        character[2][2] = character[3][0] = '(';
        return character;
    }

    char **two()
    {
        char **character = getCharGrid(4, 6);
        character[0][1] = character[0][2] = character[0][3] = character[1][1] = character[1][2] = character[2][3] = character[3][1] = character[3][2] = character[3][3] = character[3][4] = '_';
        character[1][0] = character[3][0] = '(';
        character[2][1] = character[2][4] = '/';
        character[1][4] = '\\';
        character[3][5] = ')';

        return character;
    }

    char **three()
    {
        char **character = getCharGrid(4, 5);
        character[0][1] = character[0][2] = character[0][3] = character[1][1] = character[1][2] = character[2][2] = character[3][1] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[3][0] = character[2][1] = '(';
        character[3][4] = '/';
        character[2][4] = '\\';
        character[1][4] = ')';
        return character;
    }

    char **four()
    {
        char **character = getCharGrid(4, 6);
        character[0][2] = character[0][3] = character[2][4] = character[2][1] = character[3][3] = '_';
        character[2][0] = character[3][2] = '(';
        character[1][1] = '/';
        character[1][4] = '|';
        character[1][2] = '.';
        character[2][5] = character[3][4] = ')';
        return character;

        return character;
    }

    char **five()
    {
        char **character = getCharGrid(4, 5);
        character[0][1] = character[0][2] = character[0][3] = character[1][2] = character[1][3] = character[2][1] = character[2][2] = character[3][1] = character[3][2] = character[3][3] = '_';
        character[1][0] = character[2][0] = '|';
        character[1][4] = ')';
        character[3][0] = '(';
        character[2][4] = '\\';
        character[3][4] = '/';
        return character;
    }

    char **six()
    {
        char **character = getCharGrid(ROWS, COLS);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[2][2] = '_';
        character[1][1] = character[2][0] = character[3][4] = '/';
        character[3][0] = character[2][4] = '\\';
        character[1][3] = ')';
        character[3][1] = character[3][2] = character[3][3] = '_';

        return character;
    }

    char **seven()
    {
        char **character = getCharGrid(4, 5);

        character[0][1] = character[0][2] = character[0][3] = character[1][1] = character[1][2] = character[3][1] = '_';
        character[2][1] = character[2][3] = character[3][2] = '/';
        character[1][0] = character[3][0] = '(';
        character[1][4] = ')';
        return character;
    }

    char **eight()
    {
        char **character = getCharGrid(4, 5);
        character[0][1] = character[0][2] = character[0][3] = character[1][2] = character[2][2] =
            character[3][1] = character[3][2] = character[3][3] = '_';
        character[2][0] = character[3][4] = '/';
        character[2][4] = character[3][0] = '\\';
        character[1][0] = '(';
        character[1][4] = ')';

        return character;
    }


        char **nine()
        {
            char **character = getCharGrid(4,5);
            character[0][1] = character[0][2] = character[0][3] =  character[1][2] =  character[2][1] =  character[3][2] = '_';
            character[1][0] = character[2][4] =  character[3][3] = '/';
             character[1][4] =  character[2][0] = '\\';
              character[3][1] = '(';

           
            return character;
        }


};
#endif
