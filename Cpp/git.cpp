#include<iostream>

class Person {
    private:
        std::string Name;
        int age;
    public:
        Person(std::string Name,int Age);
        ~Person();
        int getAge();
        std::string getName();
        void Hello();
};

// Person::Person() { std::cout << "Khoi Tao" << std::endl; }
Person::Person(std::string Name,int Age) {
    this->Name = Name;
    this->age = Age;
}

std::string Person::getName() {
    return this->Name;
}

int Person::getAge() {
    return this->age;
}


void Person::Hello() {
    std::cout << "Hello" << std::endl;
}

Person::~Person() { std::cout << "Huy" << std::endl; }

int main() {
    Person Thanh_Tinh("Thanh Tinh",20);
    Thanh_Tinh.Hello();
    
    return 0;
}