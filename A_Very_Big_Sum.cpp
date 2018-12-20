#include<iostream>
using namespace std;
long long tong(int ar[], int n)
{
	long long int s=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		s=s+ar[i];
	}
	return s;
}
int main()
{
	int ar[1000],n;
    cout<<tong(ar,n);
    return 0;
}
