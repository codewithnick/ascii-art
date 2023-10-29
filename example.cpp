#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
    Ascii font = Ascii(banner);
    font.print("g");
    return 0;
}