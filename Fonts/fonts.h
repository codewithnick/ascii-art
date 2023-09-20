// fonts.h

#ifndef FONTS_H
#define FONTS_H
#define DEBUG false
#include <vector>
#include <string>
#include <iostream>

class Fonts{
   public:
    std::vector<std::vector<char>>letters;
    Fonts(){
         letters.reserve(7);
        for (int i = 0; i < 7; i++) {
            letters.emplace_back(100,' '); // Create rows with 100 spaces each
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

    std::vector<std::vector<char>> getletters(){
        return letters;
    }
    void printvector(){
        for(int i=0;i<letters.size();i++){
            for(int j=0;j<letters[0].size();j++){
                std::cout<<letters[i][j];
            }
            std::cout<<std::endl;
        }
    }

    /********************************adding virtual functions********************************/
        // Virtual functions for lowercase letters
        virtual void a(int colnumber) {
            std::cout << "a not overridden?" << std::endl;
        }
        virtual void b(int colnumber) {
            std::cout << "b not overridden?" << std::endl;
        }
        virtual void c(int colnumber) {
            std::cout << "c not overridden?" << std::endl;
        }
        virtual void d(int colnumber) {
            std::cout << "d not overridden?" << std::endl;
        }
        virtual void e(int colnumber) {
            std::cout << "e not overridden?" << std::endl;
        }
        virtual void f(int colnumber) {
            std::cout << "f not overridden?" << std::endl;
        }
        virtual void g(int colnumber) {
            std::cout << "g not overridden?" << std::endl;
        }
        virtual void h(int colnumber) {
            std::cout << "h not overridden?" << std::endl;
        }
        virtual void i(int colnumber) {
            std::cout << "i not overridden?" << std::endl;
        }
        virtual void j(int colnumber) {
            std::cout << "j not overridden?" << std::endl;
        }
        virtual void k(int colnumber) {
            std::cout << "k not overridden?" << std::endl;
        }
        virtual void l(int colnumber) {
            std::cout << "l not overridden?" << std::endl;
        }
        virtual void m(int colnumber) {
            std::cout << "m not overridden?" << std::endl;
        }
        virtual void n(int colnumber) {
            std::cout << "n not overridden?" << std::endl;
        }
        virtual void o(int colnumber) {
            std::cout << "o not overridden?" << std::endl;
        }
        virtual void p(int colnumber) {
            std::cout << "p not overridden?" << std::endl;
        }
        virtual void q(int colnumber) {
            std::cout << "q not overridden?" << std::endl;
        }
        virtual void r(int colnumber) {
            std::cout << "r not overridden?" << std::endl;
        }
        virtual void s(int colnumber) {
            std::cout << "s not overridden?" << std::endl;
        }
        virtual void t(int colnumber) {
            std::cout << "t not overridden?" << std::endl;
        }
        virtual void u(int colnumber) {
            std::cout << "u not overridden?" << std::endl;
        }
        virtual void v(int colnumber) {
            std::cout << "v not overridden?" << std::endl;
        }
        virtual void w(int colnumber) {
            std::cout << "w not overridden?" << std::endl;
        }
        virtual void x(int colnumber) {
            std::cout << "x not overridden?" << std::endl;
        }
        virtual void y(int colnumber) {
            std::cout << "y not overridden?" << std::endl;
        }
        virtual void z(int colnumber) {
            std::cout << "z not overridden?" << std::endl;
        }

        // Virtual functions for uppercase letters
        virtual void A(int colnumber) {
            std::cout << "A not overridden?" << std::endl;
        }
        virtual void B(int colnumber) {
            std::cout << "B not overridden?" << std::endl;
        }
        virtual void C(int colnumber) {
            std::cout << "C not overridden?" << std::endl;
        }
        virtual void D(int colnumber) {
            std::cout << "D not overridden?" << std::endl;
        }
        virtual void E(int colnumber) {
            std::cout << "E not overridden?" << std::endl;
        }
        virtual void F(int colnumber) {
            std::cout << "F not overridden?" << std::endl;
        }
        virtual void G(int colnumber) {
            std::cout << "G not overridden?" << std::endl;
        }
        virtual void H(int colnumber) {
            std::cout << "H not overridden?" << std::endl;
        }
        virtual void I(int colnumber) {
            std::cout << "I not overridden?" << std::endl;
        }
        virtual void J(int colnumber) {
            std::cout << "J not overridden?" << std::endl;
        }
        virtual void K(int colnumber) {
            std::cout << "K not overridden?" << std::endl;
        }
        virtual void L(int colnumber) {
            std::cout << "L not overridden?" << std::endl;
        }
        virtual void M(int colnumber) {
            std::cout << "M not overridden?" << std::endl;
        }
        virtual void N(int colnumber) {
            std::cout << "N not overridden?" << std::endl;
        }
        virtual void O(int colnumber) {
            std::cout << "O not overridden?" << std::endl;
        }
        virtual void P(int colnumber) {
            std::cout << "P not overridden?" << std::endl;
        }
        virtual void Q(int colnumber) {
            std::cout << "Q not overridden?" << std::endl;
        }
        virtual void R(int colnumber) {
            std::cout << "R not overridden?" << std::endl;
        }
        virtual void S(int colnumber) {
            std::cout << "S not overridden?" << std::endl;
        }
        virtual void T(int colnumber) {
            std::cout << "T not overridden?" << std::endl;
        }
        virtual void U(int colnumber) {
            std::cout << "U not overridden?" << std::endl;
        }
        virtual void V(int colnumber) {
            std::cout << "V not overridden?" << std::endl;
        }
        virtual void W(int colnumber) {
            std::cout << "W not overridden?" << std::endl;
        }
        virtual void X(int colnumber) {
            std::cout << "X not overridden?" << std::endl;
        }
        virtual void Y(int colnumber) {
            std::cout << "Y not overridden?" << std::endl;
        }
        virtual void Z(int colnumber) {
            std::cout << "Z not overridden?" << std::endl;
        }
        virtual void zero(int colnumber) {
            std::cout << "Zero not overridden?" << std::endl;
        }
        virtual void one(int colnumber) {
            std::cout << "One not overridden?" << std::endl;
        }
        virtual void two(int colnumber) {
            std::cout << "Two not overridden?" << std::endl;
        }
        virtual void three(int colnumber) {
            std::cout << "Three not overridden?" << std::endl;
        }
        virtual void four(int colnumber) {
            std::cout << "Four not overridden?" << std::endl;
        }
        virtual void five(int colnumber) {
            std::cout << "Five not overridden?" << std::endl;
        }
        virtual void six(int colnumber) {
            std::cout << "Six not overridden?" << std::endl;
        }
        virtual void seven(int colnumber) {
            std::cout << "Seven not overridden?" << std::endl;
        }
        virtual void eight(int colnumber) {
            std::cout << "Eight not overridden?" << std::endl;
        }
        virtual void nine(int colnumber) {
            std::cout << "Nine not overridden?" << std::endl;
        }

    /********************************done adding virtual functions********************************/
    void destroyspace(){
        letters.clear();
    }
    ~Fonts(){
        destroyspace();
    }

};
#endif
