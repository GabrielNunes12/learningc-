//
// Created by Gabriel Nunes on 11/16/2023.
//
#include <iostream>
#include <cmath>
using namespace std;
class triangle {
    public:
        static float calculateHypotenuse(double angleA, double angleB) {
            return sqrt(pow(angleA, 2) + pow(angleB, 2));
        }
};
int main() {
    double angleA, angleB;
    cout << "Please enter a first angle: " << endl;
    cin >> angleA;
    cout << "Please enter a second angle: " << endl;
    cin >> angleB;
    float result = triangle::calculateHypotenuse(angleA, angleB);
    cout << "The side of a triangle is: " << result;
    return 0;
}


