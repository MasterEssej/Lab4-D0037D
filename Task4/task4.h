#pragma once
#include <iostream>
#include <string>
using namespace std;

class Card
{
public:
	int nsuit = 0;	// Not used in this task
	int nrank = 0;	// Not used in this task
	string suit;
	string rank;
	string joker;
	bool bjoker = false;
	Card()
	{
		joker = "joker";
		bjoker = true;
	}
	Card(int trank, int tsuit)
	{
		nrank = trank;
		if (trank < 2)
		{
			rank = "Ace";
		}
		else if (trank >= 2 && trank <= 10)
		{
			rank = to_string(trank);
		}
		else if (trank > 10)
		{
			switch (trank)
			{
			case 11:
				rank = "Jack";
				break;
			case 12:
				rank = "Queen";
				break;
			case 13:
				rank = "King";
				break;
			}
		}
		nsuit = tsuit;
		switch (tsuit)
		{
		case 1:
			suit = "clubs";
			break;
		case 2:
			suit = "diamonds";
			break;
		case 3:
			suit = "hearts";
			break;
		case 4:
			suit = "spades";
			break;
		}
	}
	void print();
};

class CardDeck
{
public:
	Card* carr[55];
	CardDeck()
	{
		int i = 0;
		for (int r = 1; r < 14; r++)
		{
			for (int s = 1; s < 5; s++, i++)
			{
				carr[i] = new Card(r, s);
			}
		}
		for (int j = 0; j < 3; j++, i++)
		{
			carr[i] = new Card;
		}
	}
	void print();
};