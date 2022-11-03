#include<iostream>
using namespace std;
int main()
{
	int num,i=1,sum=0;
	cout<<"Enter the Number = ";
	cin>>num;
	while(i<num)
	{
		if(num%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(num==sum)
	{
		cout<<"perfect number";
	}
}
