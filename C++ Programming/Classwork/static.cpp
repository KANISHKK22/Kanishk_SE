#include<iostream>
using namespace std;

  
  class staticD{
  	public:
  		
  		static int objectcount;
  		int h;
  		
  		staticD()
  		{
  			cout<<"default constructor called";
  			objectcount++;
		  }
  };
  
  int staticD :: objectcount = 0;
  
  int main()
  {
  	staticD s,s1,s2,s3;
  	cout<<"\nObject's in class are :"<<staticD::objectcount;
	  
	  return 0;  
}
  	