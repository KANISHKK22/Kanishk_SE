#include<iostream>
using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"Hello msg from A";
		}
};

class B : virtual public A{
	
};

class C : virtual public A{
	
};

class D : public B, public C{
	
};

int main()
{
	D d;
	d.msg();
}



