#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>

#include "masadoraLocations.h"
#include "endGame.h"

using namespace std;

void MasadoraLocations::kingdomFacilityMasadora(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        MasadoraLocations* instance = nullptr;
        int kingdomFacilityAnswer;
        int judicialChoice;

        if(kingStatus == true)
        {
            cout << endl << "\033[34m" << "Duke of Masadora: " << "\033[0m"
                 << "Welcome to the Supreme Office of Masadora Your Magesty." << endl;
            sleep(3);
            cout << "What would you like to do Your Magesty?" << endl;
            sleep(3);
            cout << endl << "1.) Impose a new tax on the residents of Masadora" << endl
                 << "2.) Act as a judge on a case" << endl
                 << "3.) Leave the Supreme Office of Masadora" << endl;
            cin >> kingdomFacilityAnswer;

            if(kingdomFacilityAnswer == 1)
            {
                cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                     << "You imposed a tax on the people of Masadora netting " << "\u00A5" << "5,000,000";
                sleep(3);
                yen = yen + 5000000;
                cout << endl << "You now have " << "\u00A5" << yen;
                sleep(3);
                cout << endl << endl << "\033[34m" << "Duke of Masadora: " << "\033[0m"
                     << "Harsh decision Your Majesty!" << endl;
                sleep(4);
                cout << "Nevertheless, it was an honor to have you in the Supreme Office of Masadora Your Majesty!" << endl;
                sleep(4);
                instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
            }
            else if(kingdomFacilityAnswer == 2)
            {
                int caseNumber = rand() % 6 + 1;

                if(caseNumber == 1)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This woman stands accused of stealing a valuable piece of jewelry from the castle." << endl;
                    sleep(3);
                    cout << "The defendant claims that she did not commit the crime and that she was simply in the wrong place at the wrong time." << endl;
                    sleep(3); 
                    cout << "The prosecution presents several pieces of evidence linking the defendant to the crime, but the defense argues that there is not enough proof to convict." << endl;
                    sleep(3);
                }
                else if(caseNumber == 2)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This man stands accused of murdering your associate after a disagreement about finances." << endl;
                    sleep(3);
                    cout << "The prosecution presents forensic evidence and eyewitness testimony." << endl;
                    sleep(3); 
                    cout << "The defense argues that the defendant had no motive to commit the crime and that there is not enough evidence to prove guilt beyond a reasonable doubt." << endl;
                    sleep(3);
                }
                else if(caseNumber == 3)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This man stands accused of assaulting a royal guard." << endl;
                    sleep(3);
                    cout << " The prosecution presents video evidence showing the defendant striking the guard. " << endl;
                    sleep(3); 
                    cout << "The defense argues that the defendant was acting in self-defense and that the guard used excessive force." << endl;
                    sleep(3);
                }
                else if(caseNumber == 4)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This man stands accused of stealing a valuable horse from the stables in Pandora." << endl;
                    sleep(3);
                    cout << "The prosecution presents evidence of eyewitness testimony and stolen property found in the defendant's possession." << endl;
                    sleep(3); 
                    cout << "The defense argues that he was just borrowing the horse." << endl;
                    sleep(3);
                }
                else if(caseNumber == 5)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This woman has been accused of plotting a coup d'etat." << endl;
                    sleep(3);
                    cout << "The prosecution presents multiple testimonies proving guilt. " << endl;
                    sleep(3); 
                    cout << "The defense argues that that there is not enough evidence to prove guilt beyond a reasonable doubt." << endl;
                    sleep(3);
                }
                else
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m" 
                         << "This man has been accused of forcing a shop keeper to use risky dice making the shop keeper go bankrupt." << endl;
                    sleep(3);
                    cout << "The prosecution presents evidence of testimony along with bank statements from the shop keeper." << endl;
                    sleep(3); 
                    cout << "The defense argues that if defendent was capable of this crime, he would have been capable of killing the shop keeper." << endl;
                    sleep(3);
                }

                cout << endl << "\033[34m" << "Duke of Masadora: " << "\033[0m"
                         << "What is your ruling Your Magesty?";
                    sleep(3);
                    cout << endl << endl << "1.) Imprison the defendent"
                         << endl << "2.) Execute the defendent"
                         << endl << "3.) Sentence the defendent to hard labor"
                         << endl << "4.) Make a backdoor door with the defendent"
                         << endl << "5.) Rule the defendent not guilty" << endl;
                    sleep(4);
                    cin >> judicialChoice;

                    if(judicialChoice == 1)
                    {
                        cout << "\033[33m" << "Book: " << "\033[0m" 
                             << "The defendent will be imprisoned immediately." << endl;
                        sleep(3);
                        cout << "What a loser." << endl;
                        sleep(4);
                        instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
                    }
                    else if(judicialChoice == 2)
                    {
                        cout << "\033[33m" << "Book: " << "\033[0m" 
                             << "The defendent will be executed by firing squad." << endl;
                        sleep(3);
                        cout << "He won't be a problem anymore boss." << endl;
                        sleep(4);
                        instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
                    }
                    else if(judicialChoice == 3)
                    {
                        cout << "\033[33m" << "Book: " << "\033[0m" 
                             << "The defendent will be sentence to hard labor." << endl;
                        sleep(3);
                        cout << "That will show them boss!" << endl;
                        sleep(4);
                        instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
                    }
                    else if(judicialChoice == 4)
                    {
                        cout << "\033[33m" << "Book: " << "\033[0m" 
                             << "The defendent agreed to sign a debt contract in exchange for his innocence." << endl;
                        sleep(3);
                        yen = yen + 1250000;
                        cout << "The defendent paid you " << "\u00A5" << "1,250,000" << endl;
                        sleep(4);
                        cout << "You now have " << "\u00A5" << yen << endl;
                        sleep(4);
                        instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
                    }
                    else
                    {
                        cout << "\033[33m" << "Book: " << "\033[0m" 
                             << "The defendent is not guilty and will be freed!" << endl;
                        sleep(3);
                        instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
                    }
            }
            else
            {
                cout << endl << "\033[34m" << "Duke of Masadora: " << "\033[0m"
                     << "Goodbye, Your Magesty!" << endl;
                sleep(4);
                instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
            }

        }
        else
        {
            cout << endl << "\033[34m" << "Duke of Masadora's Secretary: " << "\033[0m"
                 << "I don't know who you are, but I want you gone." << endl;
            sleep(4);
            cout << "Guards!" << endl;
            sleep(3);
            cout << endl << "\033[33m" << "Book: " << "\033[0m"
                 << "Keep your cool " << name << "." << endl;
            sleep(3);
            cout << "The last thing you want to do is upset the king." << endl;
            sleep(4);
            cout << endl << "What do you want to do? " << endl << endl;
            sleep(3);
            cout << "1.) attack the guards" << endl;
            cout << "2.) cooperate with the guards and leave the facility" << endl;
            cin >> kingdomFacilityAnswer;
            
            if (kingdomFacilityAnswer == 1)
            {
                cout << endl;
                EndGame end;
                end.loseToKing(yen);
            }
            else
            {
                instance->townOfMasadora(name, yen, kingStatus,hasPlayedDeathDarts);
            }
        }
    }
    
    void MasadoraLocations::shop(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        MasadoraLocations* instance;
        int itemPurchased;
        int diceAnswer;
        cout << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
             << "Hello and welcome to my shop!" << endl;
        sleep(4);
        cout << "It appears that you have " << "\u00A5" << yen << endl;
        sleep(3);
        if (yen == 0)
        {
            cout << endl << "\033[34m" << "Shop Keeper: " << "\033[0m" 
                 << "I don't speak broke." << endl;
            sleep(3);
            cout << "Get out of my shop!" << endl << endl;
            sleep(3);
            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else
        {
            cout << endl << "\033[34m" << "Shop Keeper: " << "\033[0m" 
                 << "Currently in stock, we have..." << endl
                 << "1.) magic dice - " << "\u00A5" << "500,000" << endl
                 << "2.) audio books for Book - " << "\u00A5" << "2,000" << endl
                 << "3.) death note pages - " << "\u00A5" << "10,000,000" << endl
                 << "4.) ask the shopkeeper what his name is" << endl
                 << "5.) leave shop" << endl << endl;
            sleep(4);
            
            cout << "What would you like to purchase? ";
            sleep(1);
            cin >> itemPurchased;

            if(itemPurchased == 1)
            {
                if(yen >= 500000)
                {
                    yen = yen - 500000;
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You have purchased magic dice for " << "\u00A5" << "500,0000" << endl;
                    sleep(3);
                    cout << "You have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << " remaining";

                    cout << endl << endl << "\033[33m" << "Book: " << "\033[0m" << "The magic dice are scary boss.";
                    sleep(3);
                    cout << endl << endl << "The outcomes of magic dice are as follows: " << endl;
                    sleep(3);
                    cout << "If you roll a 6, you make " << "\u00A5" << "60,000,000." << endl;
                    sleep(3);
                    cout << "If you roll a 5, you make " << "\u00A5" << "30,000,000." << endl;
                    sleep(3);
                    cout << "If you roll a 4, you make " << "\u00A5" << "15,000,000." << endl;
                    sleep(3);
                    cout << "If you roll a 3, you make " << "\u00A5" << "7,500,000." << endl;
                    sleep(3);
                    cout << "If you roll a 2, you go bankrupt." << endl;
                    sleep(3);
                    cout << "If you roll a 1, you die.";
                    sleep(3);
                    cout << endl << endl << "What do you want to do?";
                    sleep(3);
                    cout << endl << endl << "1.) roll the magic dice" << endl;
                    cout << "2.) refund the magic dice" << endl;
                    cout << "3.) force the shop keeper to use the magic dice" << endl;
                    sleep(2);
                    cout << endl;
                    cin >> diceAnswer;
                    cout << endl;
                    if(diceAnswer == 1)
                    {
                        int diceRoll = rand() % 6 + 1;
                        
                        if(diceRoll == 1)
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a one boss." << endl;
                            sleep(3);
                            cout << "It was nice knowing you" << endl;
                            sleep(3);
                            EndGame end;
                            end.loseToDice();
                        }
                        else if(diceRoll == 2)
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a two boss." << endl;
                            sleep(3);
                            yen = 0;
                            cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl;
                            sleep(3);
                            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                        }
                        else if(diceRoll == 3)
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a three boss." << endl;
                            sleep(3);
                            yen = yen + 7500000;
                            cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl;
                            sleep(3);
                            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                        }
                        else if(diceRoll == 4)
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a four boss." << endl;
                            sleep(3);
                            yen = yen + 15000000;
                            cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl;
                            sleep(3);
                            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                        }
                        else if(diceRoll == 5)
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a five boss." << endl;
                            sleep(3);
                            yen = yen + 30000000;
                            cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl;
                            sleep(3);
                            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                        }
                        else
                        {
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "You rolled a six boss." << endl;
                            sleep(3);
                            cout << "Congratulations!" << endl;
                            sleep(2);
                            yen = yen + 60000000;
                            cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl;
                            sleep(3);
                            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                        }
                    }
                    else if(diceAnswer == 3)
                    {
                        cout << "\033[34m" << "Shop Keeper: " << "\033[0m" 
                             << "Okay fine just don't hurt me I'll do it..." << endl << endl;
                        sleep(3);
                        EndGame end;
                        end.loseToShopKeeper(yen);
                        
                    }
                    else
                    {
                        cout << "\033[34m" << "Shop Keeper: " << "\033[0m" 
                             << "Okay, I will refund the dice." << endl;
                        sleep(3);
                        yen = yen + 500000;
                        cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m";
                        sleep(3);
                        instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                    }
                }
                else
                {
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You can't afford it." << endl;
                    sleep(2);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else if(itemPurchased == 2)
            {
                if(yen >= 2000)
                {
                    int bookPurchased = rand() % 3 + 1;
                    yen = yen - 2000;
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You have purchased an audiobook for book for " << "\u00A5" << "2,000" << endl;
                    sleep(3);
                    cout << "You have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << " remaining" << endl;
                    sleep(3);
                    cout << "If you're a book worm, you should travel southeast and visit the library in Nork." << endl << endl;
                    sleep(3);

                    switch(bookPurchased)
                    {
                        case 1:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "Once upon a time, there was a speedy hare who loved to boast about his speed. " << endl;
                            sleep(4);
                            cout << "He would often tease the slow and steady tortoise, saying that he could never catch up." << endl;
                            sleep(4);
                            cout << "One day, the tortoise challenged the hare to a race. " << endl;
                            sleep(4);
                            cout << "The hare, feeling overconfident, accepted the challenge and took off at lightning speed. " << endl;
                            sleep(4);
                            cout << "However, the tortoise kept moving steadily, never stopping or slowing down." << endl;
                            sleep(4);
                            cout << "As the hare grew tired and decided to take a nap, the tortoise continued to inch closer and closer to the finish line." << endl; 
                            sleep(4);
                            cout << "When the hare finally woke up and realized what had happened, he saw the tortoise crossing the finish line first." << endl;
                            sleep(4);
                            cout << "From that day on, the hare learned the lesson that slow and steady wins the race, and he no longer boasted about his speed." << endl << endl;
                            sleep(4);
                            break;

                        case 2:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "Once upon a time, there were three little pigs who set out into the world to build their own homes." << endl;
                            sleep(4);
                            cout << "The first pig built his house out of straw, the second pig built his house out of sticks, and the third pig built his house out of bricks." << endl;
                            sleep(4);
                            cout << "One day, a hungry and cunning wolf came along, and he saw the three little pigs living in their homes." << endl;
                            sleep(4);
                            cout << "The wolf knew that he could easily blow down the houses made of straw and sticks, so he went after them first." << endl;
                            sleep(4);
                            cout << "The first and second pig were unable to defend their homes, and their houses were blown down in no time." << endl;
                            sleep(4);
                            cout << "But when the wolf arrived at the third pig's brick house, he found it to be too strong to blow down." << endl; 
                            sleep(4);
                            cout << "The third pig outsmarted the wolf by boiling a pot of water, and when the wolf tried to come down the chimney, he fell into the pot and was boiled alive." << endl;
                            sleep(4);
                            cout << "From that day on, the three little pigs lived happily ever after in their sturdy brick house, safe from any harm." << endl << endl;
                            sleep(4);
                            break;
                        
                        case 3:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "Once upon a time, in the land of England, there lived a legendary hero named Robin Hood." << endl;
                            sleep(4);
                            cout << "Robin and his band of Merry Men lived in Sherwood Forest, robbing from the rich to give to the poor." << endl;
                            sleep(4);
                            cout << "The corrupt Sheriff of Nottingham, who was appointed by the greedy Prince John, tried to capture Robin Hood and put an end to his thievery." << endl;
                            sleep(4);
                            cout << "But Robin Hood was clever and always managed to outwit the Sheriff." << endl;
                            sleep(4);
                            cout << "With his skillful archery and cunning tactics, Robin Hood became a symbol of hope and justice for the oppressed people of England." << endl;
                            sleep(4);
                            cout << "He fought for the rights of the poor and stood up against the corrupt rulers of his time." << endl; 
                            sleep(4);
                            cout << "Although Robin Hood was an outlaw, he was loved and respected by the people." << endl;
                            sleep(4);
                            cout << "His legacy continues to inspire and captivate people's hearts to this day." << endl << endl;
                            sleep(4);
                            break;

                        case 4:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "Once upon a time, there was a boy who was responsible for tending the village's flock of sheep." << endl;
                            sleep(4);
                            cout << "He liked to play pranks on the villagers and would shout, \"Wolf! Wolf!\" even when there was no wolf." << endl;
                            sleep(4);
                            cout << "Time and time again, the villagers would rush to help him, but there was never a wolf. " << endl;
                            sleep(4);
                            cout << "One day, a real wolf appeared, but the boy cried out for help, the villagers didn't believe him. " << endl;
                            sleep(4);
                            cout << " The wolf attacked the flock of sheep, and the boy learned the consequences of lying." << endl << endl;
                            sleep(4);
                            break;

                        default:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "I'm not in the mood to read you a book." << endl << endl;
                            sleep(4);
                            break;
                    }
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
                else
                {
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You can't afford it." << endl;
                    sleep(2);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else if(itemPurchased == 3)
            {
                if(yen >= 10000000)
                {
                    yen = yen - 10000000;
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You have purchased a death note page for " << "\u00A5" << "10,000,000" << endl;
                    sleep(3);
                    cout << "You have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << " remaining";
                }
                else
                {
                    cout << endl << endl << "\033[34m" << "Shop Keeper: " << "\033[0m"
                         << "You can't afford it." << endl;
                    sleep(2);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else if(itemPurchased == 4)
            {
                cout << "\033[34m" << "Shop Keeper: " << "\033[0m" << "Don't ask what what my name is you imbecile." << endl;
                sleep(3);
                cout << "Get the hell out of my store!" << endl;
                sleep(3);
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            }
            else
            {
                cout << "\033[34m" << "Shop Keeper: " << "\033[0m" << "Unbelieveable";
                sleep(2);
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            }
        }
    }
    void MasadoraLocations::bar(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        MasadoraLocations* instance;
        int answer;
        int gameChoice;
        int randomNumber = rand() % 7 + 1;

        if(hasPlayedDeathDarts != true)
        {
            cout << endl << "\033[31m" << "Bar Tender: " << "\033[0m"
                << "Welcome to the Quindecim." << endl;
            sleep(3);
            cout << "My name is Decim." << endl << endl;
            sleep(3);
            cout << "\033[31m" << "Decim: " << "\033[0m"
                << "What can I do for you " << name << "? " << endl
                << "1.) Buy Drink for " << "\u00A5" << "800" << endl
                << "2.) Participate in a game" << endl
                << "3.) Leave Bar" << endl;
            cin >> answer;
            cout << endl;
            if(answer == 1)
            {
                if(yen >= 800)
                {
                    cout << "\033[31m" << "Decim: " << "\033[0m";

                    switch(randomNumber) 
                    {
                        case 1:
                            cout << "I made you a Black Cosmos:" << endl
                                << "A dark cocktail made with rum, black raspberry liqueur, and blackcurrant syrup." << endl;
                            break;
                        case 2:
                            cout << "I made you a Moscow Mule:" << endl
                                << "A classic cocktail made with vodka, ginger beer, and lime juice" << endl;
                            break;
                        case 3:
                            cout << "I made you a Gimlet:" << endl
                                << "A simple cocktail made with gin and lime juice." << endl;
                            break;
                        case 4:
                            cout << "I made you a Margarita:" << endl
                                << "A classic cocktail made with tequila, lime juice, and triple sec." << endl;
                            break;
                        case 5:
                            cout << "I made you an Old Fashioned:" << endl
                                << "A classic whiskey cocktail made with sugar, bitters, and a citrus peel." << endl;
                            break;
                        case 6:
                            cout << "I made you a Martini:" << endl
                                << "A classic cocktail made with gin or vodka and vermouth." << endl;
                            break;
                        case 7:
                            cout << "I made you a Bloody Mary:" << endl
                                << "A spicy cocktail made with vodka, tomato juice, and various seasonings." << endl;
                            break;
                        default:
                            cout << "I made you a Black Cosomos:" << endl
                                << "A dark cocktail made with rum, black raspberry liqueur, and blackcurrant syrup." << endl;
                    }
                    sleep(4);
                    yen = yen - 800;
                    
                    cout << endl << "\033[31m" << "Decim: " << "\033[0m"
                        << "It seems as though you have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << " remaining." << endl << endl;
                    sleep(4);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
                else
                {
                    cout << "\033[31m" << "Decim: " << "\033[0m"
                        << "There isn't enough here for you to buy a drink." << endl;
                    sleep(4);
                    cout << "My drinks are " << "\u00A5" << "800, and you've only brought forth " << "\u00A5" << yen << "." << endl;
                    sleep(5);
                    cout << endl;
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else if (answer == 2)
            {
                hasPlayedDeathDarts = true;

                cout << "\033[31m" << "Decim: " << "\033[0m"
                    << "Very well then... the lovely lady on the other side of the bar shall be your opponent." << endl;
                sleep(4);
                cout <<  "The game the two of you will be playing is Death Darts!" << endl;
                sleep(4);
                cout << endl << "\033[31m" << "Decim: " << "\033[0m"
                    << "Each of you will receive one dart and the player with the highest score will be determined as the winner." << endl;
                sleep(4);
                cout << "The reason the game is called Death Darts is because the higher your score, the more pain that will be inflicted on your opponent." << endl;
                sleep(4);
                cout << "For example, a mediocre shot might result in your openent losing a tooth, but a bullseye might result in the decapitation of you opponent." << endl;
                sleep(4);
                cout << endl << endl;
                cout << "\033[33m" << "Book: " << "\033[0m"
                    << "It appears as though you're up first." << endl;
                sleep(3);
                cout << "That girl looks about as scared a kitten in a jungle full of tigers." << endl;
                sleep(3);
                cout << "I wonder what Decim is plotting." << endl;
                sleep(4);
                cout << endl << "What do you wish to do?" << endl
                    << "1.) Aim for bullseye." << endl
                    << "2.) Aim for a low score" << endl
                    << "3.) Throw the dart at the ground" << endl;
                cin >> gameChoice;

                if(gameChoice == 1)
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m"
                        << "Wow, you actually managed to hit a bullseye!" << endl;
                    sleep(4);
                    cout << endl << "\033[31m" << "Decim: " << "\033[0m"
                        << "Pathetic..." << endl;
                    sleep(2);
                    cout << "You killed a lovely girl for what?  To win a game a darts?" << endl << endl;
                    sleep(3);
                    EndGame end;
                    end.loseToDecim();
                }
                else
                {
                    cout << endl << "\033[33m" << "Book: " << "\033[0m"
                        << "You missed the dart board, but as soon as you missed, your opponent threw her dart at the ground.";
                    sleep(4);
                    cout << endl << endl << "\033[31m" << "Decim: " << "\033[0m"
                        << "It is with great honor that I announce a lack of a winner." << endl;
                    sleep(4);
                    cout << "I may appear human, but I am actually an arbiter, a creature born with the task of testing the souls of humans.";
                    sleep(4);
                    cout << endl << "The purpose of this game was to determine whether or not the two of you possessed souls worthy of existence.";
                    sleep(4);
                    cout << endl << "You both passed, so I have decided to award both of you with " << "\u00A5" << "1,000,000 yen.";
                    sleep(4);
                    cout << endl << "Had either of you failed, I would have been forced to cast your soul into the void, rendering you nonexistent.";
                    yen = yen + 1000000;
                    sleep(4);
                    cout << endl << endl << "\033[35m" << "Kind Girl: " << "\033[0m"
                        << "Thank you so much for refraining from hurting me " << name << "." << endl;
                    sleep(4);
                    cout << "It makes me feel warm knowing that not everybody on this island is bad!" << endl;
                    sleep(4);
                    cout << endl << "\033[33m" << "Book: " << "\033[0m"
                        << "Yeahhhhhh Peace and Love Maaaaaan" << endl;
                    sleep(4);
                    cout << "You now have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << endl << endl;
                    sleep(4);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else
            {
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            }
        }
        else
        {
            cout << endl << "\033[31m" << "Decim: " << "\033[0m"
                 << "Welcome to the Quindecim.";
            sleep(3);
            cout << endl << endl << "\033[31m" << "Decim: " << "\033[0m"
                 << "What can I do for you " << name << "? " << endl
                 << "1.) Buy Drink for " << "\u00A5" << "800" << endl
                 << "2.) Leave Bar" << endl;
            cin >> answer;
            cout << endl;

            if(answer == 1)
            {
                if(yen >= 800)
                {
                    cout << "\033[31m" << "Decim: " << "\033[0m";

                    switch(randomNumber) 
                    {
                        case 1:
                            cout << "I made you a Black Cosmos:" << endl
                                << "A dark cocktail made with rum, black raspberry liqueur, and blackcurrant syrup." << endl;
                            break;
                        case 2:
                            cout << "I made you a Moscow Mule:" << endl
                                << "A classic cocktail made with vodka, ginger beer, and lime juice" << endl;
                            break;
                        case 3:
                            cout << "I made you a Gimlet:" << endl
                                << "A simple cocktail made with gin and lime juice." << endl;
                            break;
                        case 4:
                            cout << "I made you a Margarita:" << endl
                                << "A classic cocktail made with tequila, lime juice, and triple sec." << endl;
                            break;
                        case 5:
                            cout << "I made you an Old Fashioned:" << endl
                                << "A classic whiskey cocktail made with sugar, bitters, and a citrus peel." << endl;
                            break;
                        case 6:
                            cout << "I made you a Martini:" << endl
                                << "A classic cocktail made with gin or vodka and vermouth." << endl;
                            break;
                        case 7:
                            cout << "I made you a Bloody Mary:" << endl
                                << "A spicy cocktail made with vodka, tomato juice, and various seasonings." << endl;
                            break;
                        default:
                            cout << "I made you a Black Cosomos:" << endl
                                << "A dark cocktail made with rum, black raspberry liqueur, and blackcurrant syrup." << endl;
                    }
                    sleep(4);
                    yen = yen - 800;
                    
                    cout << endl << "\033[31m" << "Decim: " << "\033[0m"
                        << "It seems as though you have " << "\033[32m" << "\u00A5" << yen << "\033[0m" << " remaining." << endl << endl;
                    sleep(4);
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
                else
                {
                    cout << "\033[31m" << "Decim: " << "\033[0m"
                        << "There isn't enough here for you to buy a drink." << endl;
                    sleep(4);
                    cout << "My drinks are " << "\u00A5" << "800, and you've only brought forth " << "\u00A5" << yen << "." << endl;
                    sleep(5);
                    cout << endl;
                    instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
                }
            }
            else
            {
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            } 
        }
    }
    void MasadoraLocations::rockPaperScissorsArena(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        MasadoraLocations* instance;
        int gameChoice;
        int rockPaperScissors;
        string opponentRockPaperScissors;
        int betAmount;
        string opponentName;
        int choicePicker = rand() % 3 + 1;
        int opponentPicker = rand() % 9 + 1;

        if(opponentPicker == 1)
        {
            opponentName = "Matthew Orien";
        }
        else if(opponentPicker == 2)
        {
            opponentName = "Myles Westmont";
        }
        else if(opponentPicker == 3)
        {
            opponentName = "Katy Cunnington";
        }
        else if(opponentPicker == 4)
        {
            opponentName = "Isaiah Asher";
        }
        else if(opponentPicker == 5)
        {
            opponentName = "Hisoka Wasabi";
        }
        else if(opponentPicker == 6)
        {
            opponentName = "Amelia Rose";
        }
        else if(opponentPicker == 7)
        {
            opponentName = "Anakin Yagami";
        }
        else if(opponentPicker == 8)
        {
            opponentName = "Yumiko Bakugo";
        }
        else if(opponentPicker == 8)
        {
            opponentName = "Shady Dogg";
        }

        cout << "\033[34m" << "Game Master: " << "\033[0m"
             << "Welcome to the Jan Ken Arena!";
        sleep(4);
        cout << endl << "Would you like to particpate in a cash game?";
        sleep(3);
        cout << endl << endl << "1.) Bet your yen against another player in a cash game" << endl
             << "2.) Leave Jan Ken Arena" << endl;
        cin >> gameChoice;

        if(gameChoice == 1)
        {
            cout << "You have " << "\u00A5" << yen;
            sleep(3);
            cout << endl << "How much do you want to bet " << name << "? ";
            cin >> betAmount;
            if(betAmount > yen)
            {
                cout << "Like I said, you only have " << "\u00A5" << yen;
                sleep(3);
                cout << "If you're going to waste my time, get out!" << endl;
                sleep(3);
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            }
            else
            {
                cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                     << "You have bet " << "\u00A5" << betAmount;
                sleep(3);
                cout << endl << "You will be playing against " << opponentName << ".";
                sleep(3);
                cout << endl << endl << "\033[33m" << "Book: " << "\033[0m"
                     << "\u00A5" << (betAmount * 2) << " is at stake here boss.";
                sleep(4);
                cout << endl << "What are you going to choose?" << endl
                     << "1.) rock" << endl
                    << "2.) paper" << endl
                    << "3.) scissors" << endl;
                cin >> rockPaperScissors;

                //Gets opponents decision
                if(choicePicker == 1)
                {
                    opponentRockPaperScissors = "rock";
                }
                else if(choicePicker == 2)
                {
                    opponentRockPaperScissors = "paper";
                }
                else
                {
                    opponentRockPaperScissors = "scissors";
                }

                if(opponentRockPaperScissors == "rock" && rockPaperScissors == 2)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose paper and your opponent, " << opponentName << ", chose rock.";
                    sleep(4);
                    cout << endl << "Congratulations, you win " << "\u00A5" << betAmount << "!";
                    yen = yen + betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else if(opponentRockPaperScissors == "rock" && rockPaperScissors == 3)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose scissors and your opponent, " << opponentName << ", chose rock.";
                    sleep(4);
                    cout << endl << "You lose " << "\u00A5" << betAmount << "!";
                    yen = yen - betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else if(opponentRockPaperScissors == "scissors" && rockPaperScissors == 2)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose paper and your opponent, " << opponentName << ", chose scissors.";
                    sleep(4);
                    cout << endl << "You lose " << "\u00A5" << betAmount << "!";
                    yen = yen - betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else if(opponentRockPaperScissors == "scissors" && rockPaperScissors == 1)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose rock and your opponent, " << opponentName << ", chose scissors.";
                    sleep(4);
                    cout << endl << "Congratulations, you win " << "\u00A5" << betAmount << "!";
                    yen = yen + betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else if(opponentRockPaperScissors == "paper" && rockPaperScissors == 1)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose rock and your opponent, " << opponentName << ", chose paper.";
                    sleep(4);
                    cout << endl << "You lose " << "\u00A5" << betAmount << "!";
                    yen = yen - betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else if(opponentRockPaperScissors == "paper" && rockPaperScissors == 3)
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You chose scissors and your opponent, " << opponentName << ", chose paper.";
                    sleep(4);
                    cout << endl << "Congratulations, you win " << "\u00A5" << betAmount << "!";
                    yen = yen + betAmount;
                    sleep(4);
                    cout << endl << "You now have " << "\u00A5" << yen << ".";
                    sleep(3);
                    cout << endl << endl;
                }
                else
                {
                    cout << endl << "\033[34m" << "Game Master: " << "\033[0m" 
                         << "You and your opponent both chose " << opponentRockPaperScissors << ".";
                    sleep(4);
                    cout << endl << "No money changes hands.";
                    sleep(3);
                    cout << endl << endl;
                }
                instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
            }
        }
        else
        {
            instance->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
        }

    }
    void MasadoraLocations::townOfMasadora(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        int answer;
        MasadoraLocations* instance;
        cout << "Where do you wish to go?" << endl
                 << "1.) Shop" << endl
                 << "2.) Bar" << endl
                 << "3.) Rock Paper Scissors Arena" << endl
                 << "4.) Supreme Office of Masadora" << endl
                 << "5.) Leave Masadora" << endl;
        cin >> answer;

        if(answer == 1) 
        {
             instance->shop(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(answer == 2)
        {
             instance->bar(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(answer == 3)
        {
            instance->rockPaperScissorsArena(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(answer == 4)
        {
            instance->kingdomFacilityMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else
        {
            return; 
        }
    }