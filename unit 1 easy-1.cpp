#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name,lower,upper;
	
	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	cin>>name;
	for (int i = 0; i < name.length(); i++)
  	{
  		name[i] = toupper(name[i]);
  	}
	cout<< "\nThe Given String in Uppercase = " <<name;
	
	for (int i = 0; i < name.length(); i++)
  	{
  		name[i] = tolower(name[i]);
  	}
	cout<<"\nThe Given String In Lowercase = "<<name;		
 	return 0;
}
