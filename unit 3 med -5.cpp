#include<iostream>
using namespace std;
class triangle
{
	public:
		int n,p,q,i,j;
		triangle()
		{
			cout<<"enter the n value ";
			cin>>n;
			for(i=0;i<=n;i++)
			{
				if(i%2==0)
				{
					p=0;
					q=1;
				}
				else
				{
					p=1;
					q=0;
				}
				for(j=0;j<=i;j++)
				{
					if(j%2==0)
					{
						cout<<p;
					}
					else
					{
						cout<<q;
					}
				}
				cout<<endl;
			}
		}
		~triangle()
		{
		}
		
};

int main()
{
	triangle ob1;
}
