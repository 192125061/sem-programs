#include<iostream>
using namespace std;

int missing(int num[],int start,int end)
{
	if(start>end)
	{
		return end+1;
	}
	if(num[start]!=start)
	{
		return start;
	}
	int mid = (start + end) / 2;
	
	if (num[mid] == mid)
	{
		return missing(num,mid + 1,end);
	}
	
	return missing(num,start,mid);
}

int main()
{
	int num[]={0, 1, 3, 4, 5, 6, 7, 8, 10};
	int result;
	int n=sizeof(num)/sizeof(num[0]);
	result=missing(num,0,n-1);
	cout<<"smallest missing number is = "<<result;
}
