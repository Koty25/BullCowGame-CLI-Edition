//Bibliotecas:
#include <iostream>
#include <string>
#include "FBullCowGame.hpp"



int main(int argc, char const *argv[]){

	const int NumberTurns = 5;
	const int WordLenght = 5;
	bool PlayAgain = false;
	do
	{

	PrintIntro(WordLenght);
	PlayGame(NumberTurns);
	PlayAgain = AskToPlayAgain();

	} while (PlayAgain);
	

		
	return 0;
}