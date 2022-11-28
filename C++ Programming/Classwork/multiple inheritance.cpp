#include<iostream>

using namespace std;

class marks{
	public:
		
		int id;
		string name;
		
		student()
		{
			id= 100;
		}
		
		void getname()
		{
			cout<<"enter name";
			cin>>name;
		}
		
};

class extramarks{
	public:
		int s1,s2,s3,total;
		float avg;
		
		result()
		{
			s1=56;
			s2=58;
			s3=60;
			total = s1+s2+s3;
			avg = (float)total/3;
		}
		
		void display()
		{
			cout<<"id :"<< id<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"sports marks :"<<sp<<endl;
			cout<<"total marks:"<<total<<endl;
			cout<<"average :"<<avg;
		}
		
		
		
};

 
 
 int main()
 {
 	result r;
 	r.
 }