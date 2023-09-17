#ifndef SEVENSTAR_H
#define SEVENSTAR_H
#include "../fonts.h"
class SevenStar : public Fonts {
 public:
  SevenStar(){}
    void C (int colnumber)
      {
        int col=(colnumber!=0)?((colnumber*7)+colnumber+colnumber):0;
        for(int i=0;i<7;i++)
        {
          for(int j=0;j<7;j++)
          {
            //first aur last line
            if(i==0||i==6)
            {
              if((j%7)%3!=0){ 
                v[i][j+col]='$';}
              else  {v[i][j+col]=' ';}
                
            }

            //second nd second last line

            if(i==1||i==5)
            {
              if(((j)%7)<2||((j)%7)>4)  {v[i][j+col]='$';}
              else  {v[i][j+col]=' ';}
            }

            // rest 

            if(i==2||i==4||i==3)
            {
              if(((j)%7)<2) { v[i][j+col]='$';}
              else  {v[i][j+col]=' ';}
            }


          }

        }

      }


    void D(int colnumber)
      {
        int col=(colnumber!=0)?((colnumber*7)+colnumber+colnumber):0;
        for(int i=0;i<7;i++)
        {
          for(int j=0;j<7;j++)
          {
            if(i==0||i==6)
            {
              if(((j)%7)!=0&&((j)%7)%3==0) v[i][j+col]=' ';
              else v[i][j+col]='%' ;
            }
            else{
              if(((j)%7)==1||((j)%7)==2||((j)%7)==5||((j)%7)==6)
                v[i][j+col]='%';
              else
                v[i][j+col]=' ';
            }
          }
          
        }
      }
};
#endif