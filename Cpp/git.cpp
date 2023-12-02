#include<iostream>

class Person {
    private:
        std::string Name;
        int age;
    public:
        Person();
        ~Person();
};

Person::Person() { std::cout << "Khoi Tao" << std::endl; }

Person::~Person() { std::cout << "Huy" << std::endl; }

int main() {
    Person Thanh_Tinh;

    return 0;
}