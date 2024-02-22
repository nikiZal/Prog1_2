#include <iostream>
#include <string>
#include <cstring>

using namespace std;


class Film {
private:
    static int numOfFilms;
    string *name;
    int duration;
    double rating;
public:
    void setName (string newName) {
        *name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }
    void getStatic () {
        cout << "Value of static: " << numOfFilms << endl;
    }
    static void changeNumOfFilms (int a) {
        numOfFilms += a;
    } 

    friend ostream &operator<<(ostream &os, const Film &obj) {
        os << "Name: " << *(obj.name) << endl
           << "Duration: " << obj.duration << endl
           << "Rating: " << obj.rating << endl;
        return os;
    }
    friend istream &operator>>(istream &is, Film &obj) {
        is >> *(obj.name) >> obj.duration >> obj.rating;
        return is;
    }
    bool operator==(const Film &comparedFilm) const{
        if (*(this->name) == *(comparedFilm.name) && this->duration == comparedFilm.duration && this->rating == comparedFilm.rating) {
            return true;
        }
        return false;
    };


    Film () 
        : Film{"None", 0, 0.0} {};
    Film (string newName) 
        : Film{newName, 0, 0.0} {};
    Film (string newName, int newDuration) 
        : Film{newName, newDuration, 0.0} {};
    Film (const Film &otherFilm) 
        : Film{*(otherFilm.name), otherFilm.duration, otherFilm.rating} {}; 
    Film(string newName, int newDuration, double newRating) {
        name = new string;
        *name = newName;
        duration = newDuration;
        rating = newRating;
        changeNumOfFilms(1);
    };
    ~Film() {
        delete name; 
        changeNumOfFilms(-1);
    };
};

int Film::numOfFilms = 0;



class Serial {
private:
    string *name;
    int episodDuration;
    int numberOfEpisodes;
    double rating;
public:
    void setName (string newName) {
        *name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }

    friend ostream operator<<(ostream &os, const Serial &obj) {
        cout << "Name: " << obj.name << endl
             << "Episodes: " << obj.numberOfEpisodes << endl
             << "Duration: " << obj.episodDuration << endl
             << "Rating: " << obj.rating << endl;
    }

    Serial () 
        : Serial{"None", 0, 0, 0.0} {};
    Serial (string newName) 
        : Serial{newName, 0, 0, 0.0} {};
    Serial (string newName, int newNumberOfEpisodes) 
        : Serial{newName, newNumberOfEpisodes, 0, 0.0} {};
    Serial (string newName, int newNumberOfEpisodes, int newEpisodDuration) 
        : Serial{newName, newNumberOfEpisodes, newEpisodDuration, 0.0} {};
    Serial(string newName, int newNumberOfEpisodes, int newEpisodDuration, double newRating) {
        name = new string;
        *name = newName;
        episodDuration = newEpisodDuration;
        rating = newRating;
    };
    ~Serial() {delete name;};
};

class Anime {
private:
    string name;
    int numberOfEpisodes;
    int episodDuration;
    string studio;
    double rating;
public: 
    void setName (string &newName) {
        name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }
    string getStudio () {
        cout << ">>> Studio was getted, value = " << studio; 
        return studio;
    }
    void getAll () {
        cout << "Name: " << name << endl
             << "Episodes: " << numberOfEpisodes << endl
             << "Duration: " << episodDuration << endl
             << "Studio: " << studio << endl
             << "Rating: " << rating << endl;
             
    }

    Anime () 
        : Anime{"None", 0, 0, "None", 0.0} {};
    Anime (string newName) 
        : Anime{newName, 0, 0, "None", 0.0} {};
    Anime (string newName, int newNumberOfEpisodes) 
        : Anime{newName, newNumberOfEpisodes, 0, "None", 0.0} {};
    Anime (string newName, int newNumberOfEpisodes, int newEpisodDuration) 
        : Anime{newName, newNumberOfEpisodes, newEpisodDuration, "None", 0.0} {};
    Anime (string newName, int newNumberOfEpisodes, int newEpisodDuration, string newStudio) 
        : Anime{newName, newNumberOfEpisodes, newEpisodDuration, newStudio, 0.0} {};
    Anime(string newName, int newNumberOfEpisodes, int newEpisodDuration, string newStudio, double newRating) 
        : name{newName}, numberOfEpisodes{newNumberOfEpisodes}, episodDuration{newEpisodDuration}, studio{newStudio}, rating{newRating} {};
    ~Anime() {};
};


int main () {
    Film duna("Duna", 180, 8.5);
    duna.getStatic();

    Film duna2(duna);
    if (duna == duna2) {
        cout << "OMG THEY ARE SIMILAR" << endl << endl;
    }

    duna2.setName("Duna 2");
    cout << duna << duna2 << endl;

    duna2.getStatic();
    duna2.~Film();
    cout << "Destructor was called." << endl;
    duna2.getStatic();
    return 0;

}