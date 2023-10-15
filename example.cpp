#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
    Ascii a = Ascii(starwar);
    a.print("5");
    a.print("F");
    return 0;
}