/*------------------------------------------------------------------------------
 * @file    VECTOR_SELF.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/17 13:28:10
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * -----------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;


//vctor存放自定义的数据类型
class Person{
public:
Person(string name,int age){
    this->m_Name =name;
    this->m_Age = age;
}
    string m_Name;
    int m_Age;
};

void test01(){
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("aa",10);
    Person p3("a",10);
    Person p4("1",10);

    //向容器中存放数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    //v.push_back(p1); 或者是
    //遍历容器中的数据
    for(vector<Person>::iterator it = v.begin();it<v.end();it++){
        cout<<"姓名"<<(*it).m_Name<<endl;
        cout<<"姓名"<<it->m_Name<<endl;//也可以不解引用 直接对it it是指向Person对象的的迭代器
    }
}

//存放自定义类型的指针
void test02(){
    vector<Person*>v;
    //如果是Person*解引用 解出的是指针类型
    Person p1("aaa",10);
    Person p2("aa",10);
    Person p3("a",10);
    Person p4("1",10);

    //向容器中存放数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    //v.push_back(p1); 或者是
    //遍历容器中的数据
    for(vector<Person*>::iterator it = v.begin();it<v.end();it++){
        cout<<"姓名"<<(*it)->m_Name<<endl;
        // cout<<"姓名"<<it->m_Name<<endl;//也可以不解引用 直接对it it是指向Person对象的的迭代器
    }

}

int main()
{
    test02();

         return 0;
}
