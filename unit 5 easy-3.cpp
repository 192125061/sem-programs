#include<iostream>
using namespace std;

class number
{
	private:
		int t1,t2,t3;
	public:
		number(int a,int b,int c)
		{
			t2=a;
			while(t3<b-7)
			{
				t3=t2+c+1;
				cout<<t3<<"\t";
				t2=t3;	
			}
		}
};

int main()
{
	int a,b,c;
	cout<<"Enter N = ";
	cin>>a;
	cout<<"Enter M = ";
	cin>>b;
	cout<<"Enter K = ";
	cin>>c;
	if(a>0 && b>0 && c>0 && a<b && a!=b)
	{
		cout<<a<<"\t";
		number o1(a,b,c);
	}
	else
	{
		cout<<"Invalid";
	}
}
