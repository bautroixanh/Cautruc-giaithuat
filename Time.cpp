#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int hh,mm,ss;
	char type;
	char x,y;
	cin>>hh;
	cin>>x;
	cin>>mm;
	cin>>y;
	cin>>ss;
	cin>>type;
	if(type=='P')
	{
		if(hh!=12)
		hh=hh+12;
	} 
	else if(hh==12){
		hh=0;
	}
	cout<<setfill('0')<<setw(2)<<hh<<":";
	cout<<setfill('0')<<setw(2)<<mm<<":";
	cout<<setfill('0')<<setw(2)<<ss;
	return 0;
	
}
