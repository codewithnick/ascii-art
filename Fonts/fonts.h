// fonts.h

#ifndef FONTS_H
#define FONTS_H
#define DEBUG false
#include <vector>
#include <string>
#include <iostream>

class Fonts{
   public:
    std::vector<std::vector<char>>v;
    Fonts(){
         v.reserve(7);
        for (int i = 0; i < 7; i++) {
            v.emplace_back(16,' '); // Create rows with 100 spaces each
        }
    }
    void allocatespace(const std::string &text){
        /*
        int n=(text.length()*7)+((text.length()-1)*2);
        for(int i=0;i<7;i++){
            std::cout<<"allocating\n";
            std::vector<char> x(n,' ');
            v.push_back(x);
        }
        std::cout<<"allocated space\n";
        //allocates space for the text 7*5 by default can be changed later
        */
    }

    std::vector<std::vector<char>> getv(){
        return v;
    }
    void printvector(){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                std::cout<<v[i][j];
            }
            std::cout<<std::endl;
        }
    }

    virtual void C(int colnumber){std::cout<<"C not overridden?";}
    virtual void D(int colnumber){}
    void destroyspace(){
        v.clear();
    }
    ~Fonts(){
        destroyspace();
    }

};
#endif
