//
//  File.hpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#ifndef File_hpp
#define File_hpp

#include <stdio.h>
#include <iostream>
#include "Container.hpp"
using namespace std;

class File: public Container{
    string fileName;
    string fileContent;
    int fileSize;
public:
    File(string fileName, int fileSize, string fileContent);
    int getSize();
    string getName();
    string getContent();
    
    
};

#endif /* File_hpp */
