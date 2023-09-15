//Bibliotecas:
#include <iostream>
#include <string>


class FBullCowGame
{
private:

public:
    void Reset();
    int GetMaxTries();
     
};


void PrintIntro(int WordLenght);
void PlayGame(int NumberTurns);
bool AskToPlayAgain();
std::string GetGuess();