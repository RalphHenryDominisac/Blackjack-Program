#include <iostream>
using namespace std;
int main ()
{
int ace = 1;
int sum, card1, card2, card3;


cin >> card1 >> card2 >> card3;
// Face cards statements
if (card1 > 10)
{
	card1 = 10;
}

if (card2 > 10)
{
	card2 = 10;
}

if (card3 > 10)
{
	card3 = 10;
}

// Aces if statements
if (card1 == ace) {
	card1 = 11;
	sum = card1 + card2 + card3;
	if (sum > 21)
	{
		card1 = 1;
	}
	
}

if (card2 == ace) {
	card2 = 11;
	sum = card1 + card2 + card3;
	if (sum > 21)
	{
		card2 = 1;
	}
	
}

if (card3 == ace) {
	card3 = 11;
	sum = card1 + card2 + card3;
	if (sum > 21)
	{
		card3 = 1;
	}
	
}

sum = card1 + card2 + card3;
cout << "The card value is " << sum << endl;

	return 0;
}

