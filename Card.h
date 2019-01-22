//
// Created by Di Wang on 2019-01-22.
//

#ifndef PAIR_SOLITAIRE_CARD_H
#define PAIR_SOLITAIRE_CARD_H


#include <cstdint>

class Card {
public:
    Card(int suit, int rank);

    int getSuit();
    int getRank();
private:
    uint8_t mValue;
};


#endif //PAIR_SOLITAIRE_CARD_H
