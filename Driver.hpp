//
//  Driver.hpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#ifndef Driver_hpp
#define Driver_hpp

#include <stdio.h>
#include <string>
#include "Container.hpp"
using namespace std;
class Driver{
    string driverName;
    int driverSize = 100; // maximum capacity
    int capacaity;
    Container** arr;
    int k; // index of arr
public:
    Driver(string driverName, int capacity);
    bool Add(Container* c);
    int getSize();
    int getSizeRemain();
    void getInsideDriver();
    string getName() {return driverName; };
    ~Driver();
};

#endif /* Driver_hpp */
