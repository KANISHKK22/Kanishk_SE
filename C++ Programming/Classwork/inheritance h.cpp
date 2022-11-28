#include <iostream>
using namespace std;
class slide
  {
  	protected:
  		int l;
  		public:
  		void set values (int x)
  		{
  			l=x;
		}
  };
  
  class sqaure: public side
    {
    	public:
    		int sq()
    		{
    		 return (l*l);	
			}
	};
	
	int main ()