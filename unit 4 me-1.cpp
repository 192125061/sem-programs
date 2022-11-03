#include<iostream>
using namespace std;
class circle
{
	public:
		int r;
};
class triangle:public circle
{
	public:
		int l,b;
};
class area:public triangle
{
	public:
		int data()
		{
			cout<<"r = ";
			cin>>r;
			cout<<"l = ";
			cin>>l;
			cout<<"b = ";
			cin>>b;
			cout<<"area of circle "<<2*r*r;
			cout<<"area of rectangle "<<l*b;
		}
};
int main()
{
	area o1;
	o1.data();
}
