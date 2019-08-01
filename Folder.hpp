//
//  Folder.hpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#ifndef Folder_hpp
#define Folder_hpp

#include <stdio.h>
#include <iostream>
#include "Container.hpp"
using namespace  std;

class Folder: public Container{
    string folderName;
    int capacity;
    Container** arr;
    int n;  // index of arr
    
public:
    Folder(string folderName, int capaciy);
    bool Add(Container* c);
    int getSize();
    void getInsideFolder();
    string getName() { return folderName;} ;
    ~Folder();
};


#endif /* Folder_hpp */
