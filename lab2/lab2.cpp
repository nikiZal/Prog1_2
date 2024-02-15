#include <iostream>

using namespace std;

// База даних фільмів



class Film {
private:
    string name;
    int duration;
    double rating;
public:
    void setName (string newName) {
        name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }
    void getAll () {
        cout << "Name: " << name << endl
             << "Duration: " << duration << endl
             << "Rating: " << rating << endl;
    }

    Film () 
        : Film{"None", 0, 0.0} {};
    Film (string newName) 
        : Film{newName, 0, 0.0} {};
    Film (string newName, int newDuration) 
        : Film{newName, newDuration, 0.0} {};
    Film(string newName, int newDuration, double newRating) 
        : name{newName}, duration{newDuration}, rating{newRating} {};
    ~Film() {};
};

class Serial {
private:
    string name;
    int episodDuration;
    int numberOfEpisodes;
    double rating;
public:
    void setName (string newName) {
        name = newName;
    }
    void setRating (double newRating) {
        rating = newRating;
    }
    void getAll () {
        cout << "Name: " << name << endl
             << "Episodes: " << numberOfEpisodes << endl
             << "Duration: " << episodDuration << endl
             << "Rating: " << rating << endl;
    }

    Serial () 
        : Serial{"None", 0, 0, 0.0} {};
    Serial (string newName) 
        : Serial{newName, 0, 0, 0.0} {};
    Serial (string newName, int newNumberOfEpisodes) 
        : Serial{newName, newNumberOfEpisodes, 0, 0.0} {};
    Serial (string newName, int newNumberOfEpisodes, int newEpisodDuration) 
        : Serial{newName, newNumberOfEpisodes, newEpisodDuration, 0.0} {};
    Serial(string newName, int newNumberOfEpisodes, int newEpisodDuration, double newRating) 
        : name{newName}, numberOfEpisodes{newNumberOfEpisodes}, episodDuration{newEpisodDuration}, rating{newRating} {};
    ~Serial() {};
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
    Anime jojo("JoJo", 24, 20, "davidProduction", 8.8);
    jojo.getAll();
    cout << endl;
    jojo.setRating(7.88);
    cout << endl;
    jojo.getAll();

    cout << endl << "-----------------------------" << endl << endl;

    Serial friends("Friends", 100, 45, 9.5);
    friends.getAll();

    cout << endl << "-----------------------------" << endl << endl;

    Film duna("Duna", 150, 8.0);
    duna.getAll();
    return 0;
}