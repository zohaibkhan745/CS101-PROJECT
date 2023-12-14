#include<iostream>
using namespace std;
int   sum_natnum(int n)
{
	if(n==1)
	{
		return n;
	}
	return n+sum_natnum(n-1);
	
}
int main()
{
	int n;
	cout<<"Enter number ";
	cin>>n;
	for(int i=1; i<=n ; i++)
	{
		if(i==n)
		{
			cout<<i;
		}
		else
		{
			cout<<i<<"+";
		}
		
	}
	cout<<"="<<sum_natnum(n);
return 0;
}
