//
//  PointerReferenceTest.hpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#ifndef PointerReferenceTest_hpp
#define PointerReferenceTest_hpp

#include <stdio.h>

class PointerReferenceTest {
private:
    int x = 1;
    int y = 2;
    
    // reference.
    int &xref = x;
    int &yref = y;
    
    // pointer to memory.
    int *xpointer = &x;
    int *ypointer = &y;
    
    void print();
    void update(int, int);
    
public:
    void run();
    PointerReferenceTest();
};

#endif /* PointerReferenceTest_hpp */
