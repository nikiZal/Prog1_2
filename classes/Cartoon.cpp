#include "Cartoon.h"

#include <iostream>
#include <string>
#include <set>

using namespace std;

Cartoon::Cartoon()
    : Cartoon("None", 0.0, 0, "None", {}) {};

Cartoon::Cartoon(string newName)
        : Cartoon(newName, 0.0, 0, "None", {}) {};

Cartoon::Cartoon(string newName, double newRating)
        : Cartoon(newName, newRating, 0, "None", {}) {};

Cartoon::Cartoon(string newName, double newRating, int newEpisodes)
        : Cartoon(newName, newRating, newEpisodes, "None", {}) {};

Cartoon::Cartoon(string newName, double newRating, int newEpisodes, string newStyle)
        : Cartoon(newName, newRating, newEpisodes, newStyle, {}) {};

Cartoon::Cartoon(string newName, double newRating, int newEpisodes, string newStyle, set <string> newVoiceActors)
        : MediaProduction(newName, newRating, newEpisodes), style{newStyle}, voiceActors{newVoiceActors} {};

Cartoon::~Cartoon() {};


void Cartoon::print(ostream &os) const {
    os << "Style: " << this->style << endl;
}

void Cartoon::test() {
    cout << "Virtual Cartoon test";
}