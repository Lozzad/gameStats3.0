//Game Stats 3

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS; //all caps means constant
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE}; //enumerator = set of uint constants (0, 1, 2...). 
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; //not assigned = previous++
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";

    return 0;
}

