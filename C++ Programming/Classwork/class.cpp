#include <iostream>  
using namespace std;

class demo{
      public:
      	string name;
      	
      	void getName()
      	{
      		
      		cout<<"enter name"<<endl;
      		cin>>name;
		}
		
		void showName()
		{
			cout<<"your name is : "<<name;
		}
};

int main()
{
	demo kanishk;
	kanishk.getName();
	kanishk.showName();	
	return 0;
	
}