#include<iostream>
using namespace std;
class test
{
	public:
		static int objcount;
		int no;
		char name[20];
		int marks;
		
		int getdata()
		{
			cout<<"enter the car no = ";
			cin>>no;
			cout<<"enter tname of car = ";
			cin>>name;
			cout<<"enter the marks = ";
			cin>>marks;
		}
		
		int putdata()
		{
			cout<<"car no = "<<no<<"\n";
			cout<<"car name = "<<name<<"\n";
			cout<<"marks = "<<marks<<"\n";
		}
		
		test()
		{
			objcount++;
		}
};

int test::objcount=0;
int main()
{
	test o1;
	o1.getdata();
	
	test o2;
	o2.getdata();
	
	o1.putdata();
	o2.putdata();
	
	cout<<"\nobect count = "<<test::objcount;
	
}
