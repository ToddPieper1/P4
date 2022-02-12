//
// Created by Todd on 2/8/2022.
//

#include "AA.h"
#include <iostream>
using namespace std;

AA::AA(string url) {
    URL = url;
    scheme = URL.substr(0, URL.find(":")+1);
    beginning = URL.find("//");
    end = URL.find("/", beginning+2 );
    authority = URL.substr(beginning, end-beginning);
    path = URL.substr(end);
}

string AA::getPath() {
    return path;
}
string AA::getScheme() {
    return scheme;
}
string AA::getAuthority() {
    return authority;
}
string AA::getURL() {
    return URL;
}