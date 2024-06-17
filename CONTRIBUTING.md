# Contribution

Changes and improvements are more than welcome! ❤ Feel free to fork and open a pull request.

To read The Technical aspects you might want to refer [This](./Documentation/Structure.md)

Please consider the following :

1. Fork it!
2. Open an issue, if it does not already exist (Example: Add char 'A' in DrPepper Font) and ask to get assigned.
3. Add your new features
   - To add a new font visit [here](#add-a-new-font)
   - To add a new character visit [here](#add-a-new-char-in-a-font)
4. Update README.md (if needed)
5. Add Screenshots of your working file
6. Send us a pull request.

## Things you can do

### Improve The Documentation

Good Documentation is a Base for every code base , if you feel there is something missing , not clear in the docs or code needs more comments or can be made prettier, or ever if you find a typo, You can Contribute to Documentation.

1. Open an issue and mention the possible areas of improvement.
2. Wait for discussion with maintainers and get assigned.
3. Improve the documentation and send us a new Pull Request.

### Report/Fix a Bad Character in a Font

1. Open a new issue and post screenshots of the terminal.
2. Mention the font and character which has a problem.
3. Mention Expected and Actual result

### Add a new Font

1. Select a non-duplicate name for font
2. Copy the fontname directory from templates directory to Fonts directoy. Rename this directory to the name of your font
3. In that directory, rename the header file and the md file to the name of your font.
4. Set the specified grid size for your font in the appropriate macro fields.
5. Now, In "Ascii.h" #include your font
6. Then, Add the condition of your font in the if else block
7. Add some previews to the md file.

### Add a New-Char in a Font

1. Select a character which is not previously used in a font
2. In your selected font's header file uncomment the respective function.
3. then, apply your algorithm and update `character` grid acccordingly.
