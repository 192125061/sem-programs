#include<iostream>
#include<stdexcept>
using namespace std;
int fun(int a,int b)
{
	if(b==0)
	{
		throw logic_error("Math Error: while tring to diviseble zero");
	}
	return a/b;
}

int main()
{
	int a,b;
	a=10;
	b=0;
	try
	{
		cout<<fun(a,b);
	}
	catch(logic_error & e)
	{
		cout<<"Excention occered"<<"\n"<<e.what();
		
	}
}
