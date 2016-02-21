//
//  GuessingGame.hpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#ifndef GuessingGame_hpp
#define GuessingGame_hpp

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

class GuessingGame {
    
private:
    int randNum;
    bool guess(int);
    int getRandomNumber(int, int);
    
public:
    void run();
    ~GuessingGame();
    
};

#endif /* GuessingGame_hpp */
