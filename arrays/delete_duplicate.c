#include<stdio.h>
int main()
{
	int arr[10],n;
	printf("enter the no. of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		  if(arr[i] == arr[j])
			{
    			for(int k=j; k<n-1; k++)
        		arr[k] = arr[k+1];
			n--;
			j--;
			}	
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
