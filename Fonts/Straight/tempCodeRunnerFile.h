
        char **q()
        {
            char **character = getCharGrid(3,3);
            character[0][1]='_';
            character[1][0]='(';
            character[1][1]='_';
            character[1][2]=character[2][2]='|';

            return character;
        }