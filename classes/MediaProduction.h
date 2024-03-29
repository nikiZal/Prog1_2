#pragma once
#ifndef MEDIAPRODUCTION_H
#define MEDIAPRODUCTION_H    


#include <iostream>
#include <string>
#include <cstring>
#include <set>
using namespace std;


class MediaProduction {
private:
    static int amountOfMedia;
    int id;
    string name;
    double rating;
    int episodes;
public:
    MediaProduction();
    MediaProduction(string newName);
    MediaProduction(string newName, double newRating);
    MediaProduction(string newName, double newRating, int newEpisodes);
    MediaProduction(const MediaProduction &obj);
    virtual ~MediaProduction();

    static int getStatic();
    virtual void print(ostream &os) const = 0;
    virtual void test() = 0;
    int getID () {
        return id;
    }

    friend ostream &operator<<(ostream &os, MediaProduction &obj);
    friend istream &operator>>(istream &is, MediaProduction &obj);
    MediaProduction &operator=(const MediaProduction &obj);
};

#endif