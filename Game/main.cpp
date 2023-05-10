//Homicide Island

//Created by Logan Nitzsche


#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>

#include "endGame.h"
#include "masadoraLocations.h"
#include "playerTraveling.h"

using namespace std;

int main()
{
    system("clear");
    srand(time(nullptr));

    cout << "\033[35m" << "Sailor: " << "\033[0m" << "Welcome to Homicide Island, Japan!" << endl;
    sleep(3);
    cout << "Homicide Island is an island built on opportunity!" << endl;
    sleep(4);
    cout << "It has been said that there is over a three trillion yen on Homicide Island." << endl;
    sleep(4);
    cout << "That said, if something sounds too good to be true, it probably is." << endl;
    sleep(4);
    cout << "Not only does Homicide Island have the highest crime capita in Japan, but also the entire rest of the world." << endl;
    sleep(4);
    cout << "Furthermore, the King of Homicide Island is a former Yakuza, a heartless businessman, who acts only for his own gain." << endl;
    sleep(4);
    cout << "Anyways, don't say I didn't warn you!" << endl;
    sleep(4);
    cout << "This is as far as I'm going."  << endl;
    sleep(4);
    cout << "That means get off my ship!" << endl;
    sleep(4);
    cout << endl << "\033[35m" << "Sailor: " << "\033[0m" 
         << "You do still want to move to Homicide Island, don't you? ";
    sleep(3);

    string answer;
    string playerName;
    bool kingStatus = false;
    bool hasPlayedDeathDarts = false;
    const bool gameLoop = true;
    int randomNumber = rand() % 2;
    PlayerTraveling* player;
    int yen = 0;

    cin >> answer;

    if(answer == "y" || answer == "Y" || answer == "Yes" || answer == "yes" || answer == "yeah" || answer == "yep")
    {
        if (randomNumber == 0)
        {
            cout << "Great, there isn't an ounce of fear in you!" << endl;
            sleep(3);
            cout << "Take this book created by South Tech." << endl;
            sleep(3);
            cout << "The book has the ability of speaking to you." << endl;
            sleep(3);
            cout << "It will serve as a guide throughout your journey." << endl;
            sleep(3);
            cout << "Now get the hell off my ship!" << endl << endl;
            sleep(2);
        }
        else
        {
            cout << "As I would expect from someone as ambitious as yourself!" << endl;
            sleep(3);
            cout << "Take this book created by South Tech." << endl;
            sleep(3);
            cout << "The book has the ability of speaking to you." << endl;
            sleep(3);
            cout << "It will serve as a guide throughout your journey." << endl;
            sleep(3);
            cout << "Now get the hell off my ship!" << endl << endl;
            sleep(2);
        }
    }
    else
    {
        EndGame game;
        game.loseToSailor();
    }

    cout << "\033[35m" << "Sailor: " << "\033[0m"
         << "But before you go, I most know." << endl;
    sleep(4);
    cout << "What is your name? ";
    cin >> playerName;
    cout << endl << "\033[35m" << "Sailor: " << "\033[0m"
         << "Good luck on Homicide Island " << playerName << "!" << endl;
    sleep(4);
    cout << "The lord knows you're going to need it." << endl << endl;
    sleep(3);

    int finalAnswer;

    while(gameLoop)
    {
        if (kingStatus == false)
        {
            if(yen >= 1000000000)
            {
                cout << "\033[35m" << "Announcer: " << "\033[0m" << "Congratulations "
                    << playerName << ", you managed to make over a billion yen!" << endl;
                sleep(4);
                cout << "Since you arrived on Homicide Island, you have made many connections." << endl;
                sleep(4);
                cout << "I have no doubt that those connections will continue to contribute to your success." << endl;
                sleep(4);
                cout << "What do you plan on doing now? " << endl;
                sleep(3);
                cout << endl << "\033[33m" << "Book: " "\033[0m"
                    << "Lead a revolution and take over Homicide Island boss!" << endl;
                sleep(3);
                cout << "Overthrow the King!" << endl;
                sleep(3);
                cout << "You could be so powerful, and I'd be a knight!" << endl;
                sleep(5);
                cout << "Sir Book of Albion Overseer of Homicide Island" << endl;
                sleep(5);
                cout << "You will give my a title, won't you?" << endl;
                sleep(4);
                cout << "Please please please boss; you gotta give me a title!" << endl;
                sleep(4);
                cout << "Determine your future " << playerName << "." << endl;
                sleep(3);
                cout << endl << "1.) leave the island and return to your home in Tokyo" << endl;
                cout << "2.) leave the island and immigrate to the United States" << endl;
                cout << "3.) stay on the island and attempt to overthrow the king (RECOMMENDED)" << endl;
                cout << "4.) stay on the island and continue to stack your wealth" << endl;
                cin >> finalAnswer;

                if(finalAnswer == 1)
                {
                    cout << "\033[35m" << "Announcer: " << "\033[0m"
                        << "Very well then..." << endl;
                    sleep(2);
                    cout << "A private jet will arrive shortly to escort you back to Tokyo." << endl;
                    sleep(4);
                    cout << "I'm sure your friends and family will be relieved to know you didn't get yourself killed." << endl;
                    sleep(4);

                    cout << endl << "\033[33m" << "Book: " "\033[0m"
                        << "It's been an honor " << playerName << endl;

                    EndGame end;
                    end.winJapan();
                }
                else if(finalAnswer == 2)
                {
                    cout << "\033[35m" << "Announcer: " << "\033[0m"
                        << "Very well then..." << endl;
                    sleep(2);
                    cout << "A private jet will arrive shortly to escort you to the United States of America." << endl;
                    sleep(4);
                    cout << "We will arrange that you have no issues in getting a green card.";
                    sleep(4);

                    cout << endl << endl << "\033[33m" << "Book: " "\033[0m"
                        << "It's been a real honor " << playerName << endl;
                    EndGame end;
                    end.winAmerica();
                }
                else if(finalAnswer == 3)
                {
                    kingStatus = true;
                }
                else
                {
                    cout << "\033[35m" << "Announcer: " << "\033[0m"
                        << "Very well then..." << endl;
                    sleep(2);
                    cout << "I'll leave you alone for the time being." << endl << endl;
                }
            }
        }

        player->travel(playerName, yen, kingStatus, hasPlayedDeathDarts);
    }
}
