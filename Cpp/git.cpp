#include<iostream>

class Person {
    private:
        std::string Name;
        int age;
    public:
    Person();
    ~Person();

};

int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}