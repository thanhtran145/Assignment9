#include "GuessNumber.h"

//*********************************** Constructor ********************************//

GuessNumber::GuessNumber()
{
	srand(time(0));
	high = (rand() % (1000 - 600 + 1)) + 600;
	low = 1;
	midPoint = (high + low) / 2;
}

//*********************************** Accessor ********************************//
//Precondition: NA
//Postcondition: return the mid point attribute
int GuessNumber::getMidPoint() // chia cai nay ra lam 2
{
	return midPoint;
}

//Precondition: NA
//Postcondition: return the high attribute
int GuessNumber::getHigh()
{
	return high;
}

//Precondition: NA
//Postcondition: return the low attribute
int GuessNumber::getLow()
{
	return low;
}

//********************************* Mutator ********************************//
//Precondition: positive int value
//Postcondition: set the low attribute
void GuessNumber::setMidPoint(int midPoint)
{
	this->midPoint = midPoint;
}

//Precondition: positive int value
//Postcondition: set the high attribute
void GuessNumber::setHigh(int high)
{
	this->high = high;
}

//Precondition: NA
//Postcondition: set the high attribute
void GuessNumber::setLow(int low)
{
	this->low = low;
}

//***************************************** Public Function **********************************//
//Precondition: NA
//Postcondition: display the game 
void GuessNumber::gameDisplay()
{
	GuessNumber game;
	char ch;
	char answer = ' ';
	int guesses = 0;

	int max = game.getHigh();
	int min = game.getLow();


	cout << "\n\t2> Guess your number between 1 to " << game.getHigh() << ".\n";
	cout << "\n\tThink of a number from 1 to " << game.getHigh() <<".\n";


	cout << "\n\tPress any key to begin...";
	cin.get(ch);

	gameLogic(game, answer, max, min, guesses);
	
}

//Precondition: a GuessNumber object, a char answer, positive int max, min, and guesses
//Postcondition: a recursive function that display logic of the game 
void GuessNumber::gameLogic(GuessNumber &game, char answer, int max, int min, int guesses)
{

	answer = toupper(inputChar("\tIs your number " + to_string(game.getMidPoint()) + "? (Y - yes or N - no) ", 'Y', 'N'));

	guesses++;

	if (answer == 'Y' || game.getMidPoint() == min || game.getMidPoint() == max)
	{
		cout << "\n\tNumber of guesses: " << guesses << "\n";
		return;
	}
		

	answer = toupper(inputChar("\tIs your number larger than " + to_string(game.getMidPoint()) + "? (Y - yes or N - no) ", 'Y', 'N'));

	if (answer == 'Y')
	{
		game.setLow(game.getMidPoint());

		game.setMidPoint(((game.getLow() + game.getHigh()) / 2 ));

		if (game.getMidPoint() == game.getLow())
		{
			game.setMidPoint(game.getLow() + 1);
		}

		gameLogic(game, answer, max, min, guesses);
	}
	else
	{
		game.setHigh(game.getMidPoint());

		game.setMidPoint(((game.getLow() + game.getHigh()) / 2));

		gameLogic(game, answer, max, min, guesses);
	}
}
