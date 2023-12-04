#include<iostream>
using namespace std;

// 基类 Animal
class Animal {
public:
    void eat() {
        cout<<"Animal is eating."<<endl;
    }
};

// 派生类 Dog
class Dog : public Animal {
public:
    void bark() {
        cout<<"Dog is barking."<<endl;
    }
};

// 派生类 Cat
class Cat : public Animal {
public:
    void meow() {
        cout<<"Cat is meowing."<<endl;
    }
};

int main() {
    Dog dog; //创建对象
    Cat cat;

    dog.eat();  // 继承自基类 Animal 的 eat() 函数  子类可以调用父类的函数
    dog.bark(); // Dog 类自己的 bark() 函数

    cat.eat();  // 继承自基类 Animal 的 eat() 函数
    cat.meow(); // Cat 类自己的 meow() 函数

    return 0;
}