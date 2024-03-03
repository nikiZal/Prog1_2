#pragma once
#ifndef USER_H
#define USER_H

#include <iostream>
#include <set>
#include <string>
#include "Rights.h"

class User {
private:
    static int amountOfUses;
    int id;
    string name;
    Rights rights;
    set <int> watchlist;
public:
    User();
    User(string newName);
    User(string newName, set <int> newWatchlist);
};



#endif