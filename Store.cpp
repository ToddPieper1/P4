//
// Created by fourt on 2/9/2022.
//
#include <iostream>
#include "Store.h"
#include <string>
using namespace std;

Store::Store(){ //Default constructor to initialize the array of objects
    for (int j =0; j< 100; j++) {
        list_items[j] = Items();
    }
}

void Store::printItems(Items arr[]) {
    cout << "Store: \n"; //Print the first line outside of the loop
    for (int i=0; i < counter; i++) { //Loop through the counter so we don't try and print the objects that are simply there to fill the array
        auto temp = arr[i]; //Create a temp variable so we can reference the data values within the object for the printing
        cout << temp.getName() << ": x " << temp.getStock() << "\n";
    }
}
void Store::addItemToStore(Items &object) { //I added a function to add items to the array to make it easier in the main as well as able to count them to make the printing easier
    list_items[counter] = object;
    counter++;
}