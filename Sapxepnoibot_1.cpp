#include<iostream>
#include<fstream>
using namespace std;

 void sapxep(int a[], int &n)
 {
 	for(int i=0;i<n;i++)
 	{
 		for(int j=n-1;j>i;j--)
 		{
 			if(a[j-1]<a[j])
 			{
 				int temp = a[j-1];
 				a[j-1]=a[j];
 				a[j]=temp;
			}
		 }
	 }
 }
 int main()
 {
 	
 	ofstream outfile;
	outfile.open("Bai1.txt", ios::out | ios::trunc);
 	
 	int n,a[1000];
 	cout<<"Nhap so phan tu: n = ";
 	cin>>n;
 	cout<<"Nhap day can sap xep: "<<endl;
 	outfile<<"Nhap day can sap xep: "<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	for(int i=0;i<n;i++)
 	{
 		outfile<<a[i]<<" ";
	}
	outfile<<endl;

 	sapxep(a,n);
 	
 	cout<<"Ket qua: "<<endl;
 	outfile<<"Ket qua: ";
 	
 	for(int i=0;i<n;i++)
 	{
 		cout<<a[i]<<" ";
 		outfile<<a[i]<<" ";
	}
 	return 0;
 }
