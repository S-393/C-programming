#include<stdio.h>
int main()
{
	int n,index,temp,arr[10];
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the index:\n");
	scanf("%d",&index);
	for(int i=0;i<index;i++)
	{
		temp=arr[i];
		for(int i=1;i<n;i++)
		{
		arr[i-1]=arr[i];
		}
		arr[n-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
