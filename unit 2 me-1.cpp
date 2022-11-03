#include<iostream>
using namespace std;
int fun(int a,int b)
{
	return a+b;
}
int fun(int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"enter the number = ";
	cin>>a>>b>>c;
	cout<<fun(a,b);
	cout<<"\n"<<fun(a,b,c);
}
