#include <iostream>
//Typedefs it's aliases to other data types
typedef std::string String_t;
int main() {
    bool hasAonString;
    String_t aa = "aaabbbbccc";
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
