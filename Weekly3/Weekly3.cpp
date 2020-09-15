#include <iostream>
#include <conio.h>
#include <cstdlib>


void task1()
{
	int tries = 1; // This is for counting how many tries has been done
	int count = 1; // This is for counting how many guesses has been done inside one loop

	int highscoreTable[100][2] // Making a table for storing highscores
	{
	};

	for (int j = 1; j <= 99; j++)
	{
		highscoreTable[j][0] = j;
		highscoreTable[j][1] = 0;
	}

	int difficulty;
	int getRandomNumber = 0;
	std::cout << "\nDifficulties:";
	std::cout << "\n1 = Easy - A number between 1 and 5";
	std::cout << "\n2 = Medium - A number between 1 and 10";
	std::cout << "\n3 = Hard - A number between 1 and 30";
	std::cout << "\nChoose a difficulty by typing the corresponding number: ";
	std::cin >> difficulty;
	
	int playerGuess = 0; // For storing the player guess
	system("CLS");

	std::cout << "Guess a number (Press 0 to exit): ";

	do 
	{
		if (difficulty == 1)
		{
			getRandomNumber = rand() % 5 + 1; // For generating a random number

		}
		else if (difficulty == 2)
		{
			getRandomNumber = rand() % 10 + 1; // For generating a random number

		}
		else if (difficulty == 3)
		{
			getRandomNumber = rand() % 30 + 1; // For generating a random number

		}
		else
		{
			std::cout << "\nError! Please try again";
			task1();
		}
		std::cin >> playerGuess;


		if (playerGuess == getRandomNumber) // Checking if guess is right
		{
			system("CLS");
			
			count++;
			std::cout << "Congratulations, you guessed the right number!\n";
			std::cout << "It took you " << count << " tries!\n";
			highscoreTable[tries][1] = count;
			
			std::cout << "\nHigh scores:\n";

			for (int i = 0; i < tries; i++)
			{
				std::cout << "Game " << highscoreTable[i+1][0] << " : " << highscoreTable[i+1][1] << "\n";
			}
			std::cout << "\n";
			

			std::cout << "Press a key to retry: ";
			tries++; // add one to number of tries
			playerGuess = 11; // Reset player guess
			count = 0; // reset count from this round
			char something = _getch();
			std::cout << "\n";

			system("CLS");
			std::cout << "Guess a number (Press 0 to exit): ";

		}

		else
		{
			system("CLS");
			std::cout << "Sorry, wrong guess. Try again: ";
			count++;
		}

	} while (playerGuess > 0);
	
	return;

}
int main()
{
	std::cout << "Weekly 3: Guess a number - Mathias Eek\n";
	task1();
	return 0;
}
