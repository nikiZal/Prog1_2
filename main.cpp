#include <iostream>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#include "classes/MediaProduction.h"
#include "classes/Cartoon.h"
#include "classes/Film.h"
#include "classes/Rights.h"
#include "classes/User.h"



int MediaProduction::amountOfMedia = 0;
int main () {

    Film bnh("BNH", 0, 0, 0, "USA", {"Horror", "Comedy"});
    Film bnh2(bnh);


    bnh2.changeName("MAMA MIA");
    cout << bnh2 << endl;


    return 0;

}