#include "../HEADER_FILES/A.hpp"
#include "../HEADER_FILES/B.hpp"
#include "../HEADER_FILES/C.hpp"
#include "../HEADER_FILES/D.hpp"
#include "../HEADER_FILES/E.hpp"
#include "../HEADER_FILES/F.hpp"
#include "../HEADER_FILES/G.hpp"
#include "../HEADER_FILES/H.hpp"
#include "../HEADER_FILES/I.hpp"
#include "../HEADER_FILES/J.hpp"
#include "../HEADER_FILES/K.hpp"
#include "../HEADER_FILES/L.hpp"
#include "../HEADER_FILES/M.hpp"
#include "../HEADER_FILES/N.hpp"
#include "../HEADER_FILES/O.hpp"
#include "../HEADER_FILES/P.hpp"
#include "../HEADER_FILES/Q.hpp"
#include "../HEADER_FILES/R.hpp"
#include "../HEADER_FILES/S.hpp"
#include "../HEADER_FILES/T.hpp"
#include "../HEADER_FILES/U.hpp"
#include "../HEADER_FILES/V.hpp"
#include "../HEADER_FILES/W.hpp"
#include "../HEADER_FILES/X.hpp"
#include "../HEADER_FILES/Y.hpp"
#include "../HEADER_FILES/Z.hpp"
#include "../HEADER_FILES/SPACE.hpp"
#include "../HEADER_FILES/boolean_functions.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

//Main function where the program starts running.
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

     //This loop converts the input to lowercase.
    for (size_t x = 0; x < name.length(); x++) {
        name[x] = std::tolower(name[x]);
    }

    //This while loop checks if the user entered an empty input or input that contains numbers or input that has two or more consecutive spaces.
    while (name.empty() || !isLettersOnly(name) ||   hasConsecutiveSpaces(name)) {
        std::cout << "Invalid input. Please enter a valid name: ";
        std::getline(std::cin, name);
        for (size_t x = 0; x < name.length(); x++) {
            name[x] = std::tolower(name[x]);
        }
    }

   //For loop gets the ASCII character for each letter in the user's name.
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
