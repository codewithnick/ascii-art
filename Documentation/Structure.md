# This file contains the abstract working of the codebase

## Structure

### Font class:

It is the parent of all font classes (amongus,drpepper,etc) all other font classes inherit attributes and methods from this class , the virtual functions are overridden in the child classes and are triggered on runtime using runtime polymorphism.

##### Attributes and Methods:

###### Private:

`vector<vector<char>> letters;`
2D vector to store the characters in each of the font
This vector is what is actually printed on the screen

`unsigned int def_rows;`
Total number of rows in the font
`unsigned int def_cols;`
Total number of columns in the font
`unsigned int char_rows;`
The row size of each character in the font
`unsigned int char_cols;`
The column size of each character in the font
`unsigned int curr_col;`
The current position of the column in the font,
Keeping track of this helps us insert new characters into the letters vector

###### Protected:
`char **getCharGrid(unsigned int rows = 0, unsigned int cols = 0)`
return a 2D character grid of size `rows` and `cols` with each `char=' '`, which can be overwritten later, basically helps in creating new memory space for characters

###### Public:

`Fonts::Fonts(int def_rows, int def_cols)`

This constructor initializes the rows and columns of the font
and fills the vector `this.letter` with spaces

`void printvector()`

This function dumps the 2D vector `this.letter` on the screen

`void pushchar(**character)`

This function pushes a character into the 2D vector `this.letter` at the current column `curr_col` position

**All Virtual functions:**
These are to be overwriten in the child classes as each letter will be different in each font, each function is supposed to return a 2D character grid of the respective character
virtual functions include:
`virtual char **a()` to `virtual char **z()`
`virtual char **A()` to `virtual char **Z()`
`virtual char **Zero()` to `virtual char **Nine()`
`virtual char **space()`