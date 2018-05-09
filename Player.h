#include <iostream>
#include <string>

using namespace std;

class Player 
{
private:
	string playerHand[10];
	string playerName;
	bool playerCall;
	int score;

public:
	Player();
	Player(string hand, string name, bool call);
	~Player();

	void setName(string);
	void setCall(bool);
	void setScore(int);

	string getName();
	bool getCall();
	int getScore();

};