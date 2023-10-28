#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
    Ascii font = Ascii(straight);
    font.print("23");
    return 0;
}