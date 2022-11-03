#include<iostream>
using namespace std;
int main()
{
	int n,sum,i,k;
	cout<<"enter the n=";
	cin>>n;
	cout<<"enter the numbers ";
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k>0)
		{
			sum+=k;
		}
		else
		{
			cout<<"Invalid";
			break;
		}
	}
	cout<<"The Sum= "<<sum;
}
