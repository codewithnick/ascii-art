#ifndef FONTNAME_H
#define FONTNAME_H
#define ROWS rows
#define COLS columns
#include "../fonts.h"

class Fontname : public Fonts
{
public:
    Fontname() : Fonts(ROWS, COLS) {}

    // Uppercase

    /*
        char **A()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    // Lowercase

    // Digits
};
#endif