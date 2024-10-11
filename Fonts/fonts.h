// fonts.h

#ifndef FONTS_H
#define FONTS_H
#define DEBUG false
#include <vector>
#include <string>
#include <iostream>

// Alias
using vs = std::vector<std::string>;


class Fonts
{
    unsigned int def_rows;
    unsigned int def_cols;
    unsigned int char_rows;
    unsigned int char_cols;
    unsigned int curr_col;
    vs letters;

protected:
    auto getCharGrid(unsigned int rows = 0, unsigned int cols = 0)
    {
        this->char_rows = rows ? rows : def_rows;
        this->char_cols = cols ? cols : def_cols;

        return vs (char_rows, std::string(char_cols, ' '));
    }

public:
    Fonts(int def_rows, int def_cols)
    {
        this->def_rows = def_rows;
        this->def_cols = def_cols;

        letters.reserve(def_rows);
        for (int i = 0; i < def_rows; i++)
        {
            letters.emplace_back(100, ' '); // Create rows with 100 spaces each
        }
        curr_col = 0;
    }

    void pushChar(vs character)
    {
        if(character.empty()) return;
        
        // Add empty rows, all with the same lenght 
        while(letters.size() < char_rows)
            letters.emplace_back(std::string(letters[0].size(), ' '));

        // Space needed to add the new character (if it is negative there is no need)
        int needed = 2 + curr_col + character[0].size() - letters[0].size();

        if(needed > 0){
            for(auto& row : letters)
                row.resize(needed + row.size());
        }

        for (unsigned int i = 0; i < char_rows; i++)
        {
            for (unsigned int j = 0; j < char_cols; j++)
            {
                letters[i][j + curr_col] = character[i][j];
            }
        }
        curr_col += (char_cols + 2);
    }

    vs getletters()
    {
        return letters;
    }

    void printvector()
    {
        for (unsigned int i = 0; i < letters.size(); i++)
        {
          std::cout << letters[i] << std::endl;
        }
    }

    void resetMatrix()
    {
        letters.clear();
        letters.reserve(def_rows);
        for(unsigned int i = 0; i < def_rows; i++) {
            letters.emplace_back(100, ' ');
        }
        curr_col = 0;
    }

    /********************************adding virtual functions********************************/
    // Virtual functions for space
    virtual vs space()
    {
        std::cout << "space not overridden?" << std::endl;
        return vs();
    }

    // Virtual functions for lowercase letters
    virtual vs a()
    {
        std::cout << "a not overridden?" << std::endl;
        return vs();
    }
    virtual vs b()
    {
        std::cout << "b not overridden?" << std::endl;
        return vs();
    }
    virtual vs c()
    {
        std::cout << "c not overridden?" << std::endl;
        return vs();
    }
    virtual vs d()
    {
        std::cout << "d not overridden?" << std::endl;
        return vs();
    }
    virtual vs e()
    {
        std::cout << "e not overridden?" << std::endl;
        return vs();
    }
    virtual vs f()
    {
        std::cout << "f not overridden?" << std::endl;
        return vs();
    }
    virtual vs g()
    {
        std::cout << "g not overridden?" << std::endl;
        return vs();
    }
    virtual vs h()
    {
        std::cout << "h not overridden?" << std::endl;
        return vs();
    }
    virtual vs i()
    {
        std::cout << "i not overridden?" << std::endl;
        return vs();
    }
    virtual vs j()
    {
        std::cout << "j not overridden?" << std::endl;
        return vs();
    }
    virtual vs k()
    {
        std::cout << "k not overridden?" << std::endl;
        return vs();
    }
    virtual vs l()
    {
        std::cout << "l not overridden?" << std::endl;
        return vs();
    }
    virtual vs m()
    {
        std::cout << "m not overridden?" << std::endl;
        return vs();
    }
    virtual vs n()
    {
        std::cout << "n not overridden?" << std::endl;
        return vs();
    }
    virtual vs o()
    {
        std::cout << "o not overridden?" << std::endl;
        return vs();
    }
    virtual vs p()
    {
        std::cout << "p not overridden?" << std::endl;
        return vs();
    }
    virtual vs q()
    {
        std::cout << "q not overridden?" << std::endl;
        return vs();
    }
    virtual vs r()
    {
        std::cout << "r not overridden?" << std::endl;
        return vs();
    }
    virtual vs s()
    {
        std::cout << "s not overridden?" << std::endl;
        return vs();
    }
    virtual vs t()
    {
        std::cout << "t not overridden?" << std::endl;
        return vs();
    }
    virtual vs u()
    {
        std::cout << "u not overridden?" << std::endl;
        return vs();
    }
    virtual vs v()
    {
        std::cout << "v not overridden?" << std::endl;
        return vs();
    }
    virtual vs w()
    {
        std::cout << "w not overridden?" << std::endl;
        return vs();
    }
    virtual vs x()
    {
        std::cout << "x not overridden?" << std::endl;
        return vs();
    }
    virtual vs y()
    {
        std::cout << "y not overridden?" << std::endl;
        return vs();
    }
    virtual vs z()
    {
        std::cout << "z not overridden?" << std::endl;
        return vs();
    }

    // Virtual functions for uppercase letters
    virtual vs A()
    {
        std::cout << "A not overridden?" << std::endl;
        return vs();
    }
    virtual vs B()
    {
        std::cout << "B not overridden?" << std::endl;
        return vs();
    }
    virtual vs C()
    {
        std::cout << "C not overridden?" << std::endl;
        return vs();
    }
    virtual vs D()
    {
        std::cout << "D not overridden?" << std::endl;
        return vs();
    }
    virtual vs E()
    {
        std::cout << "E not overridden?" << std::endl;
        return vs();
    }
    virtual vs F()
    {
        std::cout << "F not overridden?" << std::endl;
        return vs();
    }
    virtual vs G()
    {
        std::cout << "G not overridden?" << std::endl;
        return vs();
    }
    virtual vs H()
    {
        std::cout << "H not overridden?" << std::endl;
        return vs();
    }
    virtual vs I()
    {
        std::cout << "I not overridden?" << std::endl;
        return vs();
    }
    virtual vs J()
    {
        std::cout << "J not overridden?" << std::endl;
        return vs();
    }
    virtual vs K()
    {
        std::cout << "K not overridden?" << std::endl;
        return vs();
    }
    virtual vs L()
    {
        std::cout << "L not overridden?" << std::endl;
        return vs();
    }
    virtual vs M()
    {
        std::cout << "M not overridden?" << std::endl;
        return vs();
    }
    virtual vs N()
    {
        std::cout << "N not overridden?" << std::endl;
        return vs();
    }
    virtual vs O()
    {
        std::cout << "O not overridden?" << std::endl;
        return vs();
    }
    virtual vs P()
    {
        std::cout << "P not overridden?" << std::endl;
        return vs();
    }
    virtual vs Q()
    {
        std::cout << "Q not overridden?" << std::endl;
        return vs();
    }
    virtual vs R()
    {
        std::cout << "R not overridden?" << std::endl;
        return vs();
    }
    virtual vs S()
    {
        std::cout << "S not overridden?" << std::endl;
        return vs();
    }
    virtual vs T()
    {
        std::cout << "T not overridden?" << std::endl;
        return vs();
    }
    virtual vs U()
    {
        std::cout << "U not overridden?" << std::endl;
        return vs();
    }
    virtual vs V()
    {
        std::cout << "V not overridden?" << std::endl;
        return vs();
    }
    virtual vs W()
    {
        std::cout << "W not overridden?" << std::endl;
        return vs();
    }
    virtual vs X()
    {
        std::cout << "X not overridden?" << std::endl;
        return vs();
    }
    virtual vs Y()
    {
        std::cout << "Y not overridden?" << std::endl;
        return vs();
    }
    virtual vs Z()
    {
        std::cout << "Z not overridden?" << std::endl;
        return vs();
    }
    virtual vs zero()
    {
        std::cout << "Zero not overridden?" << std::endl;
        return vs();
    }
    virtual vs one()
    {
        std::cout << "One not overridden?" << std::endl;
        return vs();
    }
    virtual vs two()
    {
        std::cout << "Two not overridden?" << std::endl;
        return vs();
    }
    virtual vs three()
    {
        std::cout << "Three not overridden?" << std::endl;
        return vs();
    }
    virtual vs four()
    {
        std::cout << "Four not overridden?" << std::endl;
        return vs();
    }
    virtual vs five()
    {
        std::cout << "Five not overridden?" << std::endl;
        return vs();
    }
    virtual vs six()
    {
        std::cout << "Six not overridden?" << std::endl;
        return vs();
    }
    virtual vs seven()
    {
        std::cout << "Seven not overridden?" << std::endl;
        return vs();
    }
    virtual vs eight()
    {
        std::cout << "Eight not overridden?" << std::endl;
        return vs();
    }
    virtual vs nine()
    {
        std::cout << "Nine not overridden?" << std::endl;
        return vs();
    }
    /********************************done adding virtual functions********************************/
};
#endif
