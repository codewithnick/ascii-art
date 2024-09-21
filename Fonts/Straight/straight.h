#ifndef STRAIGHT_H
#define STRAIGHT_H
#include "../fonts.h"


class Straight : public Fonts
{
    static const int ROWS = 3;
    static const int COLS = 4;

public:
    Straight() : Fonts(ROWS, COLS) {}

    // Uppercase

    vvc A()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[1][1] = character[2][0] = '/';
        character[1][2] = character[2][3] = '\\';
        character[2][1] = character[2][2] = '-';

        return character;
    }

    vvc B()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][0] = character[0][3] = ' ';
        character[2][1] = character[2][2] = character[1][1] = character[1][2] = character[0][1] = character[0][2] = '_';
        character[2][0] = character[1][0] = '|';
        character[2][3] = character[1][3] = ')';

        return character;
    }

    vvc C()
    {
        vvc character = getCharGrid(3, 4);
        character[0][0] = character[1][1] = character[1][2] = character[1][3] = character[0][3] = character[2][3] = ' ';
        character[0][1] = character[0][2] = '_';
        character[1][0] = '/';
        character[2][0] = '\\';
        character[2][1] = character[2][2] = '_';
        return character;
    }

    vvc D()
    {
        vvc character = getCharGrid(3, 4);

        character[0][0] = character[0][3] = character[1][1] = character[1][2] = ' ';
        character[0][1] = character[0][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = character[2][0] = '|';
        character[1][3] = '\\';
        character[2][3] = '/';

        return character;
    }

    vvc E()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = '_';
        character[1][0] = character[2][0] = '|';
        character[1][1] = character[2][1] = character[2][2] = '_';

        return character;
    }

    vvc F()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[2][0] = '|';
        character[0][1] = character[0][2] = character[1][1] = '_';

        return character;
    }

    vvc G()
    {
        vvc character = getCharGrid(3, 4);

        character[0][1] = character[0][2] = character[1][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = '/';
        character[2][0] = '\\';
        character[2][3] = ')';

        return character;
    }

    vvc H()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[1][3] = '|';
        character[2][0] = character[2][3] = '|';
        character[1][1] = character[1][2] = '_';

        return character;
    }

    vvc I()
    {
        vvc character = getCharGrid(3, 1);

        character[1][0] = character[2][0] = '|';

        return character;
    }

    vvc J()
    {

        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[1][1] = ' ';
        character[2][0] = character[2][1] = '_';
        character[2][2] = ')';
        character[1][2] = '|';

        return character;
    }

    vvc K()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS

        character[1][0] = character[2][0] = '|';
        character[1][1] = '_';
        character[1][2] = '/';
        character[2][2] = '\\';
        character[2][1] = ' ';

        return character;
    }

    vvc L()
    {
        vvc character = getCharGrid(3, 3);

        /*// Enter the character grid in ROWS X COLS*/
        character[1][0] = character[2][0] = '|';
        character[2][1] = character[2][2] = '_';

        return character;
    }

    vvc M()
    {
        vvc character = getCharGrid(2, 4);

        character[0][0] = character[1][0] = character[0][3] = character[1][3] = '|';
        character[0][1] = '\\';
        character[0][2] = '/';

        return character;
    }

    vvc N()
    {
        vvc character = getCharGrid(3, 4);

        character[1][0] = '|';
        character[1][1] = '\\';
        character[1][2] = ' ';
        character[1][3] = '|';
        character[2][0] = '|';
        character[2][1] = ' ';
        character[2][2] = '\\';
        character[2][3] = '|';

        return character;
    }

    vvc O()
    {
        vvc character = getCharGrid(3, 4);
        character[0][1] = character[0][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = character[2][3] = '/';
        character[2][0] = character[1][3] = '\\';
        return character;
    }

    vvc P()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][0] = ' ', character[0][1] = character[0][2] = '_';
        character[1][0] = '|', character[1][1] = character[1][2] = '_', character[1][3] = ')';
        character[2][0] = '|', character[2][1] = character[2][2] = ' ';

        return character;
    }

    vvc Q()
    {
        vvc character = getCharGrid(3, 4);

        character[0][1] = character[0][2] = character[2][1] = '_';
        character[1][0] = character[2][3] = '/';
        character[2][0] = character[1][3] = character[2][2] = '\\';

        return character;
    }

    vvc R()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[1][1] = character[1][2] = '_';
        character[1][0] = character[2][0] = '|';
        character[2][2] = '\\';
        character[1][3] = ')';

        return character;
    }

    vvc S()
    {
        vvc character = getCharGrid(3, 3);
        character[1][1] = character[0][1] = character[0][2] = character[2][0] = character[2][1] = '_';
        character[1][0] = '(';
        character[2][2] = ')';

        return character;
    }

    vvc T()
    {
        vvc character = getCharGrid(3, 3);
        character[0][0] = character[0][1] = character[0][2] = '_';
        character[1][1] = character[2][1] = '|';

        return character;
    }

    vvc U()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[2][3] = '/';
        character[1][3] = character[2][0] = '\\';
        character[2][1] = character[2][2] = '_';

        return character;
    }

    vvc V()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[1][0] = character[2][1] = '\\';
        character[1][3] = character[2][2] = '/';

        return character;
    }

    vvc W()
    {
        vvc character = getCharGrid(3, 4);

        character[1][0] = character[1][3] = character[2][0] = character[2][3] = '|';
        character[1][1] = character[1][2] = ' ';
        character[2][1] = '/';
        character[2][2] = '\\';

        return character;
    }

    vvc X()
    {
        vvc character = getCharGrid(3, 3);
        character[0][0] = character[2][2] = '\\';
        character[0][2] = character[2][0] = '/';
        character[1][1] = '-';
        return character;
    }

    vvc Y()
    {

        vvc character = getCharGrid(3, 3);
        character[0][0] = '\\';
        character[0][2] = '/';
        character[1][1] = '-';
        character[2][1] = '|';

        return character;
    }

    vvc Z()
    {
        vvc character = getCharGrid(3, 3);

        character[0][0] = '_';
        character[0][1] = '_';
        character[0][2] = '_';
        character[1][2] = '/';
        character[1][1] = '_';
        character[1][0] = ' ';
        character[2][0] = '/';
        character[2][1] = '_';
        character[2][2] = '_';
        return character;
    }

    // Lowercase

    vvc a()
    {
        vvc character = getCharGrid(4, 4);

        // Enter the character grid in ROWS X COLS
        character[1][1] = '_';
        character[2][0] = '(';
        character[2][1] = '_';
        character[2][2] = '|';

        return character;
    }

    vvc b()
    {
        vvc character = getCharGrid(3, 3);

        character[1][0] = character[2][0] = '|';
        character[1][1] = character[2][1] = '_';
        character[2][2] = ')';

        return character;
    }

    vvc c()
    {
        vvc character = getCharGrid(3, 2);

        // Enter the character grid in ROWS X COLS
        character[1][0] = ' ';
        character[2][0] = '(';
        character[1][1] = character[2][1] = '_';
        return character;
    }

    vvc d()
    {
        vvc character = getCharGrid(4, 4);

        // Enter the character grid in ROWS X COLS
        character[1][2] = '|';
        character[1][1] = '_';
        character[2][0] = '(';
        character[2][2] = '|';
        character[2][1] = '_';

        return character;
    }

    vvc e()
    {
        vvc character = getCharGrid(ROWS, COLS);

        // Enter the character grid in ROWS X COLS
        character[1][1] = '_';
        character[2][0] = '(';
        character[2][1] = '-';
        return character;
    }

    vvc f()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[0][1] = '_';
        character[1][0] = '(';
        character[1][1] = '_';
        character[2][0] = '|';

        return character;
    }

    vvc g()
    {
        vvc character = getCharGrid(4, 3);

        // Enter the character grid in ROWS X COLS
        character[1][1] = character[2][1] = character[3][0] = '_';
        character[2][2] = ')';
        character[2][0] = '(';
        character[3][1]='/';
        return character;
    
    }

    vvc h()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[1][0] = '|';
        character[1][1] = '_';
        character[2][0] = '|';
        character[2][2] = ')';

        return character;
    }

    vvc i()
    {
        vvc character = getCharGrid(3, 1);

        character[1][0] = '.';
        character[2][0] = '|';

        return character;
    }

    vvc j()
    {
        vvc character = getCharGrid(4, 2);

        character[1][1] = '.';
        character[2][1] = '|';
        character[3][1] = '/';

        return character;
    }

    vvc k()
    {
        vvc character = getCharGrid(3, 2);

        character[1][0] = character[2][0] = '|';
        character[2][1] = '(';

        return character;
    }

    vvc l()
    {
        vvc character = getCharGrid(3, 1);

        // Enter the character grid in ROWS X COLS
        character[1][0] = '|';
        character[2][0] = '|';

        return character;
    }

    
        vvc m()
        {
            vvc character = getCharGrid(3,4);

            //Enter the character grid in ROWS X COLS
            character[1][1] = '_';
            character[2][0] = '|';
            character[2][2] = '|';
            character[1][2] = '_';
            character[2][3] = ')';            

            return character;
        }

    

    vvc n()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[1][1] = '_';
        character[2][0] = '|';
        character[2][2] = ')';

        return character;
    }

    vvc o()
    {
        vvc character = getCharGrid(3, 3);

        character[1][1] = character[2][1] = '_';
        character[2][0] = '(';
        character[2][2] = ')';

        return character;
    }

    vvc p()
    {
        vvc character = getCharGrid(3, 3);

        character[1][0] = character[2][0] = '|';
        character[0][1] = character[1][1] = '_';
        character[1][2] = ')';
        return character;
    }

    vvc q()
    {
        vvc character = getCharGrid(4, 4);
        character[1][2] = '_';
        character[2][1] = '(';
        character[2][2] = '_';
        character[2][3] = character[3][3] = '|';

        return character;
    }

    vvc r()
    {
        // Enter the character grid in ROWS X COLS
        vvc character = getCharGrid(2, 2);

        character[0][1] = '_';
        character[1][0] = '|';

        return character;
    }

    vvc s()
    {
        vvc character = getCharGrid(2, 2);

        character[0][1] = '_';
        character[1][0] = '_';
        character[1][1] = ')';

        return character;
    }

    vvc t()
    {
        vvc character = getCharGrid(3, 2);

        character[1][0] = character[2][0] = '|';
        character[1][1] = character[2][1] = '_';

        return character;
    }

    vvc u()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[2][0] = '|';
        character[2][1] = '_';
        character[2][2] = '|';

        return character;
    }

    vvc v()
    {
        vvc character = getCharGrid(3, 2);

        // Enter the character grid in ROWS X COLS

        character[2][0] = '\\';
        character[2][1] = '/';
        return character;
    }

    vvc w()
    {
        vvc character = getCharGrid(3, 3);

        // Enter the character grid in ROWS X COLS
        character[2][0] = '\\';
        character[2][1] = ')';
        character[2][2] = '/';

        return character;
    }

    vvc x()
    {
        vvc character = getCharGrid(3, 2);

        // Enter the character grid in ROWS X COLS
        character[2][0] = ')';
        character[2][1] = '(';

        return character;
    }

    vvc y()
    {
        vvc character = getCharGrid(3, 2);

        // Enter the character grid in ROWS X COLS

        character[1][0] = '\\';
        character[1][1] = '/';
        character[2][0] = '/';

        return character;
    }

    vvc z()
    {
        vvc character = getCharGrid(4, 4);

        character[1][1] = '_';
        character[2][1] = '/';
        character[2][2] = '_';
        character[3][3] = ' ';
        return character;
    }

    // Numbers

    vvc zero()
    {
        vvc character = getCharGrid(3, 4);
        character[0][0] = character[0][3] = character[1][1] = character[1][2] = ' ';
        character[0][1] = character[0][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = character[2][3] = character[1][3] = character[2][0] = '|';

        return character;
    }

    vvc one()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[1][2] = '/';
        character[1][3] = character[2][3] = '|';

        return character;
    }

    vvc two()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[2][2] = character[2][3] = character[1][2] = '_';
        character[1][3] = ')';
        character[2][1] = '/';

        return character;
    }

    vvc three()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[2][1] = character[2][2] = character[1][2] = '_';
        character[1][3] = character[2][3] = ')';
        // character[2][1] = '/';

        return character;
    }

    vvc four()
    {
        vvc character = getCharGrid(3, 4);
        character[0][0] = character[0][1] = character[0][2] = character[0][3] = ' ';
        character[1][1] = character[1][2] = '_';
        character[1][0] = character[1][3] = character[2][3] = '|';

        return character;
    }

    vvc five()
    {
        vvc character = getCharGrid(4, 4);

        // Enter the character grid in ROWS X COLS
        character[0][1] = '_';
        character[0][2] = '_';
        character[1][0] = '|';
        character[1][1] = '_';
        character[2][2] = ')';
        character[2][0] = character[2][1] = '_';

        return character;
    }

    vvc six()
    {
        vvc character = getCharGrid(3, 4);

        character[0][1] = character[0][2] = character[1][1] = character[1][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = '/';
        character[2][0] = '\\';
        character[2][3] = ')';

        return character;
    }

    vvc seven()
    {
        vvc character = getCharGrid(3, 4);

        // Enter the character grid in ROWS X COLS
        character[0][0] = '_';
        character[0][1] = '_';
        character[0][2] = '_';
        character[1][2] = '/';
        character[2][1] = '/';

        return character;
    }

    vvc eight()
    {
        vvc character = getCharGrid(3, 4);

        character[0][1] = character[0][2] = character[1][1] = character[1][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = character[2][0] = '(';
        character[1][3] = character[2][3] = ')';

        return character;
    }

    vvc nine()
    {
        vvc character = getCharGrid(3, 4);

        character[0][1] = character[0][2] = character[1][1] = character[1][2] = character[2][1] = character[2][2] = '_';
        character[1][0] = '(';
        character[2][3] = '/';
        character[1][3] = '\\';

        return character;
    }

    // for space
    vvc space()
    {
        vvc character = getCharGrid(1, 1);

        character[0][0] = ' ';

        return character;
    }
};
#endif
