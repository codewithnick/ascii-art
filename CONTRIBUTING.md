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
2. Copy the fontname directory from templates directory to Fonts directoy. Rename this directory to the name of your font
3. In that directory, rename the header file and the md file to the name of your font.
4. Set the specified grid size for your font in the appropriate macro fields.
5. Now, In "Ascii.h" #include your font
6. then, Add the condition of your font in the if else block
7. Add some previews to the md file. 

## New-Char

1. Select a character which is not previously used in a font
2. In your selected font's header file uncomment the respective function.
3. then, apply your algorithm and update `character` grid acccordingly.
