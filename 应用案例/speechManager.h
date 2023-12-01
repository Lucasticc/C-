#include<iostream>
using namespace std;

//设计管理类
class SpeechManager{
    public:
    //构造函数
    SpeechManager();
    //菜单功能
    void show_Menu();
    //析构函数
    ~SpeechManager();
    //退出系统
    void exitSystem();
    //开始比赛
    void startGame();
    //查看记录
    void showRecord();
};

//链接不到放在。h文件中实现
 SpeechManager::SpeechManager(){

    }
    void SpeechManager::show_Menu(){
        cout<<"***********************"<<endl;
        cout<<"*******欢迎参加比赛******"<<endl;
        cout<<"*******1.开始比赛*******"<<endl;
        cout<<"*******2.查看记录*******"<<endl;
        cout<<"*******3.查看记录*******"<<endl;
        cout<<"*******0.退出程序*******"<<endl;
        cout<<"***********************"<<endl;
        cout<<endl;


    }
    void SpeechManager::exitSystem(){
        cout<<"欢迎下次使用"<<endl;
        exit(0);
    }
    void SpeechManager::startGame(){
        while(1){
    }}
    //析构函数
    SpeechManager::~SpeechManager(){
        
    }