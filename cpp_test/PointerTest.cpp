//
//  PointerTest.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "PointerTest.hpp"

template <class T>
void PointerTest<T>::setPointer(T num)
{
    testNum = &num;
}

template <class T>
T* PointerTest<T>::getMemoryPosition()
{
    return testNum;
}

template <class T>
T PointerTest<T>::getPointer()
{
    return *testNum;
}