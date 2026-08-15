#include<stdio.h>
int main()
{
  int arr[10],i,temp,n;
  printf("enter the number of elements:\n");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
	  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
	  if(arr[i]==0)
	  {
		  temp=arr[i];
		  for(int j=i;j<n-1;j++)
		  {
			  arr[j]=arr[j+1];
		  }
		  arr[n-1]=temp;
	  i--;
	  }

  }
for(i=0;i<n;i++)
  printf("%d",arr[i]);
  printf("\n");
}


