#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

template <typename T>
T add(T a,T b)
{
	return a+b;
}

int main()
{
	cout<<add<int>(5,7)<<endl;
	cout<<add<float>(6.3f,47.6f)<<endl;
	cout<<add<string>("Jay", "Kanishk");
	return 0;
}