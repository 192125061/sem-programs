#include<iostream>
using namespace std;
class test
{
	public:
		int id;
		char name[10];
		void getdata();
		void putdata();
};
void test::getdata()
{
	cout<<"enter the id = ";
	cin>>id;
	cout<<"enter the name = ";
	cin>>name;
}
void test::putdata()
{
	cout<<id;
	cout<<"\n"<<name<<"\n";
}
int main()
{
	test ob1[5];
	int n,i;
	cout<<"enter the n value ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob1[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		ob1[i].putdata();
	}
}
