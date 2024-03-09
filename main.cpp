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

#include "test.h"

int MediaProduction::amountOfMedia = 0;
int main () {


    /* TASK 1 */
    // Test a;
    // Test *b = new Test1;
    // Test1 *c = new Test2;

    // b->printHello(); 
    // c->printHello();


    MediaProduction *a = new Film;
    cout << *a << endl; // TASK 6

    Film b;
    MediaProduction &bLink = b;
    cout << bLink.getStatic() << endl; // TASK 3

    return 0;
}