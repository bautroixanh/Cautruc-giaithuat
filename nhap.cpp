#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;
int main()
{
	char inp[1002][25];
    int n;
    cin>>n;
    for(int i=0;i<=n;++i)
    {
    	cin>>inp[i];
    	assert(strlen(inp[i])>=1&&strlen(inp[i])<=20);
	}
    int m;
    cin>>m;
    char check[25];
    while(m--)
    {
    	cin>>check;
    	assert(strlen(check)>=1&&strlen(check)<=20);
    	int dem=0;
    	for(int i=0;i<n;i++)
    	{
    		if(strcmp(inp[i],check)==0)
    			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
