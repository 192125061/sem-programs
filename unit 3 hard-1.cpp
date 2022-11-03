#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	public:
		student(string s)
		{
			name=s;
		}
		student()
		{
			name="Unknown";
		}
		void print_name()
		{
			cout<<name<<endl;
		}
};
int main()
{
	student s1("jhon");
	student s2;
	s1.print_name();
	s2.print_name();
	return 0;
}
