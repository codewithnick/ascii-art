#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
 
    Ascii font = Ascii(drpepper);
    font.print("Ag");

    Ascii font = Ascii(banner);
    font.print("g");
 
    return 0;
}