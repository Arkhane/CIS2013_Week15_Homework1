#include <iostream>
#include <string>

using namespace std;

class Card 
{
private:
	string name;
	string suit;
	int value;
	bool isUsed;
	

public:

	Card();
	Card(string n, string s, int v, bool u);
	~Card();

	void setName(string);
	void setSuit(string);
	void setValue(int);
	void setUsed(bool);

	string getName();
	string getSuit();
	int getValue();
	bool getUsed();
};
