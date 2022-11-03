#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number: ";
	cin>>num;
	if(num>0)
	{
		cout<<"Cube Root Of Given NUmber = "<<cbrt(num);
	}
	else
	{
		cout<<"Invalid Input";
	}
}
