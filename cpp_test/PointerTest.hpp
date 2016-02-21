//
//  PointerTest.hpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#ifndef PointerTest_hpp
#define PointerTest_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>
class PointerTest {
    
private:
    T* testNum;

public:
    void setPointer(T);
    T* getMemoryPosition();
    T getPointer();
    
};

#endif /* PointerTest_hpp */
