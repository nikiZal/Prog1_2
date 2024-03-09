#include "Film.h"

#include <iostream>
#include <string>
#include <set>
#include "MediaProduction.h"

using namespace std;

Film::Film()
        : Film("None", 0.0, 0, 0, "None", {}) {};

Film::Film(string newName)
        : Film(newName, 0.0, 0, 0, "None", {}) {};

Film::Film(string newName, double newRating)
        : Film(newName, newRating, 0, 0, "None", {}) {};

Film::Film(string newName, double newRating, int newEpisodes)
        : Film(newName, newRating, newEpisodes, 0, "None", {}) {};

Film::Film(string newName, double newRating, int newEpisodes, int newDuration)
        : Film(newName, newRating, newEpisodes, newDuration, "None", {}) {};

Film::Film(string newName, double newRating, int newEpisodes, int newDuration, string newCountry)
        : Film(newName, newRating, newEpisodes, newDuration, newCountry, {}) {};

Film::Film(string newName, double newRating, int newEpisodes, int newDuration, string newCountry, set <string> newRoles)
        : MediaProduction(newName, newRating, newEpisodes, newDuration), country{newCountry}, roles{newRoles} {};

Film::Film(const Film &obj) : MediaProduction(obj), country{obj.country}, roles{obj.roles} {
    cout << "Film WILL BE COPIED" << endl;
};

Film::~Film() {
    cout << "Film DESTRUCT" << endl;
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
        roles = obj.roles;
    }
    return *this;
}

