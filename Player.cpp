#include "Player.h"
using namespace std;

Player::Player() 
{
	playerHand[10];
	playerName = "Arkhane";
	playerCall = false;
	score = 0;
	
}

Player::Player(string h, string n, bool c) 
{
	playerHand[0] = h;
	playerName = n;
	playerCall = c;
}

Player::~Player() 
{

}

void Player::setName(string n) 
{
	name = n;
}

string Player::getName() 
{
	return name;
}

void Player::setCall(bool c) 
{
	playerCall = c;
}

bool Player::getCall() 
{
	return playerCall;
}

void Player::setScore(int s) 
{
	score += s;
}

int Player::getScore() 
{
	return score;
}

