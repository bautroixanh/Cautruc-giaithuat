#include <iostream>
using namespace std;

int main()
{
    int h,m,ss;
    char s;
	cin>>h;
	cout<<":";
	cin>>m;
	cout<<":";
	cin>>ss;
	getline(cin,s);
	if(strcmp(s,"PM")==0 && h!=12) h=h+12;
	if(strcmp(s,"AM")==0 && h==12) h=0;
	cout<<h<<":"<<m<<":"<<ss;
    return 0;
}

