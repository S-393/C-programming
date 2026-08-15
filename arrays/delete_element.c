#include<stdio.h>
int main()
{
	int arr[10],n,index;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		printf("enter the index:\n");
	scanf("%d",&index);
	for(int i=index;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
		n--;
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
