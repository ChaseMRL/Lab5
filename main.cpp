/*
Chase Deiter
C++ Fall 2023
Due: 11/10/2023
Lab 5 Number Guessing Game


Description: Write a number-guessing game in which the computer selects a random
number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
the end of each game, users should be told whether they won or lost, and then be asked
whether they want to play again. When the user quits, the program should output the
total number of wins and losses. To make the game more interesting, the program
should vary the wording of the messages that it outputs for winning, for losing, and for
asking for another game. Create 10 different messages for each of these cases, and use
random numbers to choose among them. This application should use at least one Do-
While loop and at least one Switch statement. Write your C++ code using good style and
documenting comments. You should use classes in your code as well. Your source code
file should be called Lab5.cpp.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "rng.h"

using namespace std;

int main()
{
	rng c; //setting variable to the class//

	srand(time(NULL));  //random number generator setup//
	int attempts; //variable for amount of guesses left//
	int userGuess; //variable for inputting guess//
	int wins=0; //intitializing amount of wins//
	int losses=0; //initializing amount of losses//
	bool runAgain = true; //flag controlled loop setup//

	do //dowhile loop//
	{ 
		cout << "Let's play the Numba Guessing Game" << endl; //outputting instructions for the guessing game//
		cout << "Number is between 1 and 100" << endl; 
		cout << "You get 20 guesses" << endl;


		int attempts = 20; //establishing how many guesses user gets//

		c.setranNum1(rand() % 100 + 1); //setting random number between 1 and 100//
		 cin >> userGuess; //inputting user guess//

		while (attempts > 1) //allows user to guess 20 times//
		{
			if (c.getranNum1() == userGuess) //if statement for winning//
			{
				wins++; //adds one win to score//

				c.setranNum2(rand() % 10 + 1); //making 10 cases for switch statement//
				switch (c.getranNum2())  //Switch statement that outputs random victory statement//
				{
				case 1: cout << "yay" << endl;
					break;

				case 2: cout << "hoorah" << endl;
					break;

				case 3: cout << "lucky guess" << endl;
					break;

				case 4: cout << "correct" << endl;
					break;

				case 5: cout << "good job" << endl;
					break;

				case 6: cout << "suhprise" << endl;
					break;
				case 7: cout << "well done" << endl;
					break;

				case 8: cout << "good guess" << endl;
					break;
				case 9: cout << "you got it right" << endl;
					break;

				case 10: cout << "woot woot" << endl;
					break;
				}
				break;
			}
			else //else statement that makes the user retry and reduce the number of attempts by one//
			{
				attempts--;

				cout << "try again, you have " << attempts << " attempts left" << endl;
				cin >> userGuess;
			}

		} 

		if (attempts == 1) //if statement for if the user runs out of guesses//
		{
			c.setranNum2(rand() % 10 + 1); //making 10 cases for the switch statement//
			switch (c.getranNum2()) //switch statement that outputs random loss statement//
			{
			case 1: cout << "you lost lol" << endl;
				break;

			case 2: cout << "L" << endl;
				break;

			case 3: cout << "loser" << endl;
				break;

			case 4: cout << "L bozo" << endl;
				break;

			case 5: cout << "fatality" << endl;
				break;

			case 6: cout << "failure" << endl;
				break;
			case 7: cout << "you sold" << endl;
				break;

			case 8: cout << "you're done" << endl;
				break;
			case 9: cout << "better luck next time..." << endl;
				break;

			case 10: cout << "boo-hoo" << endl;
				break;
			}
			cout << "Number was " << c.getranNum1() << endl; //tells user what the number was after they lose//

			losses++; //adds a loss to the score//
		}

		c.setranNum2(rand() % 10 + 1); //making 10 cases for the switch statement//
		switch (c.getranNum2()) //switch statement that outputs a random "try again?" statement//
		{
		case 1: cout << "play again?(y/n)" << endl;
			break;

		case 2: cout << "run it back?(y/n)" << endl;
			break;

		case 3: cout << "go again?(y/n)" << endl;
			break;

		case 4: cout << "again?(y/n)" << endl;
			break;

		case 5: cout << "do you want to go again?(y/n)" << endl;
			break;

		case 6: cout << "restart?(y/n)" << endl;
			break;
		case 7: cout << "how bout another?(y/n)" << endl;
			break;

		case 8: cout << "play game again?(y/n)" << endl;
			break;
		case 9: cout << "let's plpay again, please?(y/n)" << endl;
			break;

		case 10: cout << "one more?(y/n)" << endl;
			break;
		}

		char playAgain; //variable for user to decide if they want to play again//
		cin >> playAgain; //user choosing if they want to play again//

		if (playAgain == 'y') //running the dowhile loop again if they choose yes//
		{
			runAgain = true;
		}
		else //ends the runAgain loop and outputs total number of wins and losses//
		{
			cout << "wins: " << wins << endl << "losses: " << losses << endl;
			cout << "thanks for playing" << endl;
			runAgain = false;
			return 0;
		}
	} while (runAgain); //runs do while loop again if runAgain = true// 

	return 0;
}