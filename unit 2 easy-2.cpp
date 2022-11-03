#include<iostream>
using namespace std;
int age;
int getperson()
{
	cout<<"enter the your age = ";
	cin>>age;
}

int main()
{
	int re;
	getperson();
	if(age>=18)
	{
		cout<<"ready to vote";
	}
	else
	{
		re=18-age;
		cout<<"you have "<<re<<"years to vote";
	}
}
