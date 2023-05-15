    #include <iostream>
    #include <string>
    #include <unistd.h>
    
    #include "masadoraLocations.h"
    #include "norkLocations.h"
    #include "endGame.h"
    #include "playerTraveling.h"

    using namespace std;
    
    void PlayerTraveling::travel(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts)
    {
        PlayerTraveling* player = nullptr;
        MasadoraLocations* instanceMasadora = nullptr;
        NorkLocations* instanceNork = nullptr;
        string direction;

        cout << "\033[33m" << "Book: " "\033[0m"
             << "Which direction would you like to travel in " << name << "? (N/NE/NW/S/SE/SW/W/E) ";
        cin >> direction;

        if(direction == "n" || direction == "N" || direction == "north" || direction == "North")
        {
            cout << "Traveling north to the city of Masadora...";
            sleep(3);
            cout << endl << endl << "\033[33m" << "Book: " "\033[0m"
                 << "Welcome to the city of Masadora " << name << "!" << endl;
            sleep(3);
            instanceMasadora->townOfMasadora(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(direction == "ne" || direction == "NE" || direction == "Ne" || direction =="nE" || direction == "north east" || direction == "North East")
        {
            if (kingStatus == true)
            {
                cout << "Traveling north east to ";  //Mobster Lounge, Execution Facilities, Lucky Dice Facility
            }
            else
            {
                cout << "Taveling north east to " << endl;
                sleep(3);
                cout << "As you were traveling to..., you came across a bridge lined with armed men." << endl;
                sleep(3);
                if(kingStatus == false)
                {
                    cout << "The men refused to let you in..." << endl;
                    player->travel(name, yen, kingStatus, hasPlayedDeathDarts);
                }

            }

        }
        else if(direction == "nw" || direction == "NW" || direction == "Nw" || direction =="nW" || direction == "north west" || direction == "North West")
        {
            cout << "Traveling north west to the City of Michu"; //Shop, Bank, Kingdom Facility, Car Dealership, Yaught Dock, KING(Colleseum(Quiddetch Events or Cross Species Death Matches))
        }
        else if(direction == "sw" || direction == "SW" || direction == "Sw" || direction =="sW" || direction == "south west" || direction == "South West")
        {
            cout << "Traveling south west to Herstone";  //Shinogami Club(Ryuk, trivia, drink), The Misa Misa Show, SHINOGOMI EYES(Ryuk's Apartment and DeathNote and Co.)
        }
        else if(direction == "se" || direction == "SE" || direction == "Se" || direction =="sE" || direction == "south east" || direction == "South East")
        {
            cout << "Traveling south east to the city of Nork"; //Library, Theatre, Schrutte Paper Co., Kingdom Facility, KING(Strip Club or School)
            sleep(3);
            cout << endl << endl << "\033[33m" << "Book: " "\033[0m"
                 << "Welcome to the city of Nork " << name << "!" << endl;
            sleep(3);
            instanceNork->townOfNork(name, yen, kingStatus, hasPlayedDeathDarts);
        }
        else if(direction == "e" || direction == "E" || direction == "east" || direction == "East")
        {
            cout << "Travleing east to the village of Konaha"; //Ramen Shop, Ninja Academy, Shinobi Stadium, Hokage Estate(Death Note(execute hokage))
        }
        else if(direction == "w" || direction == "W" || direction == "west" || direction == "West")
        {
            cout << "Traveling west to the city of Pandora"; //Shop, Bank, Casino, Horse Tracks, Car Dealership, Yaught Dealership, Private Jet Dealership
        }
        else if(direction == "s" || direction == "S" || direction == "south" || direction == "South")
        {
            cout << "Travleing south to the capital city of Albion"; //Castle, The Supreme Court of Albion, Producer Suite, Facilities(view garage, use yaught, fly on jet), KING(REAVER ENTERTAINMENT or REAL ESTATE MANAGEMENT FACILITY)
        }
        else
        {
            EndGame end;
            end.loseToPlayer();
        }
    }