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
#include "PointerReferenceTest.hpp"
#include "ForLoopTest.hpp"
#include "CallByRefExample.hpp"

using namespace std;


void refAddFive(int&, int&);
void printAsciiTable();

int main() {
   
    int i = 1;
    
    printf("value before call: %d \n", i);
    
    CallByRefExample test;
    test.IncrementNumExplicit(&i);
    test.IncrementNumImplicit(i);
    
    printf("value after call: %d\n", i);
    
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