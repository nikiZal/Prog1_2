#include "MediaProduction.h"

#include <iostream>
#include <string>

using namespace std;

MediaProduction::MediaProduction()
    : MediaProduction("None", 0.0, 0) {};

MediaProduction::MediaProduction(string newName)
    : MediaProduction(newName, 0.0, 0) {};

MediaProduction::MediaProduction(string newName, double newRating)
    : MediaProduction(newName, newRating, 0) {};

MediaProduction::MediaProduction(string newName, double newRating, int newEpisodes)
    : id{getStatic()+1}, name{newName}, rating{newRating}, episodes{newEpisodes} {};

MediaProduction::MediaProduction(const MediaProduction &obj)
    : MediaProduction(obj.name, obj.rating, obj.episodes) {
    cout << "MediaProduction WILL BE COPIED" << endl;
};

MediaProduction::~MediaProduction() {
};




int MediaProduction::getStatic() {
    return amountOfMedia;
}


istream &operator>>(istream &is, MediaProduction &obj) {
    is >> obj.name >> obj.rating >> obj.episodes;
    return is;
}

ostream &operator<<(ostream &os, MediaProduction &obj) {
    obj.print(os);
    return os;
}

MediaProduction &MediaProduction::operator=(const MediaProduction &obj){
    if (this != &obj) {
        name = obj.name;
        rating = obj.rating;
        episodes = obj.episodes;
    }
    return *this;
}