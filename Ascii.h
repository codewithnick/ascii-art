// Ascii.h

#ifndef ASCII_H
#define ASCII_H

#include <string>
#include "./Fonts/fonts.h"
#include "./Fonts/SevenStar/sevenstar.h"

class Ascii
{
public:
    std::string fontName;
    Fonts *font;
    Ascii(const std::string &fontName)
    {
        // std::cout<<"initialised ascii";
        if (fontName == "sevenstar")
        {
            // std::cout<<"initialised sevenstar";
            this->font = new SevenStar();
        }
        else
        {
            exit(500);
        }
    }
    void print(const std::string &text)
    {

        font->allocatespace(text);
        // std::cout<<"printing";
        for (int i = 0; i < text.size(); i++)
        {
            char c = text[i];
            if (c >= 'a' && c <= 'z')
                c -= 32;
            if (c == 'A')
                font->A(i);
            else if (c == 'B')
                font->B(i);
            else if (c == 'C')
                font->C(i);
            else if (c == 'D')
                font->D(i);
            else if (c == 'E')
                font->E(i);
            else if (c == 'F')
                font->F(i);
            else if (c == 'G')
                font->G(i);
            else if (c == 'H')
                font->H(i);
            else if (c == 'I')
                font->I(i);
            else if (c == 'J')
                font->J(i);
            else if (c == 'K')
                font->K(i);
            else if (c == 'L')
                font->L(i);
            else if (c == 'M')
                font->M(i);
            else if (c == 'N')
                font->N(i);
            else if (c == 'O')
                font->O(i);
            else if (c == 'P')
                font->P(i);
            else if (c == 'Q')
                font->Q(i);
            else if (c == 'R')
                font->R(i);
            else if (c == 'S')
                font->S(i);
            else if (c == 'T')
                font->T(i);
            else if (c == 'U')
                font->U(i);
            else if (c == 'V')
                font->V(i);
            else if (c == 'W')
                font->W(i);
            else if (c == 'X')
                font->X(i);
            else if (c == 'Y')
                font->Y(i);
            else if (c == 'Z')
                font->Z(i);
            else if (c == '0')
                font->zero(i);
            else if (c == '1')
                font->one(i);
            else if (c == '2')
                font->two(i);
            else if (c == '3')
                font->three(i);
            else if (c == '4')
                font->four(i);
            else if (c == '5')
                font->five(i);
            else if (c == '6')
                font->six(i);
            else if (c == '7')
                font->seven(i);
            else if (c == '8')
                font->eight(i);
            else if (c == '9')
                font->nine(i);
        }
        font->printvector();
        // font->destroyspace();
    }
};

#endif
