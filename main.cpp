#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "Card.h"

using namespace std;

int RandomCard()
{
	return (rand() % 52) + 1;
}

int main()
{
	string name;
	int randCard = 0;
	char call;

	srand(time(0));

	Player Dealer;

	Dealer.setName = "Dealer";

	cout << Dealer.getName;
}