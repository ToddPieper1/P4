//
// Created by fourt on 2/9/2022.
//
#pragma once
#ifndef ITEMS_H
#define ITEMS_H
using namespace std;
#include <string>

class Items {

public:

    Items();

    Items(string, long, int, double);

    string getName();

    void setName(string name);

    int getStock();

    void setStock(int stock);

    double getPrice();

    void setPrice(double price);

    long getId();

    void setId(long id);

private:
    string name;
    int stock;
    double price;
    long id;
};


#endif ITEMS_H
