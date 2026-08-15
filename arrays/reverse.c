//reverse printing
/*
#include<stdio.h>
void Input(int *,int);
void Print(int *,int);
void RPrint(int *,int);
int main()
{
	int a[5];
	Input(a,5);
	Print(a,5);
	RPrint(a,5);
}
void Input(int *x,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("enter the elements:\n");
		scanf("%d",&x[i]);
	}
}
void Print(int *p,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("%d ",p[i]);
	}
		printf("\n");
}
void RPrint(int *x,int s)
{
	for(int i=s-1;i>=0;i--)
	{
		printf("%d ",x[i]);
	}
}
*/

//same as before but add ; ReverseArray(a,5); after print(a,5); and again Print(a,5);
//
//void ReverseArray(int *p,int s0
//int i,j,t;
//for(i=0,j=s-1;i++,j--)
//t=p[i];
//p[i]=p[j];
//p[j]=t;
//Print(a,50;
//array reverse 
#include<stdio.h>
void ArrayReverse(int *p,int s)
{
	int i,j,t;
	for(i=0,j=s-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}
int main()
{
	int a[10],n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("elements:\n");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
		{
		printf("%d ",a[i]);
		}
	printf("\n");
	ArrayReverse(a,n);
	for(int i=0;i<n;i++)
		{
		printf("%d ",a[i]);
		}

}
