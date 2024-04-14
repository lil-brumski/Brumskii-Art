#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"
#include "F.h"
#include "G.h"
#include "H.h"
#include "I.h"
#include "J.h"
#include "K.h"
#include "L.h"
#include "M.h"
#include "N.h"
#include "O.h"
#include "P.h"
#include "Q.h"
#include "R.h"
#include "S.h"
#include "T.h"
#include "U.h"
#include "V.h"
#include "W.h"
#include "X.h"
#include "Y.h"
#include "Z.h"
#include "SPACE.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>


bool isLettersOnly(const std::string& input) {
    for (size_t i = 0; i < input.length(); ++i) {
        if (!std::isalpha(input[i]) && input[i] != ' ') {
            return false;
        }
    }
    return true;
}


int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    for (size_t x = 0; x < name.length(); x++) {
        name[x] = std::tolower(name[x]);
    }

    while (name.empty() || !isLettersOnly(name)) {
        std::cout << "Invalid input. Please enter a valid name: ";
        std::getline(std::cin, name);
        for (size_t x = 0; x < name.length(); x++) {
            name[x] = std::tolower(name[x]);
        }
    }
    
    
  for(int x = 0; x < name.length(); x++){             
     switch(name[x]){
        case 'a':
            A();
            break;
        case 'b':
            B();
            break;
        case 'c':
               C();
               break;                  
        case 'd':
            D();
            break;
        case 'e':
            E();
            break;
        case 'f':
            F();
            break;
        case 'g':
            G();
            break;
        case 'h':
            H();
            break;
        case 'i':
            I();
            break;
        case 'j':
            J();
            break;
        case 'k':
            K();
            break;
        case 'l':
            L();
            break;
        case 'm':
            M();
            break;
        case 'n':
            N();
            break;
        case 'o':
            O();
            break;
        case 'p':
            P();
            break;
        case 'q':
            Q();
            break;
        case 'r':
            R();
            break;
        case 's':
            S();
            break;
        case 't':
            T();
            break;
        case 'u':
            U();
            break;
        case 'v':
            V();
            break;
        case 'w':
            W();
            break;
        case 'x':
            X();
            break;
        case 'y':
            Y();
            break;
        case 'z':
            Z();
            break;    
        case ' ':
            SPACES();
            break;
        default:
             std::cout<<"Invalid character"<<std::endl;                                 
      }
  }
  
    return 0;
}