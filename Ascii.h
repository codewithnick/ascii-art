// Ascii.h

#ifndef ASCII_H
#define ASCII_H

#include <string>
#include "./Fonts/fonts.h"
#include "./Fonts/SevenStar/sevenstar.h"

class Ascii {
public:

    std::string fontName;
    Fonts *font;
    Ascii(const std::string& fontName){
        //std::cout<<"initialised ascii";
        if (fontName== "sevenstar")
        {
            //std::cout<<"initialised sevenstar";
            this->font = new SevenStar();
            
        }
        else{
            exit(500);
        }

    }
    void print(const std::string& text){
        
        font->allocatespace(text);
        //std::cout<<"printing";
        for(int i=0;i<text.size();i++){
            char c=text[i];
            
            if(c=='C')
                font->C(i);
            else if(c=='D')
                font->D(i);
        }
        font->printvector();
        //font->destroyspace();        
    }


};

#endif
