#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	int ar[200];
	cin>>n;
	int dem1=0;
	int dem2=0;
	int dem3=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]>0)
		dem1=dem1+1;
	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]<0)
		dem2=dem2+1;
	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]==0)
		dem3=dem3+1;
	}
	float a=(float)dem1/n;
	float b=(float)dem2/n;
	float c=(float)dem3/n;
	cout <<setfill('0')<< a <<"\n";
	cout <<fixed<< setprecision(6) << b <<"\n";
	cout <<fixed<< setprecision(6) << c ;
	return 0;
}
