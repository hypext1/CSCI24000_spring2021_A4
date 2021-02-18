#pragma once
#ifndef RACE_H
#define RACE_H
#include "Horse.h"

class Race {
private:
	Horse h[5];
	int win;
	int length = 15;
public:
	void printLane(int horseNum);
	void detectWin();
	void makeSeed();
	void start();
};

#endif
