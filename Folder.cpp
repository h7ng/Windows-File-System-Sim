//
//  Folder.cpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#include "Folder.hpp"

Folder::Folder(string folderName, int capacity){
    this->folderName = folderName;
    this->capacity = capacity;
    arr = new Container*[capacity];
    n=0;
}
bool Folder::Add(Container* c){
    if(n>capacity)
        return false;
    arr[n++] = c;
    return true;
}
int Folder::getSize(){
    int size=0;
    for(int i=0; i<n; i++)
        size += arr[i]->getSize();
    return size;
}
void Folder::getInsideFolder(){
    cout << "Folder " << getName() << " contains: \n";
    for(int i=0; i<n; i++)
        cout << arr[i]->getName() << " | " << arr[i]->getSize() << endl;
}
Folder::~Folder()
{
    delete[] arr;
}
