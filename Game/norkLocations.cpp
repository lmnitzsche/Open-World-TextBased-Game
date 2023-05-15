#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>

#include "norkLocations.h"
#include "endGame.h"

using namespace std;
    
    void NorkLocations::townOfNork(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        int answer;
        NorkLocations* instance;
        cout << "Where do you wish to go?" << endl
                 << "1.) Library" << endl
                 << "2.) Bar" << endl
                 << "3.) Rock Paper Scissors Arena" << endl
                 << "4.) Supreme Office of Masadora" << endl
                 << "5.) Leave Masadora" << endl;
        cin >> answer;

        if(answer == 1) 
        {
            instance->library(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(answer == 2)
        {
             
        }
        else if(answer == 3)
        {
            
        }
        else if(answer == 4)
        {
            
        }
        else
        {
            return; 
        }
    }

    void NorkLocations::library(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        cout << endl << "\033[34m" << "Librarian: " << "\033[0m"
             << "Hello and welcome to the Nork Library " << name << "!" << endl;
        sleep(4);
        cout << "Here you can expand your knowledge and the best part..." << endl;
        sleep(4);
        cout << "It's absolutely free!" << endl;
        sleep(4);
        cout << "What would you like to rent " << name << "?" << endl;
        sleep(3);
        cout << endl << "1.) ";
    }