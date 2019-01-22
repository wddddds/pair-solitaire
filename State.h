//
// Created by Di Wang on 2019-01-22.
//

#ifndef PAIR_SOLITAIRE_STATE_H
#define PAIR_SOLITAIRE_STATE_H

#include <string>
#include <vector>

#include "Card.h"

using std::string;
using std::vector;

class State {
public:
    State(string inputString);
    State(vector<Card> cardList);

    void eliminate(int index);
    int heuristic();

    void printState();
private:
    vector<Card> mCardList;
};


#endif //PAIR_SOLITAIRE_STATE_H
