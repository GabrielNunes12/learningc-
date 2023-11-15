#include <iostream>

int main() {
    bool hasAonString;
    std::string aa = "aaabbbbccc";
    for (char i : aa) {
        if(i == 'a') {
            hasAonString = true;
        }
    }
    std::cout << (!hasAonString ? "Not found" : "Found") << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "I'm learning c++ that's so cool!" << std::endl;
    return 0;
}
