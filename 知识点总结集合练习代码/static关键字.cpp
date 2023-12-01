#include <iostream>
using namespace std;

class CTest {
public:
static int i;
};

int CTest::i = 0;//调用类中的静态变量

int main() {
// 访问静态变量
cout<<CTest::i <<endl;
// 修改静态变量的值
CTest::i = 10;

// 再次访问静态变量
cout<<CTest::i<<endl;

return 0;
}