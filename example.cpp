#include "Ascii.h"
#include "string"
#include<iostream>
using namespace ascii;

int main()
{
    Ascii a = Ascii(banner);
 
    a.print("A");

    a.print("B");
    return 0;
}