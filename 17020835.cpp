#include<stdio.h>
#include<conio.h>
void khuFibo(int a[], int &n)
{	

	//int n = fgetc(f);
	int n1 = 1 , n2 = 1, n3 ;
		a[0] = 1;
		a[1] = 1;

	printf("%d %d ",n1,n2);
	for(int i = 2; i<n ;i++)
	{
		n3=n1+n2;
		a[i]=n3;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
	
}
void docfile(int &n)
{
	FILE *f;
    f=fopen("intput.txt","rt");
	fscanf(f,"%d",&n);
	printf("so pha tu Fibonacci %d: ", n);
	fclose(f);
}
void ghifile(int a[],int &n)
{
	FILE *f;
    f=fopen("output.txt","wt");
    fprintf(f,"So phan tu %d:",n);
    for(int i=0;i<n;i++)
        fprintf(f,"%d ",a[i]);
    fclose(f);
}
	int main()
	{	int a[100];
		int k;
		docfile(k);
		khuFibo(a,k);
		ghifile(a,k);
		return 0;
	}

