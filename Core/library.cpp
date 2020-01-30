#include "library.h"

#include <iostream>
using namespace std;

class Junior {
    string name;
    int grade;
    // stage in year
    int stage;
    string sphere;
    friend string hello(Junior a);
public:
    Junior() {
        this->name = "Ismoil";
        this->stage = 1;
        this->grade = 4;
        this->sphere = "iOS Developer";
    }

    Junior(string name, int grade, int stage, string sphere) {
        this->name = name;
        this->stage = stage;
        this->grade = grade;
        this->sphere = sphere;
    }

};

string hello(Junior a) {
    return "Hello " + a.name;
}
void hello() {
    Junior ismoil = Junior();
    cout << "Hello, World!" << hello(ismoil) <<  endl;
}