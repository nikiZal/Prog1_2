#pragma once
#ifndef ACHIEVEMENTS_H
#define ACHIEVEMENTS_H

#include <string>
using namespace std;

class Achievements {
private:
     static int amountOfAchievements;
     int id;
     string name;
     string description;
     string requirements;
};






#endif