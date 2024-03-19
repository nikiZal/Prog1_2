#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

#include <cstdio>


using namespace std;

#include "classes/MediaProduction.h"
#include "classes/Cartoon.h"
#include "classes/Film.h"
#include "classes/Rights.h"
#include "classes/User.h"

string password = "pass";


ofstream logInfo("d:/studying/prog/labs1_2/Prog1_2/Log.txt");

void findFilm (int who) {
    ifstream fin("d:/studying/prog/labs1_2/Prog1_2/Films.txt");
    string line;
    if (fin.is_open()) {
        while (getline(fin, line)) {cout << line << "\n";}
        fin.close();
    } else {
        cout << "We have some problems." << endl;
    }

    if (who == 1) {
        logInfo << ">> Admin searched films." << endl << endl;
    } else {
        logInfo << ">> User searched films." << endl << endl;
    }

}

void changeFilm(int who) {
    string name;
    cout << "Okay, let's change some film info!\nPlease, enter NAME of the film you wanna change." << endl;
    getline(cin, name);
    cin >> ws;
    cout << "Enter please new info: " << endl;

    double rating;
    int episodes;
    string country;
    cin >> name >> rating >> episodes >> country;

    ifstream fin("d:/studying/prog/labs1_2/Prog1_2/Films.txt");
    string line;

    int globalCounter{0};
    int counter;
    if (fin.is_open()) {

        while (getline(fin, line)) {
            if (line.find("Name: ") != string::npos && line.find(name) != string::npos)
            {
                counter = globalCounter;
                globalCounter = 0;
                break;
            }
            globalCounter++;
        }
        fin.close();

        ofstream fout("d:/studying/prog/labs1_2/Prog1_2/Temp.txt", ios_base::trunc);
        fin.open("d:/studying/prog/labs1_2/Prog1_2/Films.txt");

        while (getline(fin, line)) {
            if (globalCounter == counter) {
                fout << "Name: " << name << endl
                     << "Rating: " << rating << endl
                     << "Episodes: " << episodes << endl
                     << "Country: " << country << endl
                     << endl;
            } else {
                if (globalCounter < counter || globalCounter > counter + 4) {
                    fout << line << endl;
                }
            }
            globalCounter++;
        }
        fout.close();
        fin.close();
        remove("d:/studying/prog/labs1_2/Prog1_2/Films.txt");
        if (rename("D:\\studying\\prog\\labs1_2\\Prog1_2\\Temp.txt", "D:\\studying\\prog\\labs1_2\\Prog1_2\\Films.txt") != 0) {
            cout << "WE HAVE SOME PROBLEMS." << endl;
        }
    }

    if (who == 1) {
        logInfo << ">> Admin changed film." << endl << endl;
    }
}

void addFilm(int who) {
    string name;
    double rating;
    int episodes;
    string country;

    cin >> name >> rating >> episodes >> country;
    Film a(name, rating, episodes, country);

    ofstream fout("d:/studying/prog/labs1_2/Prog1_2/Films.txt", ios_base::app);
    fout << "Name: " << name << endl
         << "Rating: " << rating << endl
         << "Episodes: " << episodes << endl
         << "Country: " << country << endl
         << endl;
    fout.close();
    if (who == 1) {
        logInfo << ">> Admin added film." << endl << endl;
    }
}

void welcomeAdm () {
    cout << "================" << endl 
         << "Hello, Administrator!" << endl
         << "Here is list of available commands: " << endl
         << "1. Add film " << endl
         << "2. Find films" << endl
         << "3. Change film" << endl 
         << "================" << endl << endl;

    int answ;
    cout << "Input action: ";
    cin >> answ;
    if (answ == 1) {
        addFilm(1);
    }
    else if (answ == 2) {
        findFilm(1);
    }
    else if (answ == 3) {
        changeFilm(1);

    } else {
        cout << "Unknown command." << endl;
    }
    


};

void welcomeUsr () {
    cout << "================" << endl 
         << "Hello, User!" << endl
         << "Here is list of available commands: " << endl
         << "1. Find films" << endl
         << "================" << endl << endl;
    cout << "Input action: ";
    int answ;
    cin >> answ;

    if (answ == 1) {
        findFilm(0);
    }
};


void choiceRights() {
    string answ;
    cout << "Hello there! Enter password to enter with admin rights" << endl;
    cin >> answ;
    if (answ == password) {
        welcomeAdm();
    } else {
        welcomeUsr();
    }
};


int MediaProduction::amountOfMedia = 0;
int main () {

    choiceRights();

    
    
    logInfo.close();
    return 0;
}