#ifndef ENDGAME_H
#define ENDGAME_H

class EndGame {
public:
    static void loseToGame();
    static void loseToSailor();
    static void loseToPlayer();
    static void loseToDecim();
    static void loseToDice();
    static void loseToShopKeeper(int& yen);
    static void loseToKing(int& yen);
    static void winJapan();
    static void winAmerica();
};

#endif