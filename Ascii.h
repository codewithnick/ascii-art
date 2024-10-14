// Ascii.h

#ifndef ASCII_H
#define ASCII_H

#include <string>
#include <memory>
#include "./Fonts/fonts.h"
#include "./Fonts/SevenStar/sevenstar.h"
#include "./Fonts/Boomer/boomer.h"
#include "./Fonts/Straight/straight.h"
#include "./Fonts/starwar/starwar.h"
#include "./Fonts/carlos/carlos.h"
#include "./Fonts/banner/banner.h"
#include "./Fonts/block/block.h"
#include "./Fonts/amongus/amongus.h"
#include "./Fonts/drpepper/drpepper.h"
#include "./Fonts/small/small.h"
#include "./Fonts/3d-diagonal/3d-diagonal.h"

namespace ascii
{
    enum FontName
    {
        sevenstar,
        boomer,
        straight,
        starwar,
        carlos,
        banner,
        block,
        amongus,
        drpepper,
        small,
        threeD_diagonal
    };

    class Ascii
    {

    public:
        std::unique_ptr<Fonts> font;
        Ascii(const FontName &fontName)
        {
            if (fontName == FontName::sevenstar)
            {
                this->font.reset(new SevenStar());
            }
            else if (fontName == FontName::boomer)
            {
                this->font.reset(new Boomer());
            }
            else if (fontName == FontName::straight)
            {
                this->font.reset(new Straight());
            }
            else if (fontName == FontName::starwar)
            {
                this->font.reset(new Starwar());
            }
            else if (fontName == FontName::carlos)
            {
                this->font.reset(new Carlos());
            }
            else if (fontName == FontName::banner)
            {
                this->font.reset(new Banner());
            }
            else if (fontName == FontName::block)
            {
                this->font.reset(new Block());
            }
            else if (fontName == FontName::amongus)
            {
                this->font.reset(new Amongus());
            }
            else if (fontName == FontName::drpepper)
            {
                this->font.reset(new Drpepper());
            }
            else if (fontName == FontName::small)
            {
                this->font.reset(new Small());
            }
            else if (fontName == FontName::threeD_diagonal)
            {
                this->font.reset(new ThreeD_Diagonal());
            }
            else
            {
                exit(500);
            }
        }
        

        void reset()
        {
            font->resetMatrix();
        }

        void print(const std::string &text)
        {
            vs character;

            for (size_t i = 0; i < text.size(); i++)
            {
                char c = text[i];

                // Uppercase alphabets
                if (c == 'A')
                    character = font->A();
                else if (c == 'B')
                    character = font->B();
                else if (c == 'C')
                    character = font->C();
                else if (c == 'D')
                    character = font->D();
                else if (c == 'E')
                    character = font->E();
                else if (c == 'F')
                    character = font->F();
                else if (c == 'G')
                    character = font->G();
                else if (c == 'H')
                    character = font->H();
                else if (c == 'I')
                    character = font->I();
                else if (c == 'J')
                    character = font->J();
                else if (c == 'K')
                    character = font->K();
                else if (c == 'L')
                    character = font->L();
                else if (c == 'M')
                    character = font->M();
                else if (c == 'N')
                    character = font->N();
                else if (c == 'O')
                    character = font->O();
                else if (c == 'P')
                    character = font->P();
                else if (c == 'Q')
                    character = font->Q();
                else if (c == 'R')
                    character = font->R();
                else if (c == 'S')
                    character = font->S();
                else if (c == 'T')
                    character = font->T();
                else if (c == 'U')
                    character = font->U();
                else if (c == 'V')
                    character = font->V();
                else if (c == 'W')
                    character = font->W();
                else if (c == 'X')
                    character = font->X();
                else if (c == 'Y')
                    character = font->Y();
                else if (c == 'Z')
                    character = font->Z();

                // Lowercase alphabets
                else if (c == 'a')
                    character = font->a();
                else if (c == 'b')
                    character = font->b();
                else if (c == 'c')
                    character = font->c();
                else if (c == 'd')
                    character = font->d();
                else if (c == 'e')
                    character = font->e();
                else if (c == 'f')
                    character = font->f();
                else if (c == 'g')
                    character = font->g();
                else if (c == 'h')
                    character = font->h();
                else if (c == 'i')
                    character = font->i();
                else if (c == 'j')
                    character = font->j();
                else if (c == 'k')
                    character = font->k();
                else if (c == 'l')
                    character = font->l();
                else if (c == 'm')
                    character = font->m();
                else if (c == 'n')
                    character = font->n();
                else if (c == 'o')
                    character = font->o();
                else if (c == 'p')
                    character = font->p();
                else if (c == 'q')
                    character = font->q();
                else if (c == 'r')
                    character = font->r();
                else if (c == 's')
                    character = font->s();
                else if (c == 't')
                    character = font->t();
                else if (c == 'u')
                    character = font->u();
                else if (c == 'v')
                    character = font->v();
                else if (c == 'w')
                    character = font->w();
                else if (c == 'x')
                    character = font->x();
                else if (c == 'y')
                    character = font->y();
                else if (c == 'z')
                    character = font->z();

                // Numbers
                else if (c == '0')
                    character = font->zero();
                else if (c == '1')
                    character = font->one();
                else if (c == '2')
                    character = font->two();
                else if (c == '3')
                    character = font->three();
                else if (c == '4')
                    character = font->four();
                else if (c == '5')
                    character = font->five();
                else if (c == '6')
                    character = font->six();
                else if (c == '7')
                    character = font->seven();
                else if (c == '8')
                    character = font->eight();
                else if (c == '9')
                    character = font->nine();

                // for space
                else if (c == ' ')
                    character = font->space();

                font->pushChar(character);
            }
            font->printvector();
            font->resetMatrix();
        }
    };
} // namespace ascii

#endif
