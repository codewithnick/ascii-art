#include "Ascii.h"
#include "string"

using namespace ascii;

int main()
{
    Ascii a = Ascii(banner);
    a.print("ABCD");
    return 0;
}
