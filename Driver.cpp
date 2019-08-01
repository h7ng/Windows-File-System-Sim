//
//  Driver.cpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/5/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#include "Driver.hpp"
#include <iostream>
using namespace std;
Driver::Driver(string driverName, int capacity){
    this->driverName = driverName;
    this->capacaity = capacity;
    arr = new Container*[capacity];
    k=0;
}
bool Driver::Add(Container* c){
    if(k>capacaity)
        return false;
    arr[k++] = c;
    return true;
}
int Driver::getSize(){
    int size = 0;
    for(int i=0; i<k; i++)
        size += arr[i]->getSize();
    return size;
}
int Driver::getSizeRemain(){
    return driverSize-getSize();
}


void Driver::getInsideDriver(){
    cout << "Driver " << getName() << " contains: \n";
    for(int i=0; i<k; i++){
        cout << arr[i]->getName() << " | " << arr[i]->getSize() << endl;
    }
    cout << endl;
    
}
Driver::~Driver()
{
    delete[] arr;
}
