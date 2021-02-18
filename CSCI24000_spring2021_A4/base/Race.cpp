#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include "Horse.h"
#include "Race.h"

//import
Horse advance;

//private
    int win = 0; //1 if race has been won
    int length = 15;

//public
//display race on screen
void Race::printLane(int horseNum) {
    //int j = h[horseNum].getPosition();
    int k;
    int l;
    int p = (length / 2)+1;

        for (k = p - (h[horseNum].getPosition()); k < 8; k++) {
            std::cout << ".";
        }
        std::cout << horseNum;
        for (l = (h[horseNum].getPosition()) - p; l < 8; l++) {
            std::cout << ".";
        }

        std::cout << "\n";

};
//detect if somone has won
void Race::detectWin() {
    int i = 0;
    for (i = 0; i < 5; i++) {
        //std::cout << h[i].getPosition();
        if (h[i].getPosition() > length) {
            win = 1;
            std::cout << "Horse " << i << " wins!";
        }
    }
};

//create the seed
void Race::makeSeed() {
    int s;
    std::cout << "Enter seed: ";
    std::cin >> s;
    srand(s);
};

//start race
void Race::start() {
    int n = 0;
    Race::makeSeed();
    while (win == 0) {
        std::cin.ignore();
        for (n = 0; n < 5; n++) {
            h[n].advance();
            Race::printLane(n);
        }
        Race::detectWin();
    }
};
