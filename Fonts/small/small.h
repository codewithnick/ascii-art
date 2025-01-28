#ifndef SMALL_H
#define SMALL_H
#include <string.h>
#include "../fonts.h"

class Small : public Fonts
{
    static const int rows = 5;
    static const int cols = 10;

public:
    Small() : Fonts(rows, cols) {}

    // Uppercase

    vs A()
    {
        vs character = getCharGrid(5, 7);
        character[0] = "   _   ";
        character[1] = "  /_\\  ";
        character[2] = " / _ \\ ";
        character[3] = "/_/ \\_\\";
        character[4] = "       ";
        return character;
    }

 
        vs B()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___  ";
            character[1] = "| _ ) ";
            character[2] = "| _ \\";
            character[3] = "|___/";
            character[4] = "     ";

            return character;
        }


    
        vs C()
        {
            vs character = getCharGrid(5, 6);

            character[0] = "  ___ ";
            character[1] = " / __|";
            character[2] = "| (__ ";
            character[3] = " \\___|";
            character[4] = "      ";

            return character;
        }
    

    
        vs D()
        {
            vs character = getCharGrid(5,6);

            character[0] = " ___  ";
            character[1] = "|   \\ ";
            character[2] = "| |) |";
            character[3] = "|___/ ";
            character[4] = "      ";

            return character;
        }
    

    
        vs E()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "| __|";
            character[2] = "| _| ";
            character[3] = "|___|";
            character[4] = "     ";

            return character;
        }
    

    
        vs F()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "| __|";
            character[2] = "| _| ";
            character[3] = "|_|  ";
            character[4] = "     ";

            return character;
        }
    

    
        vs G()
        {
            vs character = getCharGrid(5, 6);

            character[0] = "  ___ ";
            character[1] = " / __|";
            character[2] = "| (_ |";
            character[3] = " \\___|";
            character[4] = "      ";

            return character;
        }
    

    
        vs H()
        {
            vs character = getCharGrid(5, 6);

            character[0] = " _  _ ";
            character[1] = "| || |";
            character[2] = "| __ |";
            character[3] = "|_||_|";
            character[4] = "      ";

            return character;
        }
    

    
        vs I()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "|_ _|";
            character[2] = " | | ";
            character[3] = "|___|";
            character[4] = "     ";

            return character;
        }
    

    
        vs J()
        {
            vs character = getCharGrid(5, 6);

            character[0] = "    _ ";
            character[1] = " _ | |";
            character[2] = "| || |";
            character[3] = " \\__/ ";
            character[4] = "      ";

            return character;
        }
    

    
        vs K()
        {
            vs character = getCharGrid(5, 6);

            character[0] = " _  __";
            character[1] = "| |/ /";
            character[2] = "| ' < ";
            character[3] = "|_|\\_\\";
            character[4] = "      ";

            return character;
        }
    

    
        vs L()
        {
            vs character = getCharGrid(5, 6);

            character[0] = " _    ";
            character[1] = "| |   ";
            character[2] = "| |__ ";
            character[3] = "|____|";
            character[4] = "      ";

            return character;
        }
    

    
        vs M()
        {
            vs character = getCharGrid(5, 8);

            character[0] = " __  __ ";
            character[1] = "|  \\/  |";
            character[2] = "| |\\/| |";
            character[3] = "|_|  |_|";
            character[4] = "       ";

            return character;
        }
    

    
        vs N()
        {
            vs character = getCharGrid(5, 6);

            character[0] = " _  _ ";
            character[1] = "| \\| |";
            character[2] = "| .` |";
            character[3] = "|_|\\_|";
            character[4] = "      ";

            return character;
        }
    

    
        vs O()
        {
            vs character = getCharGrid(5, 7);

            character[0] = "  ___  ";
            character[1] = " / _ \\ ";
            character[2] = "| (_) |";
            character[3] = " \\___/ ";
            character[4] = "       ";

            return character;
        }
    

    
        vs P()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "| _ \\";
            character[2] = "|  _/";
            character[3] = "|_|  ";
            character[4] = "     ";

            return character;
        }
    

    
        vs Q()
        {
            vs character = getCharGrid(5, 7);

            character[0] = "  ___  ";
            character[1] = " / _ \\ ";
            character[2] = "| (_) |";
            character[3] = " \\__\\_\\";
            character[4] = "       ";

            return character;
        }
    

    
        vs R()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "| _ \\";
            character[2] = "|   /";
            character[3] = "|_|_\\";
            character[4] = "     ";

            return character;
        }
    

    
        vs S()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ___ ";
            character[1] = "/ __|";
            character[2] = "\\__ \\";
            character[3] = "|___/";
            character[4] = "     ";

            return character;
        }
    

    
        vs T()
        {
            vs character = getCharGrid(5, 7);

            character[0] = " _____ ";
            character[1] = "|_   _|";
            character[2] = "  | |  ";
            character[3] = "  |_|  ";
            character[4] = "       ";

            return character;
        }
    

    
        vs U()
        {
            vs character = getCharGrid(5, 7);

            character[0] = " _   _ ";
            character[1] = "| | | |";
            character[2] = "| |_| |";
            character[3] = " \\___/ ";
            character[4] = "       ";

            return character;
        }
    

    
        vs V()
        {
            vs character = getCharGrid(5, 7);

            character[0] = "__   __";
            character[1] = "\\ \\ / /";
            character[2] = " \\ V / ";
            character[3] = "  \\_/  ";
            character[4] = "       ";

            return character;
        }
    

    
        vs W()
        {
            vs character = getCharGrid(5, 10);

            character[0] = "__      __";
            character[1] = "\\ \\    / /";
            character[2] = " \\ \\/\\/ / ";
            character[3] = "  \\_/\\_/  ";
            character[4] = "          ";

            return character;
        }
    

    
        vs X()
        {
            vs character = getCharGrid(5, 6);

            character[0] = "__  __";
            character[1] = "\\ \\/ /";
            character[2] = " >  < ";
            character[3] = "/_/\\_\\";
            character[4] = "      ";

            return character;
        }
    

    
        vs Y()
        {
            vs character = getCharGrid(5, 7);

            character[0] = "__   __";
            character[1] = "\\ \\ / /";
            character[2] = " \\ V / ";
            character[3] = "  |_|  ";
            character[4] = "       ";

            return character;
        }
    

    
        vs Z()
        {
            vs character = getCharGrid(5, 5);

            character[0] = " ____";
            character[1] = "|_  /";
            character[2] = " / / ";
            character[3] = "/___|";
            character[4] = "     ";

            return character;
        }
    

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

    // Space

    vs space()
    {
        vs character = getCharGrid(1, 2);

        character[0] = "  ";

        return character;
    }
};
#endif
