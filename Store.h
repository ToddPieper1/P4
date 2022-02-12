//
// Created by fourt on 2/9/2022.
//

#ifndef STORE_H
#define STORE_H


#include <string>
#include "Items.h"

class Store {
public:
    Store();
    Items list_items[100];
    void printItems(Items []);
    void addItemToStore(Items &);
private:
    int counter=0;
};


#endif STORE_H
