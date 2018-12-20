#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, vitri, min;
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nmang da nhap la : ");
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	min=a[0];
		printf("\nVi tri nho nhat trong mang la : ");

	for(i=0; i<n; i++)
	{
		if(min>a[i]){
			min=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==min){
			printf("%d ",i+1);
		}
	}
	//return 0;
}
