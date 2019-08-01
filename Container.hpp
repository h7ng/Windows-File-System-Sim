//
//  Container.hpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#ifndef Container_hpp
#define Container_hpp

#include <stdio.h>
#include <string>
class Container{
public:
    virtual int getSize() = 0;
    virtual std::string getName() = 0;
    
};

#endif /* Container_hpp */
