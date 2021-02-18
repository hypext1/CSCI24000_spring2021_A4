#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include "Horse.h"
#include "Race.h"

//private

//public
    //Horse constructor
    Horse::Horse() {
        Horse::position = 0;
    }

    //randomly move horses forward
    void Horse::advance() {
        int r1;
        r1 = rand() % 10;
        if (r1 % 2 == 0) {
            Horse::position = Horse::getPosition() + 1;
        }
    };

    //get horses position
    int Horse::getPosition(){
        return position;
    };
