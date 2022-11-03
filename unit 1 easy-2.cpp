#include<iostream>
#include<string.h>
#include <ctype.h>
using namespace std;
int main()
{
	string a;
	int nu;
	cin>>a;
	if(isdigit(a[1]))
	{
		nu=(int)a[1];
		if(nu%2==0)
		{
			cout<<"even number";
		}
		else
		{
			cout<<"odd number";
		}
	}
	
	
	
	
	
}
