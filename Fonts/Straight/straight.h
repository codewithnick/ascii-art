#ifndef STRAIGHT_H
#define STRAIGHT_H
#include "../fonts.h"

class Straight : public Fonts
{
    static const int rows = 3;
    static const int cols = 4;

public:
    Straight() : Fonts(rows, cols) {}

    // Uppercase

    char **A()
    {
        char **character = getCharGrid();

        // Enter the character grid in ROWS X COLS
        character[1][1] = character[2][0] = '/';
        character[1][2] = character[2][3] = '\\';
        character[2][1] = character[2][2] = '-';

        return character;
    }

    
    char **B()
    {
        char **character = getCharGrid();

        //Enter the character grid in ROWS X COLS
        character[0][0] = character[0][3] = ' ';
        character[2][1] = character[2][2] = character[1][1] = character[1][2] = character[0][1] = character[0][2] = '_';
        character[2][0] = character[1][0] = '|';
        character[2][3] = character[1][3] = ')';
        
        return character;
    }
    

    /*
        char **C()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **D()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    char **E()
    {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[0][1] = character[0][2] = '_';
            character[1][0] = character[2][0] = '|';
            character[1][1] = character[2][1] = character[2][2] = '_';

            return character;
        }

    
        char **F()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][0]=character[2][0]='|';
            character[0][1]=character[0][2]=character[1][1]='_';
            

            return character;
        }
    

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
            character[1][0]=character[1][3]='|';
            character[2][0]=character[2][3]='|';
            character[1][1]=character[1][2]='_';

            return character;
        }


    char **I()
        {
            char **character = getCharGrid();

            character[1][0] = character[2][0] = '|';

            return character;
        }

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

    char **L()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][0] = character[2][0] = '|';
            character[2][1] = character[2][2] = '_';

            return character;
        }

    /*
        char **M()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

char **N()
        {
            char **character = getCharGrid();

            character[1][0] ='|';
            character[1][1] ='\\';
            character[1][2] =' ';
            character[1][3] ='|';
            character[2][0] ='|';
            character[2][1] =' ';
            character[2][2] ='\\';
            character[2][3] ='|';

         
            return character;
        }

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

    
        char **R()
    {
        char **character = getCharGrid();

        //Enter the character grid in ROWS X COLS
        character[0][1] = character[0][2] = character[1][1] = character[1][2] ='_';
        character[1][0] = character[2][0] = '|';
        character[2][2] = '\\';
        character[1][3] = ')';
        
        return character;
    }
    

           char **S()
    {
        char **character = getCharGrid();
        character[1][1] = character[0][1] =character[0][2] =character[2][0] = character[2][1] =   '_';
        character[1][0] = '(';
        character[2][2] = ')';

        return character;
    }
    

    char **T()
    {
        char **character = getCharGrid();
        character[0][0] = character[0][1] =character[0][2] =  '_';
        character[1][1] = character[2][1] = '|';

        return character;
    }

    
        char **U()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
             character[1][0] = character[2][3] = '/';
            character[1][3] = character[2][0] = '\\';
            character[2][1] = character[2][2] = '_';

            return character;
        }
    

        char **V()
        {
            char **character = getCharGrid();

        //Enter the character grid in ROWS X COLS
        character[1][0] = character[2][1] ='\\';
        character[1][3] = character[2][2] = '/';
        
        return character;
        }

    
        char **W()
        {
            char **character = getCharGrid();

             character[1][0] = character[1][3] = character[2][0] = character[2][3] = '|';
            character[1][1] = character[1][2] = ' ';
            character[2][1] = '/';
            character[2][2] = '\\';

            return character;
        }
    

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

char **Z()
        {
            char **character = getCharGrid();

            character[0][0] ='_';
            character[0][1] ='_';
            character[0][2] ='_';
            character[1][2] ='/';
            character[1][1] ='_';
            character[1][0] =' ';
            character[2][0] ='/';
            character[2][1] ='_';
            character[2][2] ='_';
             return character;
        }

    // Lowercase

    /*
        char **a()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    
        char **b()
        {
            char **character = getCharGrid();

            character[1][0]=character[2][0]='|';
            character[1][1]=character[2][1]='_';
            character[2][2]=')';

            return character;
        }
    

    
    char **c()
    {
        char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
        character[1][0] = ' ';
        character[2][0] = '(';
        character[1][1] = character[2][1] = '_';
        return character;
    }
    
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

    
        char **h()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][0]='|';
            character[1][1]='_';
            character[2][0]='|';
            character[2][2]=')';

            return character;
        }
    

        char **i()
        {
            char **character = getCharGrid();

            character[1][0]='.';
            character[2][0]='|';

            return character;
        }

    /*
        char **j()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    
        char **k()
        {
            char **character = getCharGrid();

            character[1][0]=character[2][0]='|';
            character[2][1]='(';

            return character;
        }

    

    char **l()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][0]='|';
            character[2][0]='|';

            return character;
        }

    /*
        char **m()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

        char **n()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][1]='_';
            character[2][0]='|';
            character[2][2]=')';

            return character;
        }


    /*
        char **o()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    
        char **p()
        {
            char **character = getCharGrid();

            character[1][0]=character[2][0]='|';
            character[0][1]=character[1][1]='_';
            character[1][2]=')';
            return character;
        }

    

    /*
        char **q()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

        char **r()
        {
            //Enter the character grid in ROWS X COLS
            char **character = getCharGrid();

            character[0][1] = '_';
            character[1][0] = '|';

            return character;
        }

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

        char **u()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[2][0] = '|';
            character[2][1] = '_';
            character[2][2] = '|';

            return character;
        }



    char **v()
    {
        char **character = getCharGrid();

        //Enter the character grid in ROWS X COLS

        character[2][0] = '\\';
        character[2][1] = '/';
        return character;
    }



        char **w()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[2][0]= '\\';
            character[2][1]= ')';
            character[2][2]= '/';


            return character;
        }


        char **x()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[2][0]=')';
            character[2][1]='(';

            return character;
        }

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

    char **one()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[1][2] = '/';
            character[1][3] = character[2][3] = '|';

            return character;
        }

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
