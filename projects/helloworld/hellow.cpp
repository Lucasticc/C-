#include <iostream>
#include <vector>
#include <string>
#include"add.h"

using namespace std;

int main()
{
    vector<string> msg;
    msg.push_back("Hello");
    msg.push_back("C++");
    msg.push_back("World");
    msg.push_back("from");
    msg.push_back("VS code");
    msg.push_back("and the C++ extension!");

    for(int i=0; i<msg.size(); i++)
	    {
	        cout<<msg[i]<<" ";
	    }
    cout<<add(1,2);
    cout<<endl;
}
