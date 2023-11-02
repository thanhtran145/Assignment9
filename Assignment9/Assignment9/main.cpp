// Name: Thanh Tran
// Date: 09/20/2023
// Desciption: Chapter 4 - Assignments 4

//Credit:
//Joe Bryant& Erik Santana 
//Saul Merino & John Kim 
//Otoniel Torres Bernal
//Christian Hernandez

#include <iostream>
#include "input.h"
#include "Pattern.h"
#include "GuessNumber.h"
using namespace std;

//Funtion Prototypes
void option1();

int main()
{
  
    GuessNumber game;

    do
    {
        system("cls");
        cout << "\n\tCMPR131 - Chapter 9: Recursive Applications by Thanh Tran (11/01/2023)";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1> Pattern of astricks and blanks";
        cout << "\n\t\t2> Guess a number";
        cout << "\n\t\t3> Solve Tower of Hanoi";
        cout << "\n\t\t4> Solve n-Queens";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0> exit";
        cout << "\n\t" << string(80, char(205));

        // get user input/option of main menu
        int option = inputInteger("\n\t\tOption: ", 0, 4);

        // loop through main menu until user exits

        switch (option)
        {
        case 0: exit(1); break;
        case 1: system("cls"); option1(); break;
        case 2: system("cls"); game.gameDisplay(); break;
        case 3: system("cls"); ; break;
        case 4: system("cls"); ; break;
        default: cout << "\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);

    return EXIT_SUCCESS;
}

void option1()
{
    Pattern patternObject1;
    patternObject1.pattern(0, 8);
}

