#include<iostream>
using namespace std;

void quickSort(int arr[], int left, int right)

{
	int i=left,j=right;
	int pivot = arr[(i + j) / 2];
      
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  int tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            } 
      }   
      
      if (left < j){
         
            quickSort(arr, left, j);
            }
      if (i < right){
            
            quickSort(arr, i, right);
}	
}
int main()
{
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
