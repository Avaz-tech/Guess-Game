#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  int secretNum = 8;
  int guess;
  int guessLimit = 3;
  int guesCount = 0;
  bool outOfGuess = false;

  cout << "Welcome to Guess Game" << endl;
  cout << "You can guess the number 3 times only!" << endl;
  while(guess != secretNum && !outOfGuess){
    if(guesCount<3){
        cout << "Enter your Guess: ";
        cin >> guess;
        guesCount++;  
    }
