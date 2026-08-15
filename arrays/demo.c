/*
#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	printf("%d",a[i]);
}
*/


#include<stdio.h>
int main()
{
	int a[3],n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("enter the elements:\n");
	scanf("%d",&a[i]);
	}
	a[5]=100;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}

//#include<stdio.h>

