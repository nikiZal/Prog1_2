#pragma once
#ifndef CARTOON_H
#define CARTOON_H


#include <iostream>
#include <string>
#include <cstring>
#include <set>

#include "MediaProduction.h"

class Cartoon : public MediaProduction {
private:
    string style;
    set <string> voiceActors;
public:
    Cartoon();
    Cartoon(string newName);
    Cartoon(string newName, double newRating);
    Cartoon(string newName, double newRating, int newEpisodes);
    Cartoon(string newName, double newRating, int newEpisodes, string newStyle);
    Cartoon(string newName, double newRating, int newEpisodes, string newStyle, set <string> newVoiceActors);
    ~Cartoon();

    void print(ostream &os) const override;
    void test() override;
};




#endif