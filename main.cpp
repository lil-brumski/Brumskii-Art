#include "HEADER_FILES_and_SOURCE_FILE/A.h"
#include "HEADER_FILES_and_SOURCE_FILE/B.h"
#include "HEADER_FILES_and_SOURCE_FILE/C.h"
#include  "HEADER_FILES_and_SOURCE_FILE/D.h"
#include "HEADER_FILES_and_SOURCE_FILE/E.h"
#include "HEADER_FILES_and_SOURCE_FILE/F.h"
#include "HEADER_FILES_and_SOURCE_FILE/G.h"
#include "HEADER_FILES_and_SOURCE_FILE/H.h"
#include "HEADER_FILES_and_SOURCE_FILE/I.h"
#include "HEADER_FILES_and_SOURCE_FILE/J.h"
#include "HEADER_FILES_and_SOURCE_FILE/K.h"
#include "HEADER_FILES_and_SOURCE_FILE/L.h"
#include "HEADER_FILES_and_SOURCE_FILM.h"
#include "HEADER_FILES_and_SOURCE_FILE/N.h"
#include "HEADER_FILES_and_SOURCE_FILE/O.h"
#include "HEADER_FILES_and_SOURCE_FILE/P.h"
#include "HEADER_FILES_and_SOURCE_FILE/Q.h"
#include "HEADER_FILES_and_SOURCE_FILE/R.h"
#include "HEADER_FILES_and_SOURCE_FILE/S.h"
#include "HEADER_FILES_and_SOURCE_FILE/T.h"
#include "HEADER_FILES_and_SOURCE_FILE/U.h"
#include "HEADER_FILES_and_SOURCE_FILE/V.h"
#include "HEADER_FILES_and_SOURCE_FILE/W.h"
#include "HEADER_FILES_and_SOURCE_FILE/X.h"
#include "HEADER_FILES_and_SOURCE_FILE/Y.h"
#include "HEADER_FILES_and_SOURCE_FILE/Z.h"
#include "HEADER_FILES_and_SOURCE_FILE/SPACE.h"
#include "HEADER_FILES_and_SOURCE_FILE/boolean_functions.h"
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
