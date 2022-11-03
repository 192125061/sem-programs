#include<iostream>
using namespace std;

class grandfather
{
	protected:
		grandfather()
		{
			cout<<"Received the Property";
		}
};
class grandson:grandfather
{
	
};

int main()
{
	grandson o1;
}
