#include "endGame.h"
#include <iostream>
#include <unistd.h> // for sleep() function

using namespace std;

    void EndGame::loseToSailor() 
    {
        cout << "\033[34m" << "THE SAILOR TOOK YOU HOME." << "\033[0m";
        sleep(2);
        cout << endl << endl;
        exit(0);
    }
    void EndGame::loseToPlayer()
    {
        cout << endl << "\033[35m" << "Announcer: " << "\033[0m"
             << "While you were traveling, a shameless crook tied you up and forced you to use risky dice." << endl;
        sleep(4);
        cout << "\033[31m" << "AFTER GETTING THE CROOK OVER 90,000,000 YEN, YOU HAD A BAD ROLL AND DIED AFTER BEING STRUCK BY LIGHTNING" << "\033[0m";
        sleep(2);
        cout << endl << endl;
        exit(0);
    }
    void EndGame::loseToDecim()
    {
        cout << "\033[35m" << "Decim: " << "\033[0m"
             << "I may appear human, but I am actually an arbiter, a creature born with the task of testing the souls of humans.";
        sleep(3);
        cout << endl << "Your display of sinful behavior made my job awfully easy for me.";
        sleep(3);
        cout << endl << "\033[31m" << "DECIM CAST YOU INTO THE VOID" << "\033[0m";
        sleep(2);
        cout << endl << endl;
        exit(0);
    }
    void EndGame::loseToDice()
    {
        cout << "\033[31m" << "YOU DIED AFTER BEING WERE STRUCK BY LIGHTNING" << "\033[0m";
        sleep(2);
        cout << endl << endl;
        exit(0);
    }
    void EndGame::loseToShopKeeper(int& yen)
    {
        cout << "\033[35m" << "Announcer: " << "\033[0m"
             << "The shop keeper picks up the dice with his left hand." << endl;
        sleep(3);
        cout << "The shop keeper writes your name in his Death Note with his left hand." << endl;
        sleep(3);
        cout << "\033[31m" << "YOU DIED VIA HEART ATTACK, AND THE SHOP KEEPER OF MASADORA STOLE " << yen << " YEN FROM YOU" << "\033[0m";
        sleep(4);
        cout << endl << endl;
        exit(0);
    } 
    void EndGame::loseToKing(int& yen)
    {
        cout << "\033[35m" << "Announcer: " << "\033[0m"
             << "After word spread of you attacking a guard, the King ordered your execution." << endl;
        sleep(3);
        cout << "\033[31m" << "YOU DIED TO A FIRING SQUAD, AND THE KINGDOM OF ALBION CONFINSCATED " << yen << " YEN FROM YOU" << "\033[0m";
        sleep(4);
        cout << endl << endl;
        exit(0);
    } 

    void EndGame::winJapan()
    {
        cout << endl << "\033[34m" << "YOU RETURNED TO YOUR FRIENDS AND FAMILY IN TOKYO, JAPAN AFTER ACCUMULATING " << "\033[0m";
        sleep(2);
        cout << endl << endl;
        exit(0);
    }
    void EndGame::winAmerica()
    {
        cout << endl << "\033[34m" << "YOU EMIGRATED TO AMERICA TELLING YOUR STORY AND BECOMING A PUBLIC SPEAKER" << "\033[0m";
        sleep(3);
        cout << endl << endl;
        exit(0);
    }

