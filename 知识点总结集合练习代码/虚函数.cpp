#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  { //override加上就是显示的声明从C++11开始，使用override关键字可以增加代码的可读性和安全性。
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Output: Dog barks
    animal2->makeSound(); // Output: Cat meows

    delete animal1;
    delete animal2;

    return 0;
}