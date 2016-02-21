//
//  main.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Robert Wells. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "GuessingGame.hpp"
#include "PointerTest.hpp"

using namespace std;


void refAddFive(int&, int&);
void printAsciiTable();

int main() {
   

    
    return 0;
}

void refAddFive(int& a, int& b){
    a += 5;
    b += 5;
}


void printAsciiTable() {
    char temp;
    
    for (int i = 0; i < 128; i++) {
        temp = i;
        cout<<i<<": "<<temp<<endl;
    }
}