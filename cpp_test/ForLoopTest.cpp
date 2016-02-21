//
//  ForLoopTest.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "ForLoopTest.hpp"

void ForLoopTest::run() {
    
    
    int ia[5];
    
    printf("--------i0----------\n");
    for (int i : ia) {
        printf("i: %d\n", i);
    }
    printf("--------i1----------\n");
    ia[0] = 0;
    for (int i : ia) {
        printf("i: %d\n", i);
    }
    
    printf("--------i2----------\n");
    int *ip = ia;
    *ip = 1;
    for (int i : ia) {
        printf("i: %d\n", i);
    }
    printf("--------i2----------\n");
    *(ip++) = 2;
    *ip = 3;
    for (int i : ia) {
        printf("i: %d\n", i);
    }
    
    char s[] = "string";
    printf("--------s0----------\n");
    for (int i = 0; s[i] != 0; i++) {
        printf("char: %c \n", s[i]);
    }
    
    printf("\n--------s1----------\n");
    for(char * cp = s; *cp; cp++){
        printf("char: %c \n", *cp);
    }
    
    printf("\n--------s2----------\n");
    for (char c : s) {
        if (c == 0) {
            break;
        }
        printf("char: %c \n", c);
    }    
    
}