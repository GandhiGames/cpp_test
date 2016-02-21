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

using namespace std;

int getRandomNumber(int start, int end) {
    srand(static_cast<unsigned>(time(0)));
    return (rand() % end) + start;
}

void printAsciiTable() {
    char temp;
     
     for (int i = 0; i < 128; i++) {
     temp = i;
     cout<<i<<": "<<temp<<endl;
     }
}

int main(int argc, const char * argv[]) {
   
    printAsciiTable();
    
  
    cout<<getRandomNumber(1, 10)<<endl;
    
    
    return 0;
}
