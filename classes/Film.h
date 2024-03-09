#pragma once
#ifndef Film_H
#define Film_H


#include <iostream>
#include <string>
#include <cstring>
#include <set>

#include "MediaProduction.h"

class Film : public MediaProduction {
private:
    string country;
    set <string> roles;
public:
    Film();
    Film(string newName);
    Film(string newName, double newRating);
    Film(string newName, double newRating, int newEpisodes);
    Film(string newName, double newRating, int newEpisodes, int newDuration);
    Film(string newName, double newRating, int newEpisodes, int newDuration, string newCountry);
    Film(string newName, double newRating, int newEpisodes, int newDuration, string newCountry, set <string> newRoles);
    Film(const Film &obj);
    ~Film();


    void print(ostream &os) const override;
    void test() override;

    Film &operator=(const Film &obj);
};




#endif