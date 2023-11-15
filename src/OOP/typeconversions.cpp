//
// Created by Gabriel Nunes on 11/15/2023.
//

#include "typeconversions.h"
#include <iostream>
using namespace std;
int main() {
    string name;
    cout << "Hello, new user! " << endl;
    cout << "What's your name? " << endl;
    cin >> name;
    typeconversions typo = *new typeconversions();
    typo.setName(name);
    cout << "Nice to meet you, " << typo.getName();
}