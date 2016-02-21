//
//  CallByRefExample.hpp
//  cpp_test
//
//  Created by Robert Wells on 21/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#ifndef CallByRefExample_hpp
#define CallByRefExample_hpp

#include <stdio.h>

class CallByRefExample {
public:
    void IncrementNumExplicit(int*);
    void IncrementNumImplicit(int&);
};

#endif /* CallByRefExample_hpp */
