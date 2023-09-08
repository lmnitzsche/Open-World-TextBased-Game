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
        int bookPurchased;

        cout << endl << "\033[34m" << "Librarian: " << "\033[0m"
             << "Hello and welcome to the Nietzsche Library of Nork " << name << "!" << endl;
        sleep(4);
        cout << "Here you can expand your knowledge and the best part..." << endl;
        sleep(4);
        cout << "It's absolutely free!" << endl;
        sleep(4);
        cout << "What piece of literature would you like to checkout " << name << "?" << endl;
        sleep(3);
        cout << endl << "1.) Aesop's \"The Tortoise and the Hare\"" << endl
             << "2.) James Halliwell-Phillipp's \"The Three Little Pigs\"" << endl
             << "3.) Howard Pyle's \"Robin Hood\"" << endl
             << "4.) Aesop's \"The Boy Who Cried Wolf\"" << endl
             << "5.) Robert Browning's \"The Pied Piper of Hamelin\"" << endl
             << "6.) Edgar Allan Poe's \"A Tell-Tale Heart\"" << endl
             << "7.) Joseph Jacob's \"Jack and the Beanstalk\"";
        cin >> bookPurchased;
        cout << endl;

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

                        case 5:
                            cout << "\033[33m" << "Book: " << "\033[0m" 
                                 << "In the town of Hamelin, a plague of rats infested the streets, causing chaos and disease." << endl;
                            sleep(4);
                            cout << "The desperate townspeople tried everything to get rid of the rats but failed, until a mysterious piper arrived." << endl;
                            sleep(4);
                            cout << "The piper, dressed in colorful attire and carrying a magical flute, promised to rid the town of rats for a fee." << endl;
                            sleep(4);
                            cout << "He played a haunting tune that enchanted the rats, and they followed him to the Weser River, where they drowned." << endl;
                            sleep(4);
                            cout << "However, when the townspeople refused to pay the piper as promised, he played another tune." << endl;
                            sleep(4);
                            cout << "This time, it was the children of Hamelin who were enchanted, and they followed him into a hidden mountain cave." << endl;
                            sleep(4);
                            cout << "The piper sealed the cave, and the children were never seen again, except for one who was deaf and could not hear the music." << endl;
                            sleep(4);
                            cout << "The tale of the Pied Piper of Hamelin serves as a warning about the consequences of breaking promises." << endl << endl;
                            sleep(4);
                            break;

                            
                        case 6:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "In a gloomy and eerie old house, the narrator tells a chilling tale of madness and murder." << endl;
                            sleep(4);
                            cout << "He insists that he is not mad and is driven to murder an old man with a pale blue eye that haunts him." << endl;
                            sleep(4);
                            cout << "The narrator's obsession with the eye grows until he cannot bear it any longer." << endl;
                            sleep(4);
                            cout << "One night, he enters the old man's room and kills him, dismembering the body and hiding it beneath the floorboards." << endl;
                            sleep(4);
                            cout << "The narrator believes he has committed the perfect crime, but his guilt manifests as a relentless sound, a heartbeat." << endl;
                            sleep(4);
                            cout << "The sound grows louder and louder, tormenting him until he confesses to the murder, convinced that the officers can hear it too." << endl;
                            sleep(4);
                            cout << "The Tell-Tale Heart is a chilling exploration of guilt, paranoia, and the descent into madness." << endl << endl;
                            sleep(4);
                            break;
                        case 7:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "Once upon a time, there lived a poor boy named Jack who lived with his mother." << endl;
                            sleep(4);
                            cout << "They were so poor that they had to sell their only cow, Milky White." << endl;
                            sleep(4);
                            cout << "But instead of money, Jack traded Milky White for a handful of magical beans from a mysterious old man." << endl;
                            sleep(4);
                            cout << "His mother was furious and threw the beans out the window." << endl;
                            sleep(4);
                            cout << "Overnight, a gigantic beanstalk grew outside their house, reaching up into the sky." << endl;
                            sleep(4);
                            cout << "Curious and determined, Jack decided to climb the beanstalk." << endl;
                            sleep(4);
                            cout << "At the top, he discovered a magical land in the clouds, inhabited by a fierce giant." << endl;
                            sleep(4);
                            cout << "Jack encountered the giant's castle and, with cunning, managed to steal treasures and escape." << endl;
                            sleep(4);
                            cout << "He climbed down the beanstalk with the treasures, and he and his mother lived happily ever after." << endl << endl;
                            sleep(4);
                            break;


                        default:
                            cout << "\033[33m" << "Book: " << "\033[0m"
                                 << "I'm not in the mood to read you a book." << endl 
                                 << "Let's ditch this joint already you nerd!" << endl << endl;
                            sleep(4);
                            break;
                    }
                    instance->townOfNork(name, yen, kingStatus, hasPlayedDeathDarts);
                
    }