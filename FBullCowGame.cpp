//Bibliotecas:
#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro(int WordLenght) {

	std::cout << R"(

   ,/         \,                                           _(__)_        V
  ((__,-"""-,__))                                         '-e e -'__,--.__)
   `--)~   ~(--`                                           (o_o)        )
  .-'(       )`-,                                            \. /___.  |
  `~~`d\   /b`~~`                                             ||| _) / _)/
      |     |												 //_(/_(/_(
      (6___6)
       `---`

----------------------------------------------------------------
)";

	std::cout << "\nWelcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WordLenght;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;

	return;
}

void PlayGame(int NumberTurns) {
	//loop for number of turns
	for (int i = 0; i < NumberTurns; i++)
	{
	std::string Guess = GetGuess();

	std::cout << "Your guess was: " << Guess << std::endl;

	std::cout << std::endl;
	}
}

std::string GetGuess(){

	// Get a guess from the player
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?";
	std::string Response;
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y') ;
}