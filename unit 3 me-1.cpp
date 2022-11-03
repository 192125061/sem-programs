#include<iostream>
using namespace std;
class area
{
	public:
		area(int a)
		{
			cout<<3.14*a*a;
		}
		area(int a,int b)
		{
			cout<<"\n"<<a*b;
		}
		area(int a,int b,float c)
		{
			cout<<"\n"<<a*b*c;
		}
};
int main()
{
area cir(3);
area re(6,7);
area tir(2,3,0.5);
}
