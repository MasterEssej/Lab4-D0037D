#include <iostream>
#include <string>
#include "task4.h"
using namespace std;

void Card::print()
{
	if (bjoker == true)
	{
		cout << joker << endl;
	}
	else
	{
		cout << rank << " of " << suit << endl;
	}
}

void CardDeck::print()
{
	int spacing = 1;
	cout << "Deck includes:" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < 55; i++, spacing++)
	{
		carr[i]->print();
		if (spacing == 4)
		{
			cout << endl;
			spacing = 0;
		}
	}
	cout << "-------------------" << endl;
}

int main()
{
	CardDeck deck;
	deck.print();

	return 0;
}