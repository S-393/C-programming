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
	for(int i=n-1;i>index;i--)
	{
		temp=arr[n-1];
		for(int j=n-2;j>=0;j--)
		{
		arr[j+1]=arr[j];
		}
		arr[0]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
