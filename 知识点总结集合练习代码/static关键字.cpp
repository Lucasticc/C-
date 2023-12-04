#include<iostream>
using namespace std;

class CTest {
public:
    static int i; // 非静态成员变量

    void print() { // 非静态成员函数
        cout<<"调用类中的函数"<<endl;
    }
};
    int CTest::i = 9; //静态成员变量需要先对他进行初始化

int main() {
    CTest obj; // 创建CTest类的对象
    cout<<CTest::i<<endl;
    // 访问和修改非静态成员变量
    obj.i = 10;

    cout<<obj.i<<endl;

    // 调用非静态成员函数
    obj.print();

    return 0;
}