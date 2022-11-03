#include<iostream>
using namespace std;
void myfun(int a=0,int b=0,int c=0,int d=0)
{
	cout<<"The Sum is= "<<a+b+c+d;
}

int main()
{
	int a,b,c,d;
	myfun(10,15,25);
}
