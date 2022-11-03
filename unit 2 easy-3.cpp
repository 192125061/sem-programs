#include<iostream>
#include<string.h>
using namespace std;
inline char check(char a[10],char b[10])
{
	if(!strcmp(a,b))
	{
		cout<<"valid";
	}
	else
	{
		cout<<"not valid";
	}
}
int main()
{
	char a[10],b[10];
	cout<<"enter the string1 = ";
	gets(a);
	cout<<"enter the string2 = ";
	gets(b);
	cout<<"\n"<<check(a,b);
}
