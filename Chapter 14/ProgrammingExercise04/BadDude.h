#pragma once

#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude(string firstName, string lastName, int gunNotches) :
		Gunslinger(firstName, lastName, gunNotches),
		PokerPlayer(firstName, lastName),
		Person::Person(firstName, lastName) { }

	BadDude(const Gunslinger& gunslinger, const PokerPlayer& pokerPlayer) : Gunslinger(gunslinger), PokerPlayer(pokerPlayer) { }

	double Gdraw() const { return Gunslinger::Draw(); }
	int Cdraw() const { return PokerPlayer::Draw(); }
	virtual void Show() const;
};