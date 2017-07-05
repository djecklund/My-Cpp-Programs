//============================================================================
// Name        : FlipACoin.cpp
// Author      : Dillon Ecklund
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// This class contains all the functions for flipping a coin
class FlipACoin{
private:
	int numHeads;
	int numTails;
	int sideUp;
	double headsAverage;
	double tailsAverage;
public:
	FlipACoin(){
		numHeads = 0;
		numTails = 0;
		headsAverage = 0.0;
		tailsAverage = 0.0;
	}

	void flipACoin(int numTimesFlipped){

		srand(time(0));

		// Flip the coin how ever many times the user specifies
		for(int i = 1; i <= numTimesFlipped; i++){

			sideUp = 1 + (rand()%2);

			switch(sideUp){
				case 1:
					cout << "Flip # " << i << " Heads" << endl;
					numHeads++;
					break;
				case 2:
					cout << "Flip # " << i << " Tails" << endl;
					numTails++;
					break;
			}

		}


		// Show results of how many times the coin landed on heads and tails
		cout << endl;
		cout << "The number of times the coin landed on heads was: " << numHeads << endl;
		cout << "The number of times the coin landed on tails was: " << numTails << endl;
		cout << endl;

		// Calculate the averages for heads and tails
		headsAverage = ((1.0 * numHeads) / numTimesFlipped) * 100;
		tailsAverage = ((1.0 * numTails) / numTimesFlipped) * 100;
		// End of average calculations

		// Display the averages for what percentage of coins were heads and tails
		cout << "The averages are:" << endl
						<< "Heads: " << headsAverage << "%" << endl
						<< "Tails: " << tailsAverage << "%";

	}

};

int main() {

	int timesCoinFlipped = 0;

	// Ask the user how many times they want to flip the coin
	cout << "Please enter the number of times the coin was flipped: ";
	cin >> timesCoinFlipped;

	cout << endl;
	// Flip the coin how many times the user wants
	FlipACoin flip;
	flip.flipACoin(timesCoinFlipped);

	return 0;
}
