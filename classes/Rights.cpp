#include "Rights.h"

Rights::Rights()
    : Rights(true, true, false, false){};
Rights::Rights(bool newCommenting)
        : Rights(newCommenting, true, false, false){};
Rights::Rights(bool newCommenting, bool newRating)
        : Rights(newCommenting, newRating, false, false){};
Rights::Rights(bool newCommenting, bool newRating, bool newMediaEditing)
        : Rights(newCommenting, newRating, newMediaEditing, false){};
Rights::Rights(bool newCommenting, bool newRating, bool newMediaEditing, bool newBanning)
        : commenting{newCommenting}, rating{newRating}, mediaEditing{newMediaEditing}, banning{newBanning} {};
Rights::~Rights() {};