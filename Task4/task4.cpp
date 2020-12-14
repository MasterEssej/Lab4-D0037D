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
	for (int i = 0; i < 55; i++)
	{
		carr[i]->print();
	}

}

int main()
{
	CardDeck deck;
	deck.print();

	return 0;
}