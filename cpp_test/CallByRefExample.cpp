//
//  CallByRefExample.cpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "CallByRefExample.hpp"

void CallByRefExample::IncrementNum(int* num)
{
    (*num)++;
}
