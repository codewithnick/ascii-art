#ifndef THREED_DIAGONAL_H
#define THREED_DIAGONAL_H
#include <string.h>
#include "../fonts.h"

class ThreeD_Diagonal : public Fonts
{
    static const int rows = 12;
    static const int cols = 20;

public:
    ThreeD_Diagonal() : Fonts(rows, cols) {}

    // Uppercase

    vs A()
    {
        vs character = getCharGrid(12, 17);

        character[0] = "    ,---,          ";
        character[1] = "   '  .' \\        ";  
        character[2] = "  /  ;    '.       "; 
        character[3] = " :  :       \\     "; 
        character[4] = " :  |   /\\   \\   "; 
        character[5] = " |  :  ' ;.   :    "; 
        character[6] = " |  |  ;/  \\   \\ ";
        character[7] = " '  :  | \\  \\ ,' ";
        character[8] = " |  |  '  '--'     ";
        character[9] = " |  :  :           "; 
        character[10]= " |  | ,'           "; 
        character[11]= " `--''             ";   

        return character;
    }


    /*
        vs B()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs C()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs D()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    
        vs E()
        {
            vs character = getCharGrid(13, 13);

            character[0] = "     ,---,.   "; 
            character[1] = "   ,'  .' |   "; 
            character[2] = " ,---.'   |   "; 
            character[3] = " |   |   .'   ";
            character[4] = " :   :  |-,   ";
            character[5] = " :   |  ;/|   ";
            character[6] = " |   :   .'   ";
            character[7] = " |   |  |-,   ";
            character[8] = " '   :  ;/|   "; 
            character[9] = " |   |    \\  ";
            character[10]= " |   :   .'   ";
            character[11]= " |   | ,'     ";
            character[12]= " `----'       ";

            return character;
        }
    

    /*
        vs F()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs G()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs H()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs I()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs J()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs K()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs L()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs M()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs N()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs O()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs P()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    vs Q()
    {
        vs character = getCharGrid(13,18);

        character[0] = "     ,----..      ";
        character[1] = "    /   /   \\     ";
        character[2] = "   /   .     :    ";
        character[3] = "  .   /   ;.  \\   ";
        character[4] = " .   ;   /  ` ;   ";
        character[5] = " ;   |  ; \\ ; |   ";
        character[6] = " |   :  | ; | '   ";
        character[7] = " .   |  ' ' ' :   ";
        character[8] = " '   ;  \\; /  |   ";
        character[9] = "  \\   \\  ',  . \\  ";
        character[10]= "   ;   :      ; | ";
        character[11]= "    \\   \\ .'`--\"  ";
        character[12]= "     `---`        ";

        return character;
    }

    /*
        vs R()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs S()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs T()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs U()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs V()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs W()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs X()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs Y()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs Z()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    // Lowercase

    /*
        vs a()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs b()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs c()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs d()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs e()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs f()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs g()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs h()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        vs i()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs j()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs k()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs l()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs m()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs n()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs o()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs p()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs q()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs r()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs s()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs t()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs u()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs v()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs w()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs x()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs y()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs z()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    // Numbers

    /*
        vs zero()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs one()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs two()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs three()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs four()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs five()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs six()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs seven()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs eight()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        vs nine()
        {
            vs character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */
};
#endif
