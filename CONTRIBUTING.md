# Contribution

Changes and improvements are more than welcome! ❤ Feel free to fork and open a pull request.

Please consider the following :

1. Fork it!
2. Add your new features
   - To add a new font visit [here](#font)
   - To add a new character visit [here](#new-char)
3. Update README.md (if needed)
4. Submit a pull request.

## Font

1. Select a non-duplicate name for font
2. Create a directory in "Fonts" with the name as of font name
3. In that directory, create a header file which consist of a class which inherits class "Fonts"
4. In the class create a individual functions for every single characters
5. Now, In "Ascii.h" #include your font
6. then, Add the condition of your font in the if else block

## New-Char

1. Select a character which is not previously used in a font
2. In your selected font's header file create function which take a "colnumber" as parameter
3. then, apply your algorithm and update 2d array named as "letters"
