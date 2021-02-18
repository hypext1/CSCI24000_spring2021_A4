Object Horse:
private:
holds an int "position"
public:
void advance(); adds 1 to int at random when called
int getPosition(); returns position

Object Race:
private:
Accepts object horse
holds int for if race is won
holds int for length of track
public:
void printLane(int horseNum); prints a lane for horseNum
void detectWin(); detects if race is won
void makeSeed(); makes seed for race
void start(); starts the race

Main:
runs start function
