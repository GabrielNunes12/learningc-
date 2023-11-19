//
// Created by Gabriel Nunes on 11/18/2023.
//
#include <iostream>
#include <cmath>
//formula c² = a² + b²
using namespace std;
int main() {
    double posA, posB, verticalA, verticalB;
    cout << "Your current horizontal position: " << endl;
    cin >> posA;
    cout << "Your desired horizontal position: " << endl;
    cin >> posB;
    cout << "Your current vertical position: " << endl;
    cin >> verticalA;
    cout << "Your desired vertical position: " << endl;
    cin >> verticalB;
    double finalPos = sqrt(pow((posA - posB), 2) + pow((verticalA - verticalB), 2));
    cout << "Your position is: " << finalPos;
    return 0;
}