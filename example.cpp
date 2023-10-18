#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
    Ascii a = Ascii(starwar);
    a.print("Q");
    return 0;
}