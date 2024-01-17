// example of single inheritance
#include <iostream>

using namespace std;

class parent{
    public:
    parent(){
        cout<<"Constructor of parent class is called"<<endl;
    }
};

class child: public parent{
    public:
    child(){
        cout<<"Constructor of child class is called"<<endl;
    }
};

int main()
{
    child c;

    return 0;
}