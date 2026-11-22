// Tests for the special-character glyphs: @ # $ & % ! ? * + = < >
// Build and run from the repo root:
//   g++ -std=c++17 tests/test_special_chars.cpp -o /tmp/test_special_chars && /tmp/test_special_chars
#include <iostream>
#include <sstream>
#include <string>

#include "../Ascii.h"
#include "../Fonts/SevenStar/sevenstar.h"

static int failures = 0;

static void check(bool condition, const std::string &message)
{
    if (condition)
    {
        std::cout << "ok   - " << message << std::endl;
    }
    else
    {
        std::cout << "FAIL - " << message << std::endl;
        failures++;
    }
}

// Map a special character to its SevenStar glyph method.
static vs glyphFor(SevenStar &font, char c)
{
    switch (c)
    {
    case '@': return font.at();
    case '#': return font.hash();
    case '$': return font.dollar();
    case '&': return font.ampersand();
    case '%': return font.percent();
    case '!': return font.exclamation();
    case '?': return font.question();
    case '*': return font.asterisk();
    case '+': return font.plus();
    case '=': return font.equal();
    case '<': return font.lessthan();
    case '>': return font.greaterthan();
    default: return vs();
    }
}

static int countFilled(const vs &grid)
{
    int filled = 0;
    for (const auto &row : grid)
        for (char cell : row)
            if (cell == '%')
                filled++;
    return filled;
}

int main()
{
    const std::string specials = "@#$&%!?*+=<>";
    SevenStar font;

    // 1. Every special character has a non-empty 7x7 glyph in SevenStar.
    for (char c : specials)
    {
        vs grid = glyphFor(font, c);
        std::string name(1, c);
        check(grid.size() == 7, "'" + name + "' glyph has 7 rows");
        bool allSeven = true;
        for (const auto &row : grid)
            if (row.size() != 7)
                allSeven = false;
        check(allSeven, "'" + name + "' glyph rows are 7 columns wide");
        check(countFilled(grid) > 0, "'" + name + "' glyph is not blank");
    }

    // 2. The dispatcher in Ascii.h routes every special character to the font
    //    (before the fix these characters were silently skipped).
    for (char c : specials)
    {
        std::ostringstream captured;
        std::streambuf *old = std::cout.rdbuf(captured.rdbuf());
        ascii::Ascii art(ascii::FontName::sevenstar);
        art.print(std::string(1, c));
        std::cout.rdbuf(old);
        std::string out = captured.str();
        std::string name(1, c);
        check(out.find('%') != std::string::npos,
              "print(\"" + name + "\") renders a glyph");
        check(out.find("not overridden") == std::string::npos,
              "print(\"" + name + "\") hits the SevenStar override");
    }

    // 3. Regression: existing characters still render.
    std::ostringstream captured;
    std::streambuf *old = std::cout.rdbuf(captured.rdbuf());
    ascii::Ascii art(ascii::FontName::sevenstar);
    art.print("A1 ");
    std::cout.rdbuf(old);
    check(captured.str().find('%') != std::string::npos, "print(\"A1 \") still renders");

    if (failures > 0)
    {
        std::cout << failures << " check(s) failed" << std::endl;
        return 1;
    }
    std::cout << "all special-character checks passed" << std::endl;
    return 0;
}
