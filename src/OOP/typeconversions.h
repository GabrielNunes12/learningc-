//
// Created by Gabriel Nunes on 11/15/2023.
//
#include <iostream>
#ifndef SRC_TYPECONVERSIONS_H
#define SRC_TYPECONVERSIONS_H

using String_T = std::string;
class typeconversions {
    public:
        typeconversions(const String_T &name, int age, char gender, const String_T &getName) : name(name), age(age),
                                                                                               gender(gender){}

    typeconversions() {}

    private:
        String_T name;
        int age;
        char gender;
    public:
        String_T getName() {
            return this->name;
        }
        int getAge() {
            return this->age;
        }
        void setName(String_T name) {
            this->name = name;
        }
        void setAge(int newAge) {
            this->age = newAge;
        }
        void setGender(char newGender){
            this->gender = newGender;
        }
};


#endif //SRC_TYPECONVERSIONS_H
