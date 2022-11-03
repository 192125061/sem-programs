#include <bits/stdc++.h>
using namespace std;
float cel(float n)
{
   return ((n * 9.0 / 5.0) + 32.0);
}
int main()
{
   	float n;
   	cout<<"enter the temperture: ";
   	cin>>n;
   	cout << cel(n);
	return 0;	
}
