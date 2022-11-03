#include<iostream>
#include<stdexcept>
using namespace std;
int fun(float a)
{
	if(a<1)
	{
		throw logic_error("accept only positive number");
	}
	if(a==0)
	{
		throw runtime_error("not accept zero as input");
	}
}
int main()
{
	float a;
	a=0;
	try
	{
		fun(a);
	}
	catch(runtime_error& e)
	{
		cout<<e.what();
	}
	catch(logic_error& w)
	{
		cout<<w.what();
	}
}
