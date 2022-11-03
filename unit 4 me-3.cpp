#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	cout<<"enter the three numbers ";
	cin>>a>>b>>c;
	p1=&a;
	p2=&b;
	p3=&c;
	if(*p1>*p2 && *p1>*p3)
	{
		cout<<a<<" is largest number";
	}
	else if(*p2>*p1 && *p2>*p3)
	{
		cout<<b<<" is largest number";
	}
	else
	{
		cout<<c<<" is largest number";
	}
	
}
