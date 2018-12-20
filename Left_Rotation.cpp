#include<iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	d=d%n;
	for(int i=d;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	for(int i=0;i<d;i++)
	{
	 cout<<ar[i]<<" ";
	}
}
