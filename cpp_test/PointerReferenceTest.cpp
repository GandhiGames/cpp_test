//
//  PointerReferenceTest.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "PointerReferenceTest.hpp"

PointerReferenceTest::PointerReferenceTest()
{
    
}

void PointerReferenceTest::update(int newX, int newY)
{
    x = newX;
    y = newY;
}

void PointerReferenceTest::print()
{
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    printf("xref = %d\n", xref);
    printf("yref = %d\n", yref);
    
    printf("xpointer = %p\n", xpointer);
    printf("ypointer = %p\n", ypointer);
    
    printf("xpointer value = %d\n", *xpointer);
    printf("ypointer value = %d\n", *ypointer);

}

void PointerReferenceTest::run()
{
    printf("-----original-----\n");
    print();
    
    update(5, 6);
    printf("-----updated-----\n");
    print();
}