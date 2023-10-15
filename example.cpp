#include "Ascii.h"
#include "string"

using namespace ascii;  

int main()
{
    Ascii a = Ascii(carlos);
    Ascii b = Ascii(banner);
    a.print("A0ZXSQ");
    b.print("BbCc");
    return 0;
}