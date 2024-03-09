#pragma once
#ifndef ACHIEVEMENTS_H
#define ACHIEVEMENTS_H

#include <string>
using namespace std;

class Achievements final {
private:
     static int amountOfAchievements;
     int id;
     string name;
     string description;
     string requirements;
};



// class testAchievements : public Achievements {};


#endif