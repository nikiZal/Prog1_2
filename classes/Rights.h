#pragma once
#ifndef RIGHTS_H
#define RIGHTS_H

using namespace std;

class Rights {
private:
    bool commenting;
    bool rating;
    bool mediaEditing;
    bool banning;
public:
    Rights();
    Rights(bool newCommenting);
    Rights(bool newCommenting, bool newRating);
    Rights(bool newCommenting, bool newRating, bool newMediaEditing);
    Rights(bool newCommenting, bool newRating, bool newMediaEditing, bool newBanning);
    ~Rights();
};


#endif