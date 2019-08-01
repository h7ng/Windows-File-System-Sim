//
//  File.cpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#include "File.hpp"

File::File(string fileName, int fileSize, string fileContent) : fileName(fileName), fileSize(fileSize), fileContent(fileContent) {};

int File::getSize(){
    return fileSize;
}

string File::getName(){
    return fileName;
}
string File::getContent(){
    return fileContent;
}
