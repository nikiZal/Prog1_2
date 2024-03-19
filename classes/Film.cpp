#include "Film.h"

#include <iostream>
#include <string>
#include <set>
#include "MediaProduction.h"

using namespace std;

Film::Film()
        : Film("None", 0.0, 0, "None") {};

Film::Film(string newName)
        : Film(newName, 0.0, 0, "None") {};

Film::Film(string newName, double newRating)
        : Film(newName, newRating, 0, "None") {};

Film::Film(string newName, double newRating, int newEpisodes)
        : Film(newName, newRating, newEpisodes, "None") {};

Film::Film(string newName, double newRating, int newEpisodes, string newCountry)
        : MediaProduction(newName, newRating, newEpisodes), country{newCountry} {};

Film::Film(const Film &obj) : MediaProduction(obj), country{obj.country} {
    cout << "Film WILL BE COPIED" << endl;
};

Film::~Film() {
};





void Film::print(ostream &os) const {
    os << "Country: " << this->country;
};

void Film::test() {
    cout << "Virtual Film test";
}






Film &Film::operator=(const Film &obj) {
    if (this != &obj) {
        MediaProduction::operator=(obj);
        country = obj.country;
    }
    return *this;
}

