//
// Created by Di Wang on 2019-01-22.
//

#include "State.h"

#include <iostream>

using std::cout;
using std::endl;

State::State(string inputString) {
    // TODO(wddddds): finish this function.
}

State::State(vector<Card> cardList) {
    mCardList = cardList;
}

int State::heuristic() {
    // TODO(wddddds)
    return 0;
}

void State::printState() {
    cout << "wddddds" << endl;
}
