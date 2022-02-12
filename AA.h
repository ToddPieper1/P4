//
// Created by Todd on 2/8/2022.
//
#include <string>
#ifndef AA_H
#define AA_H
#pragma once

using namespace std;
class AA {
public:

    AA(string);

    string getPath();
    string getAuthority();
    string getScheme();
    string getURL();
private:
    string URL, authority, path, scheme;
    int beginning, end;
};


#endif
