// fonts.h

#ifndef FONTS_H
#define FONTS_H
#define DEBUG false
#include <vector>
#include <string>
#include <iostream>

// Alias
using vvc = std::vector<std::vector<char>>;


class Fonts
{
    unsigned int def_rows;
    unsigned int def_cols;
    unsigned int char_rows;
    unsigned int char_cols;
    unsigned int curr_col;
    vvc letters;

protected:
    auto getCharGrid(unsigned int rows = 0, unsigned int cols = 0)
    {
        this->char_rows = rows ? rows : def_rows;
        this->char_cols = cols ? cols : def_cols;

        return vvc (char_rows, std::vector<char>(char_cols, ' '));
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

    void pushChar(std::vector<std::vector<char>> character)
    {
        
        while (letters.size() < char_rows)
        {
            letters.emplace_back(100, ' ');
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

    std::vector<std::vector<char> > getletters()
    {
        return letters;
    }

    void printvector()
    {
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j < letters[0].size(); j++)
            {
                std::cout << letters[i][j];
            }
            std::cout << std::endl;
        }
    }

    /********************************adding virtual functions********************************/
    // Virtual functions for space
    virtual vvc space()
    {
        std::cout << "space not overridden?" << std::endl;
        return vvc();
    }

    // Virtual functions for lowercase letters
    virtual vvc a()
    {
        std::cout << "a not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc b()
    {
        std::cout << "b not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc c()
    {
        std::cout << "c not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc d()
    {
        std::cout << "d not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc e()
    {
        std::cout << "e not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc f()
    {
        std::cout << "f not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc g()
    {
        std::cout << "g not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc h()
    {
        std::cout << "h not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc i()
    {
        std::cout << "i not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc j()
    {
        std::cout << "j not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc k()
    {
        std::cout << "k not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc l()
    {
        std::cout << "l not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc m()
    {
        std::cout << "m not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc n()
    {
        std::cout << "n not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc o()
    {
        std::cout << "o not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc p()
    {
        std::cout << "p not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc q()
    {
        std::cout << "q not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc r()
    {
        std::cout << "r not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc s()
    {
        std::cout << "s not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc t()
    {
        std::cout << "t not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc u()
    {
        std::cout << "u not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc v()
    {
        std::cout << "v not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc w()
    {
        std::cout << "w not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc x()
    {
        std::cout << "x not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc y()
    {
        std::cout << "y not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc z()
    {
        std::cout << "z not overridden?" << std::endl;
        return vvc();
    }

    // Virtual functions for uppercase letters
    virtual vvc A()
    {
        std::cout << "A not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc B()
    {
        std::cout << "B not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc C()
    {
        std::cout << "C not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc D()
    {
        std::cout << "D not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc E()
    {
        std::cout << "E not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc F()
    {
        std::cout << "F not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc G()
    {
        std::cout << "G not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc H()
    {
        std::cout << "H not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc I()
    {
        std::cout << "I not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc J()
    {
        std::cout << "J not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc K()
    {
        std::cout << "K not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc L()
    {
        std::cout << "L not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc M()
    {
        std::cout << "M not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc N()
    {
        std::cout << "N not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc O()
    {
        std::cout << "O not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc P()
    {
        std::cout << "P not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc Q()
    {
        std::cout << "Q not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc R()
    {
        std::cout << "R not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc S()
    {
        std::cout << "S not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc T()
    {
        std::cout << "T not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc U()
    {
        std::cout << "U not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc V()
    {
        std::cout << "V not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc W()
    {
        std::cout << "W not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc X()
    {
        std::cout << "X not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc Y()
    {
        std::cout << "Y not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc Z()
    {
        std::cout << "Z not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc zero()
    {
        std::cout << "Zero not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc one()
    {
        std::cout << "One not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc two()
    {
        std::cout << "Two not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc three()
    {
        std::cout << "Three not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc four()
    {
        std::cout << "Four not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc five()
    {
        std::cout << "Five not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc six()
    {
        std::cout << "Six not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc seven()
    {
        std::cout << "Seven not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc eight()
    {
        std::cout << "Eight not overridden?" << std::endl;
        return vvc();
    }
    virtual vvc nine()
    {
        std::cout << "Nine not overridden?" << std::endl;
        return vvc();
    }
    /********************************done adding virtual functions********************************/
};
#endif
