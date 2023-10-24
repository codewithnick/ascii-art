#ifndef BLOCK_H
#define BLOCK_H
#include "../fonts.h"

class Block : public Fonts
{
    static const int rows = 11;
    static const int cols = 20;

public:
    Block() : Fonts(rows, cols) {}
    // Uppercase

    char **A()
    {
        char **character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][9] = character[2][10] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[6][4] = character[6][15] = character[7][12] = character[7][13] = character[7][14] = character[7][15] = character[5][8] = character[5][9] = character[5][10] = character[5][11] = '_';
        character[3][8] = character[4][7] = character[5][6] = character[6][5] = character[4][9] = character[6][7] = '/';
        character[3][11] = character[4][12] = character[5][13] = character[6][14] = character[6][12] = character[4][10] = '\\';
        character[7][3] = character[7][8] = character[7][11] = character[7][16] = '|';

        return character;
    }

   
         char **B()
        {
            char **character = getCharGrid(11,20);

            character[0][1]=character[0][18]=character[1][2]=character[1][17]=character[5][13]='.';
            character[1][0]=character[1][19]=character[2][0]=character[2][2]=character[2][17]=character[2][19]=character[3][0]=character[3][2]=character[3][5]=character[3][17]=character[3][19]=character[4][0]=character[4][2]=character[4][7]=character[4][9]=character[4][13]=character[4][17]=character[4][19]=character[5][0]=character[5][2]=character[5][7]=character[5][17]=character[5][19]=character[6][0]=character[6][2]=character[6][7]=character[6][9]=character[6][14]=character[6][17]=character[6][19]=character[7][0]=character[7][2]=character[7][5]=character[7][17]=character[7][19]=character[8][0]=character[8][2]=character[8][17]=character[8][19]=character[9][0]=character[9][19]='|';
            character[0][2]=character[0][3]=character[0][4]=character[0][5]=character[0][6]=character[0][7]=character[0][8]=character[0][9]=character[0][10]=character[0][11]=character[0][12]=character[0][13]=character[0][14]=character[0][15]=character[0][16]=character[0][17]=character[1][3]=character[1][4]=character[1][5]=character[1][6]=character[1][7]=character[1][8]=character[1][9]=character[1][10]=character[1][11]=character[1][12]=character[1][13]=character[1][14]=character[1][15]=character[1][16]=character[9][3]=character[9][4]=character[9][5]=character[9][6]=character[9][7]=character[9][8]=character[9][9]=character[9][10]=character[9][11]=character[9][12]=character[9][13]=character[9][14]=character[9][15]=character[9][16]=character[10][2]=character[10][3]=character[10][4]=character[10][5]=character[10][6]=character[10][7]=character[10][8]=character[10][9]=character[10][10]=character[10][11]=character[10][12]=character[10][13]=character[10][14]=character[10][15]=character[10][16]=character[10][17]='-';
            character[2][6]=character[2][7]=character[2][8]=character[2][9]=character[2][10]=character[2][11]=character[3][6]=character[3][10]=character[4][10]=character[5][10]=character[5][11]=character[6][6]=character[6][10]=character[6][11]=character[7][6]=character[7][7]=character[7][8]=character[7][9]=character[7][10]=character[7][11]=character[7][12]='_';
            character[7][13]='/';
            character[3][12]='\\';
            character[5][12]=character[9][2]=character[9][17]=character[10][1]=character[10][18]='\'';
            character[4][11]=character[6][12]=')';

            return character;
        }
   

    /*
        char **C()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **D()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

   
        char **E()
        {
            char **character = getCharGrid(11,20);

           character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
            character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
            character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
            character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
            character[0][1] = character[0][18] = character[1][2] = character[1][17] ='.';
            character[10][1] = character[10][18] =  character[9][2] = character[9][17] = '\'';

            character[2][5]=character[2][6]=character[2][7]=character[2][8]=character[2][9]=character[2][10]=character[2][11]=character[2][12]=character[2][13]=character[7][5]=character[7][6]=character[7][7]=character[7][8]=character[7][9]=character[7][10]=character[7][11]=character[7][12]=character[7][13]=character[3][5]=character[3][9]=character[3][10]=character[3][11]=character[4][9]=character[4][13]=character[5][9]=character[5][13]=character[6][5]=character[6][9]=character[6][10]=character[6][11]='_';
            character[3][4]=character[3][14]=character[4][6]=character[4][8]=character[4][14]=character[5][6]=character[5][10]=character[6][6]=character[6][8]=character[6][14]=character[7][4]=character[7][14]='|'; 
            character[4][12]='\\';
            character[6][12]='/';

            return character;
        }
    

    /*
        char **F()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **G()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    char **H()
    {
        char **character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] ='.';
        character[10][1] = character[10][18] =  character[9][2] = character[9][17] = '\'';

        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][5] = character[3][14] = character[4][9] = character[4][10] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[6][5] = character[6][14] = character[5][9] = character[5][10] = '_';
        character[3][4] = character[3][9] = character[3][10] = character[3][15] = character[4][6] = character[4][8] = character[4][11] = character[4][13] = character[5][13] = character[5][6] = character[6][6] = character[6][8] = character[6][11] = character[6][13] = character[7][4] = character[7][9] = character[7][10] = character[7][15] = '|';

        return character;
    }

    
        char **I()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
             character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] =character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] =character[10][18] = '.';
         character[10][1] =character[9][2]=character[9][17]= character[10][18] = '\'';

           character[2][8] = character[2][9]=character[2][10] = character[2][11] = character[2][12]= character[3][8] = character[3][12] = character[6][8] = character[6][12]  = character[7][8] = character[7][9]=character[7][10] =character[7][11] =character[7][12]  = '_';
        character[3][7] = character[3][13]  = character[4][9] = character[4][11] = character[5][9] = character[5][11] = character[6][9] = character[6][11] = character[7][7] = character[7][13]  = '|';
       

            return character;
        }
    

    
        char **J()
        {
            char **character = getCharGrid(11, 20);

              character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

        character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[3][8] = character[3][12] = character[5][6] = character[6][8] = character[7][7] = character[7][8] = character[7][9] = '_';
        character[3][7] = character[3][13] = character[4][9] = character[4][11] =  character[5][9] = character[5][11] = character[6][5] = character[6][7] =  character[6][11] = '|';
        character[6][9] = character[7][11]  = '\'';
        character[7][5] = '`';
        character[7][6] =  character[7][10] = '.';

            return character;
        }
    

        char **K()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
            character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] =character[9][8] =character[9][9] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = '-';
            character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[5][12] ='.';
            character[9][2] =character[9][17] = character[10][1] = character[10][18]= character[5][11] ='\'';
            character[1][0] =character[1][19] =character[2][0] =character[2][19] =character[3][0] =character[3][19] =character[4][0] =character[4][19] =character[5][0] = character[5][19] = character[6][0] =character[6][19] = character[7][0] =character[7][19] = character[8][0] =character[8][19] = character[9][0] =character[9][19] = character[2][2] =character[2][17] = character[3][2] =character[3][17] = character[4][2] =character[4][17] = character[5][2] =character[5][17] = character[6][2] =character[6][17] = character[7][2] =character[7][17] = character[8][2] =character[8][17] = '|';
            character[3][4] =character[3][8] =character[3][9] =character[3][14] = character[4][6] =character[4][8] = character[5][6] =character[6][6] =character[6][8] = character[7][4] =character[7][9] = character[7][10] =character[7][15] ='|';
            character[2][5] = character[2][6] = character[2][7] = character[2][10] = character[2][11] = character[2][12] = character[2][13] =  character[3][5] =  character[3][10] =  character[3][13] =  character[4][9] =  character[5][9] =  character[5][10] =  character[6][5] = character[6][14] =  character[7][5] = character[7][6] = character[7][7] = character[7][8] =  character[7][11] = character[7][12] = character[7][13] = character[7][14] = '_';
            character[4][10] = character[4][12] ='/';
            character[6][11] = character[6][13] ='\\';
            return character;
        }


    
        char **L()
        {
            char **character = getCharGrid();

            character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
            character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
            character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
            character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
            character[0][1] = character[0][18] = character[1][2] = character[1][17] ='.';
            character[10][1] = character[10][18] =  character[9][2] = character[9][17] = '\'';
            character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[3][6] = character[3][10] = character[2][8] = character[6][6] = character[6][10] = character[6][11] = character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = character[7][13] = character[5][13] = '_';
            character[3][5] = character[3][11] = character[4][7] = character[5][7] = character[6][7] = character[4][9] = character[5][9] = character[6][9] = character[7][5] = character[7][14] = character[6][14] = '|';
            character[6][12] = '/';

            return character;
        }
   

    
        char **M()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS
            character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
            character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
            character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
            character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
            character[0][1] = character[0][18] = character[1][2] = character[1][17] ='.';
            character[10][1] = character[10][18] = character[9][2] = character[9][17] =  '\'';

            character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][12] = character[2][13] = character[2][14] = character[2][15] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = character[7][15] = character[6][4] = character[6][8] = character[6][11] = character[6][15] = character[3][4] = character[3][15] = '_';
            character[3][3] = character[3][16] = character[4][5] = character[4][14] = character[5][5] = character[5][14] = character[6][5] = character[6][14] = character[7][3] = character[7][9] = character[7][10] = character[7][16] = character[5][7] = character[5][12] = character[6][7] = character[6][12] = '|';
            character[3][8] = character[4][9] = character[5][8] = character[6][9] = '\\';
            character[3][11] = character[4][10] = character[5][11] = character[6][10] = '/';
            return character;
        }
    

    char **N()
    {
        char **character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][4] = character[3][10] = character[3][14] = character[6][4] = character[6][8] = character[6][14] = character[7][4] = character[7][5] = character[7][6] = character[7][7] = character[7][8] = character[7][11] = character[7][12] = character[7][13] = character[7][14] = '_';
        character[3][3] = character[3][9] = character[3][15] = character[4][5] = character[4][11] = character[4][13] = character[5][5] = character[5][11] = character[5][13] = character[6][5] = character[6][7] = character[6][13] = character[7][3] = character[7][9] = character[7][15] = '|';
        character[3][8] = character[4][9] = character[5][8] = character[5][10] = character[6][9] = character[7][10] = '\\';
        return character;
    }

    /*
        char **O()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    
        char **P()
        {
            char **character = getCharGrid(11,20);

             character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
            character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
            character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
            character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
            character[0][1] = character[0][18] = character[1][2] = character[1][17] =  '.';
            character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';

            character[2][6] = character [2][7] = character[2][8] = character [2][9] = character[2][10] = character [2][11] = character[7][6] = character [7][7] = character[7][8] = character [7][9] = character[7][10] = character[3][6] = character [3][10] = character[3][11] = character [4][10] = character[4][11] = character[5][10] = character [5][11] = character[5][12] = character[6][6] = character [6][10]='_';
            character[3][5] = character [4][7] = character[4][9] = character[4][14] = character[5][7] = character[6][7] = character[6][9] = character[7][5] = character[7][11] = '|'; 
            character[3][14] = '\\';
            character[4][12] = ')';
            character[5][13] = '/';

            return character;
        }
    

    /*
        char **Q()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    char **R()
    {
        char **character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[10][1] = character[10][18] = character[9][2] = character[9][17] = '\'';
        character[2][5] = character[2][6] = character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[3][5] = character[3][9] = character[3][10] = character[4][10] = character[4][9] = character[5][9] = character[5][10] = character[6][5] = character[7][5] = character[7][6] = character[7][7] = character[7][7] = character[6][14] = character[7][12] = character[7][13] = character[7][14] = '_';
        character[3][4] = character[4][6] = character[4][8] = character[4][13] = character[5][6] = character[6][6] = character[6][8] = character[7][4] = character[7][9] = character[7][11] = character[7][15] = '|';
        character[3][12] = character[6][11] = character[6][13] = '\\';
        character[5][12] = '/';
        character[4][11] = ')';
        return character;
    }

    char **S()
    {
        char **character = getCharGrid(11, 20);

        // Enter the character grid in ROWS X COLS
        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = '.';
        character[2][7] = character[2][8] = character[2][9] = character[2][10] = character[2][11] = character[2][12] = character[2][13] = '_';
        character[3][9] = character[3][10] = character[3][11] = '_';
        character[4][9] = character[4][10] = character[4][13] = '_';
        character[5][8] = character[5][9] = character[5][10] = '_';
        character[6][8] = character[6][9] = character[6][10] = character[6][11] = '_';
        character[7][6] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = character[7][12] = '_';
        character[4][5] = character[6][5] = character[7][5] = character[3][14] = character[4][14] = character[6][14] = '|';
        character[5][12] = '-';
        character[5][7] = character[5][12] = character[7][13] = '.';
        character[5][6] = character[7][14] = '\'';
        character[5][11] = character[6][6] = '`';
        character[3][6] = '/';
        character[4][12] = character[6][7] = '\\';
        character[4][8] = '(';
        character[6][12] = ')';

        return character;
    }

    /*
        char **T()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **U()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    char **V()
    {
        char **character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[9][2] = character[9][17] = '.';
        character[10][1] = character[10][18] = '\'';

        character[2][4] = character[2][5] = character[2][6] = character[2][7] = character[7][9] = character[2][11] = character[2][12] = character[2][13] = character[2][14] = character[3][4] = character[3][7] = character[3][11] = character[3][14] = '_';
        character[3][3] = character[3][8] = character[3][10] = character[3][15] = '|';
        character[6][9] = '\'';
        character[4][5] = character[4][7] = character[5][6] = character[5][8] = character[6][7] = character[7][8] = '\\';
        character[4][11] = character[4][13] = character[5][10] = character[5][12] = character[6][11] = character[7][10] = '/';

        return character;
    }

    /*
        char **W()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **X()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Y()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **Z()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    // Lowercase

    /*
        char **a()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **b()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **c()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **d()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **e()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **f()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **g()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **h()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }
    */

    /*
        char **i()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **j()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **k()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **l()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **m()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **n()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **o()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **p()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **q()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **r()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **s()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **t()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **u()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **v()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **w()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **x()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **y()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **z()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    // Numbers

    /*
        char **zero()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    char **one()
    {
        char **character = getCharGrid(11, 20);

        character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';
        character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[9][2] = character[9][17] = '.';
        character[10][1] = character[10][18] = '\'';
        character[2][8] = character[2][9] = character[6][7] = character[6][11] = character[7][7] = character[7][8] = character[7][9] = character[7][10] = character[7][11] = '_';
        character[3][10] = character[4][8] = character[4][10] = character[5][8] = character[5][10] = character[6][8] = character[6][10] = character[7][6] = character[7][12] = '|';
        character[3][7] = '/';
        character[4][7] = '`';

        return character;
    }

    /*
        char **two()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **three()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    /*
        char **four()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    char **five()
    {
        char **character = getCharGrid(11, 20);

        character[0][1] = '.';
        character[0][2] = '-';
        character[0][3] = '-';
        character[0][4] = '-';
        character[0][5] = '-';
        character[0][6] = '-';
        character[0][7] = '-';
        character[0][8] = '-';
        character[0][9] = '-';
        character[0][10] = '-';
        character[0][11] = '-';
        character[0][12] = '-';
        character[0][13] = '-';
        character[0][14] = '-';
        character[0][15] = '-';
        character[0][16] = '-';
        character[0][17] = '-';
        character[0][18] = '.';
        character[1][0] = '|';
        character[1][2] = '.';
        character[1][3] = '-';
        character[1][4] = '-';
        character[1][5] = '-';
        character[1][6] = '-';
        character[1][7] = '-';
        character[1][8] = '-';
        character[1][9] = '-';
        character[1][10] = '-';
        character[1][11] = '-';
        character[1][12] = '-';
        character[1][13] = '-';
        character[1][14] = '-';
        character[1][15] = '-';
        character[1][16] = '-';
        character[1][17] = '.';
        character[1][19] = '|';
        character[2][0] = '|';
        character[2][2] = '|';
        character[2][6] = '_';
        character[2][7] = '_';
        character[2][8] = '_';
        character[2][9] = '_';
        character[2][10] = '_';
        character[2][11] = '_';
        character[2][12] = '_';
        character[2][17] = '|';
        character[2][19] = '|';
        character[3][0] = '|';
        character[3][2] = '|';
        character[3][5] = '|';
        character[3][8] = '_';
        character[3][9] = '_';
        character[3][10] = '_';
        character[3][11] = '_';
        character[3][12] = '_';
        character[3][13] = '|';
        character[3][17] = '|';
        character[3][19] = '|';
        character[4][0] = '|';
        character[4][2] = '|';
        character[4][5] = '|';
        character[4][7] = '|';
        character[4][8] = '_';
        character[4][9] = '_';
        character[4][10] = '_';
        character[4][11] = '_';
        character[4][17] = '|';
        character[4][19] = '|';
        character[5][0] = '|';
        character[5][2] = '|';
        character[5][5] = '\'';
        character[5][6] = '_';
        character[5][7] = '.';
        character[5][8] = '_';
        character[5][9] = '_';
        character[5][10] = '_';
        character[5][11] = '_';
        character[5][12] = '\'';
        character[5][13] = '\'';
        character[5][14] = '.';
        character[5][17] = '|';
        character[5][19] = '|';
        character[6][0] = '|';
        character[6][2] = '|';
        character[6][5] = '|';
        character[6][7] = '\\';
        character[6][8] = '_';
        character[6][9] = '_';
        character[6][10] = '_';
        character[6][11] = '_';
        character[6][12] = ')';
        character[6][14] = '|';
        character[6][17] = '|';
        character[6][19] = '|';
        character[7][0] = '|';
        character[7][2] = '|';
        character[7][6] = '\\';
        character[7][7] = '_';
        character[7][8] = '_';
        character[7][9] = '_';
        character[7][10] = '_';
        character[7][11] = '_';
        character[7][12] = '_';
        character[7][13] = '.';
        character[7][14] = '\'';
        character[7][17] = '|';
        character[7][19] = '|';
        character[8][0] = '|';
        character[8][2] = '|';
        character[8][17] = '|';
        character[8][19] = '|';
        character[9][0] = '|';
        character[9][2] = '\'';
        character[9][3] = '-';
        character[9][4] = '-';
        character[9][5] = '-';
        character[9][6] = '-';
        character[9][7] = '-';
        character[9][8] = '-';
        character[9][9] = '-';
        character[9][10] = '-';
        character[9][11] = '-';
        character[9][12] = '-';
        character[9][13] = '-';
        character[9][14] = '-';
        character[9][15] = '-';
        character[9][16] = '-';
        character[9][17] = '\'';
        character[9][19] = '|';
        character[10][1] = '\'';
        character[10][2] = '-';
        character[10][3] = '-';
        character[10][4] = '-';
        character[10][5] = '-';
        character[10][6] = '-';
        character[10][7] = '-';
        character[10][8] = '-';
        character[10][9] = '-';
        character[10][10] = '-';
        character[10][11] = '-';
        character[10][12] = '-';
        character[10][13] = '-';
        character[10][14] = '-';
        character[10][15] = '-';
        character[10][16] = '-';
        character[10][17] = '-';
        character[10][18] = '\'';

        return character;
    }

    /*
        char **six()
        {
            char **character = getCharGrid();

            //Enter the character grid in ROWS X COLS

            return character;
        }

    */

    
        char **seven()
        {
            char **character = getCharGrid(11,20);

           character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] =character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] = character[8][17] = '|';

         character[0][1] = character[0][18] = character[1][2] = character[1][17] = character[10][1] =character[10][18] = '.';
         character[10][1] =character[9][2]=character[9][17]= character[10][18] = '\'';
         character[3][5]=character[3][13]=character[4][5]='|';
         character[2][6]=character[2][7]=character[2][8]=character[2][9]=character[2][10]=character[2][11]=character[2][12]=character[4][6]=character[3][8]=character[3][9]=character[3][10]=character[7][8]='_';
         character[4][7]=character[4][10]=character[5][9]=character[6][8]=character[7][7]=character[7][9]=character[6][10]=character[5][11]=character[4][12]='/';

            return character;
        }

    

    
        char **eight()
        {
            char **character = getCharGrid(11,20);
         character[0][2] = character[0][3] = character[0][4] = character[0][5] = character[0][6] = character[0][7] = character[0][8] = character[0][9] = character[0][10] = character[0][11] = character[0][12] = character[0][13] = character[0][14] = character[0][15] = character[0][16] = character[0][17] = character[1][3] = character[1][4] = character[1][5] = character[1][6] = character[1][7] = character[1][8] = character[1][9] = character[1][10] = character[1][11] = character[1][12] = character[1][13] = character[1][14] = character[1][15] = character[1][16] = '-';
        character[9][3] = character[9][4] = character[9][5] = character[9][6] = character[9][7] = character[9][10] = character[9][11] = character[9][12] = character[9][13] = character[9][14] = character[9][15] = character[9][16] = character[10][2] = character[10][3] = character[10][4] = character[10][5] = character[10][6] = character[10][7] = character[10][8] = character[10][9] = character[10][10] = character[10][11] = character[10][12] = character[10][13] = character[10][14] = character[10][15] = character[10][16] = character[10][17] = character[9][8] = character[9][9] = '-';
        character[1][0] = character[2][0] = character[3][0] = character[4][0] = character[5][0] = character[6][0] = character[7][0] = character[8][0] = character[9][0] = character[2][2] = character[3][2] = character[4][2] = character[5][2] = character[6][2] = character[7][2] = character[6][5]=character[4][6]=character[4][13]=character[8][2] = '|';
        character[1][19] = character[2][19] = character[3][19] = character[4][19] = character[5][19] = character[6][19] = character[7][19] = character[8][19] = character[9][19] = character[2][17] = character[3][17] = character[3][17] = character[4][17] = character[5][17] = character[6][17] = character[7][17] =character[6][14]= character[8][17] = '|';

        character[0][1] = character[0][18] = character[1][2] = character[1][17] =character[3][6]=character[3][13]= character[10][1] = character[7][6]= character[7][13]=character[5][13]= character[5][6]=character[10][18] = '.';
        character[5][7]= character[7][5]='`';
        character[4][9]=character[4][10]=character[3][9]=character[3][10]=character[2][8]=character[2][9]=character[2][10]=character[2][11]= character[5][8]=character[5][9]=character[5][10]= character[5][11]=character[6][8]=character[6][9]=character[6][10]=character[6][11]=character[7][7]=character[7][8]=character[7][9]=character[7][10]=character[7][11]=character[7][12]='_';
        character[4][8]=character[6][7]='(';
        character[4][11]=character[6][12]=')';
        character[7][14]=character[5][12]=character[3][7]=character[3][12]= character[10][1] =character[9][2]=character[9][17]= character[10][18] = '\'';

            return character;
        }

    

    char **nine()
    {
        char **character = getCharGrid(11, 20);

        character[0][1] = '.';
        character[0][2] = '-';
        character[0][3] = '-';
        character[0][4] = '-';
        character[0][5] = '-';
        character[0][6] = '-';
        character[0][7] = '-';
        character[0][8] = '-';
        character[0][9] = '-';
        character[0][10] = '-';
        character[0][11] = '-';
        character[0][12] = '-';
        character[0][13] = '-';
        character[0][14] = '-';
        character[0][15] = '-';
        character[0][16] = '-';
        character[0][17] = '-';
        character[0][18] = '.';
        character[1][0] = '|';
        character[1][2] = '.';
        character[1][3] = '-';
        character[1][4] = '-';
        character[1][5] = '-';
        character[1][6] = '-';
        character[1][7] = '-';
        character[1][8] = '-';
        character[1][9] = '-';
        character[1][10] = '-';
        character[1][11] = '-';
        character[1][12] = '-';
        character[1][13] = '-';
        character[1][14] = '-';
        character[1][15] = '-';
        character[1][16] = '-';
        character[1][17] = '.';
        character[1][19] = '|';
        character[2][0] = '|';
        character[2][2] = '|';
        character[2][7] = '_';
        character[2][8] = '_';
        character[2][9] = '_';
        character[2][10] = '_';
        character[2][11] = '_';
        character[2][12] = '_';
        character[2][17] = '|';
        character[2][19] = '|';
        character[3][0] = '|';
        character[3][2] = '|';
        character[3][5] = '.';
        character[3][6] = '\'';
        character[3][8] = '_';
        character[3][9] = '_';
        character[3][10] = '_';
        character[3][11] = '_';
        character[3][13] = '\'';
        character[3][14] = '.';
        character[3][17] = '|';
        character[3][19] = '|';
        character[4][0] = '|';
        character[4][2] = '|';
        character[4][5] = '|';
        character[4][7] = '(';
        character[4][8] = '_';
        character[4][9] = '_';
        character[4][10] = '_';
        character[4][11] = '_';
        character[4][12] = ')';
        character[4][14] = '|';
        character[4][17] = '|';
        character[4][19] = '|';
        character[5][0] = '|';
        character[5][2] = '|';
        character[5][5] = '\'';
        character[5][6] = '_';
        character[5][7] = '.';
        character[5][8] = '_';
        character[5][9] = '_';
        character[5][10] = '_';
        character[5][11] = '_';
        character[5][12] = '.';
        character[5][14] = '|';
        character[5][17] = '|';
        character[5][19] = '|';
        character[6][0] = '|';
        character[6][2] = '|';
        character[6][5] = '|';
        character[6][7] = '\\';
        character[6][8] = '_';
        character[6][9] = '_';
        character[6][10] = '_';
        character[6][11] = '_';
        character[6][12] = '|';
        character[6][14] = '|';
        character[6][17] = '|';
        character[6][19] = '|';
        character[7][0] = '|';
        character[7][2] = '|';
        character[7][6] = '\\';
        character[7][7] = '_';
        character[7][8] = '_';
        character[7][9] = '_';
        character[7][10] = '_';
        character[7][11] = '_';
        character[7][12] = '_';
        character[7][13] = ',';
        character[7][14] = '\'';
        character[7][17] = '|';
        character[7][19] = '|';
        character[8][0] = '|';
        character[8][2] = '|';
        character[8][17] = '|';
        character[8][19] = '|';
        character[9][0] = '|';
        character[9][2] = '\'';
        character[9][3] = '-';
        character[9][4] = '-';
        character[9][5] = '-';
        character[9][6] = '-';
        character[9][7] = '-';
        character[9][8] = '-';
        character[9][9] = '-';
        character[9][10] = '-';
        character[9][11] = '-';
        character[9][12] = '-';
        character[9][13] = '-';
        character[9][14] = '-';
        character[9][15] = '-';
        character[9][16] = '-';
        character[9][17] = '\'';
        character[9][19] = '|';
        character[10][1] = '\'';
        character[10][2] = '-';
        character[10][3] = '-';
        character[10][4] = '-';
        character[10][5] = '-';
        character[10][6] = '-';
        character[10][7] = '-';
        character[10][8] = '-';
        character[10][9] = '-';
        character[10][10] = '-';
        character[10][11] = '-';
        character[10][12] = '-';
        character[10][13] = '-';
        character[10][14] = '-';
        character[10][15] = '-';
        character[10][16] = '-';
        character[10][17] = '-';
        character[10][18] = '\'';

        return character;
    }
};
#endif