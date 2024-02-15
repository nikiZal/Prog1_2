#include <iostream>
#include <set>
using namespace std;

// База даних фільмів



class Film {
private:
    string name;
    int duration;
    set<string> genres;
    double rating;
public:
    void setName () {

    }
    void setRating () {

    }
    void getAll () {
        
    }
};

class Serial {
private:
    string name;
    int episodDuration;
    int numberOfEpisodes;
    set<string> genres;
    double rating;
public:
    void setName () {

    }
    void setRating () {

    }
    void getAll () {
        
    }
};

class Anime {
private:
    string name;
    int episodDuration;
    int numberOfEpisodes;
    string studio;
    set<string> genres;
    double rating;
public:
    void setName (string &newName) {
        name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }
    string getStudio () {
        cout << "studio was getted, value = " << studio; 
        return studio;
    }
    void getAll () {
        cout << "Name: " << name 
             << 
             
    }
};



int main () {
    cout << "Hello!" << endl;
    return 0;
}