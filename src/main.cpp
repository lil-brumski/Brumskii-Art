#include <string>
#include <cctype>
#include <thread>
#include <chrono>
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"
#include "E.hpp"
#include "F.hpp"
#include "G.hpp"
#include "H.hpp"
#include "I.hpp"
#include "J.hpp"
#include "K.hpp"
#include "L.hpp"
#include "M.hpp"
#include "N.hpp"
#include "O.hpp"
#include "P.hpp"
#include "Q.hpp"
#include "R.hpp"
#include "S.hpp"
#include "T.hpp"
#include "U.hpp"
#include "V.hpp"
#include "W.hpp"
#include "X.hpp"
#include "Y.hpp"
#include "Z.hpp"
#include "SPACE.hpp"
#include "boolean_functions.hpp"

//Timer and for clearinh the terminal
void TimeClear(){
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    
    #if defined(_WIN32) || defined(_WIN64)
      std::system("cls");
    #else
      std::system("clear");
    #endif
}

//Main function where the program starts running.
int main() {
    
    #if defined(_WIN32) || defined(_WIN64)
      std::system("cls");
    #else
      std::system("clear");
    #endif
    
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
    
    #if defined(_WIN32) || defined(_WIN64)
      std::system("cls");
    #else
      std::system("clear");
    #endif
    
   //For loop gets the ASCII character for each letter in the user's name.
  for(int x = 0; x < name.length(); x++){
      
     switch(name[x]){
        case 'a':
            A();
            TimeClear();
            break;
        case 'b':
            B();
            TimeClear();
            break;
        case 'c':
            C();
            TimeClear();
            break;                  
        case 'd':
            D();
            TimeClear();
            break;
        case 'e':
            E();
            TimeClear();
            break;
        case 'f':
            F();
            TimeClear();
            break;
        case 'g':
            G();
            TimeClear();
            break;
        case 'h':
            H();
            TimeClear();
            break;
        case 'i':
            I();
            TimeClear();
            break;
        case 'j':
            J();
            TimeClear();
            break;
        case 'k':
            K();
            TimeClear();
            break;
        case 'l':
            L();
            TimeClear();
            break;
        case 'm':
            M();
            TimeClear();
            break;
        case 'n':
            N();
            TimeClear();
            break;
        case 'o':
            O();
            TimeClear();
            break;
        case 'p':
            P();
            TimeClear();
            break;
        case 'q':
            Q();
            TimeClear();
            break;
        case 'r':
            R();
            TimeClear();
            break;
        case 's':
            S();
            TimeClear();
            break;
        case 't':
            T();
            TimeClear();
            break;
        case 'u':
            U();
            TimeClear();
            break;
        case 'v':
            V();
            TimeClear();
            break;
        case 'w':
            W();
            TimeClear();
            break;
        case 'x':
            X();
            TimeClear();
            break;
        case 'y':
            Y();
            TimeClear();
            break;
        case 'z':
            Z();
            TimeClear();
            break;  
        case ' ':
            SPACES();
            TimeClear();
            break;
        default:
             std::cout<<"Invalid character"<<std::endl;   
             TimeClear();         
      }
  }

    std::cout << "Thanks for using!\n";
    return 0;
}