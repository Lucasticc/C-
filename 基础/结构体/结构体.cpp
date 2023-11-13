#include <iostream>
#include <string>

using namespace std; // 导入std命名空间，方便使用string类型

// 创建学生数据类型
struct Student {
    // 成员列表
    string name;
    int age;
    int score;
};


int main() {
    // 在这里编写你的代码
    //sturct是可以省略的 创建变量的时候
    struct  Student s1;
    {
        s1.name ="张三";
        s1.age = 18;
        s1.score=100;
    };
    struct Student s2 = {"李四", 19, 80};
    struct Student s3 = {"王二",20};
    
    cout<<s2.name<<endl;
    cout<<s3.score;
    return 0;
}