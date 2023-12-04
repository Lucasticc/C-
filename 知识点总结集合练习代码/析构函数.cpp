#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass* obj = new MyClass(); // 动态分配对象
    delete obj; // 释放对象所占用的内存
//需要注意的是，只有通过new关键字动态分配的对象才需要手动释放内存。对于栈上的对象，当其超出作用域时，编译器会自动调用析构函数并释放内存。
    return 0;
}