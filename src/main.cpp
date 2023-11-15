#include <iostream>
//Typedefs it's aliases to other data types typedefs was replaced by 'using' keyword (work better w/ templates
typedef std::string String_t;
using String_t1 = std::string;
int main() {
    bool hasAonString;
    String_t aa = "aaabbbbccc";
    String_t1 bb = "bbbb";
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
