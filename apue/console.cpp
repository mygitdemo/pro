#include <iostream>
using std::cout;
using std::endl;


class Base
{
public:
	void func() {cout<<"Base::func()"<<endl;}
};

class Derived : public Base
{
public:
	void func() {cout<<"Derived::func"<<endl;}
};

int main()
{
	Derived *pB = new Derived;

	pB->func();
	while(1);
	return 0;
}