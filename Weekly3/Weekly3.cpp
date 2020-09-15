
#include <iostream>
#include <conio.h>
#include <cstdlib>



void task1()
{
	int tries = 0; // This is for counting how many tries has been done
	int count = 0; // This is for counting how many guesses has been done inside one loop

	int highscoreTable[5][2]
	{
		{1, 0},
		{2, 0},
		{3, 0},
		{4, 0}
	};
	
	int getRandomNumber = rand() %10 + 1; // For generating a random number
	
	int playerGuess = 11; // For storing the player guess

	std::cout << "Guess a number between 1 and 10 (0 to exit): ";

	do 
	{
		std::cin >> playerGuess;


		if (playerGuess == getRandomNumber) // Checking if guess is right
		{
			system("CLS");
			std::cout << "\nCongratulations, you guessed the right number!\n";
			std::cout << "It took you " << count << " tries!\n";
			highscoreTable[tries][1] = count;
			
			std::cout << "\nHigh scores:\n";

			for (int i = 0; i <= tries; i++)
			{
				std::cout << "Game " << highscoreTable[i][0] << " : " << highscoreTable[i][1] << "\n";
			}
			std::cout << "\n";
			

			std::cout << "Press a key to retry: ";
			tries++; // add one to number of tries
			playerGuess = 11; // Reset player guess
			count = 0; // reset count from this round
			getRandomNumber = rand() % 10 + 1; // set a new random number

			char something = _getch();
			std::cout << "\n";
			std::cout << "Guess a number between 1 and 10 (0 to exit): ";

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
	std::srand(5);
	int input = 0;


	do
	{
		system("CLS");
		input = 0;
		std::cout << "Weekly 3: Guess a number - Mathias Eek\n";
		std::cin >> input;
		switch (input)
		{
		case 1:
			task1();
			break;
		default:
			break;
		}

	} while (input > 0 && input < 4);
		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
