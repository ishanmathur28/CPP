#include<iostream>

using namespace std;

class Base{
    public:
    void fun1(){
        cout<<"fun1 from Base"<<endl;
    }
     void fun2(){
        cout<<"fun from Base"<<endl;
    }
};

class Derived: public Base{
    public:
    // FUNCTION OVERRIDING::
    void fun2(){
        cout<<"fun2 of derived class"<<endl;
    }

};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}