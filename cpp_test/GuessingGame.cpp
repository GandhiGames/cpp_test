//
//  GuessingGame.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "GuessingGame.hpp"


bool GuessingGame::guess(int num)
{
    if (num < randNum) {
        cout<< "Too low"<<endl;
        return false;
    } else if (num > randNum) {
        cout<<"Too high"<<endl;
        return false;
    }
    
    return true;
}

int GuessingGame::getRandomNumber(int start, int end) {
    srand(static_cast<unsigned>(time(0)));
    return (rand() % end) + start;
}

void GuessingGame::run() {
    
    int userGuess = -1;
    int start = 1;
    int end = 10;
    int numOfGuesses = 0;
    
    randNum = getRandomNumber(start, end);
    
    
    cout<<"Guess a random number between "<<start<< " and "<<end<<endl;
    
    do {
        if (userGuess != -1) {
            cout<<"Try again:"<<endl;
        }
        cin>>userGuess;
        
        numOfGuesses++;
    } while (guess (userGuess) != true);
    
    cout<<"You guessed it in "<<numOfGuesses<<" guesses"<<endl;
}