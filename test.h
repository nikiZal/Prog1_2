#pragma once
#ifndef TEST_H
#define TEST_H

#include <string>
using namespace std;

class Test {
private:
    int a;
public:
    void printHello();
};



class Test1 : public Test {
public:
    void virtual printHello();
};



class Test2 : public Test1 {
public:
    void printHello();
};




#endif