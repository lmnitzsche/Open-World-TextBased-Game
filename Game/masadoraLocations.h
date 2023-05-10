#ifndef MASADORALOCATIONS_H
#define MASADORALOCATIONS_H
using namespace std;

class MasadoraLocations
{
public:
    void kingdomFacilityMasadora(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts);
    void shop(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts);
    void bar(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts);
    void rockPaperScissorsArena(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts);
    void townOfMasadora(string name, int& yen, bool kingStatus, bool& hasPlayedDeathDarts);
};

#endif