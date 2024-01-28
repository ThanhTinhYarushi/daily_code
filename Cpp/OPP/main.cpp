#include <iostream>
#include <string>
#include "lib.h"

class Person {
    private:
        std::string Name;
        int Age;
        double GDP;
    public:
        Person();
        ~Person();
};

Person::Person() {
    std::cout << "Khoi Tao";
}

Person::~Person() {
    std::cout << "Huy";
}

int main() {
    int n;
    std::cout << "Nhap gia tri n:";
    if (snt(n) == 1) {
        std::cout << n <<" la so nguyen to!";
    }
    else {
        std::cout << n << "khong la so nguyen to!";
    }
    return 0;
}