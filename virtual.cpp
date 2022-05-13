#include<iostream>
using namespace std;

class A{
	public:
		virtual void display(){
			cout<<"This is a Base class A"<<endl;
		}
};

class B: public A{
	public:
		void display(){
			cout<<"This is the base class B"<<endl;
		}
};
int main(){
A*a;
B b;
a=&b;
(*a).display();
//a->display(); 

	return 0;
}

