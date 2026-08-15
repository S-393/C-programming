#include<stdio.h>
void Input(int*,int);
void Print(int *,int);
int HighestEle(int *p,int s)
{
	int i,h;
	h=p[0];
	for(i=1;i<s;i++)
	{
		if(p[i]>h)
			h=p[i];
	}
	return h;
}
int main()
{
	int a[5];
	Input(a,5);
	Print(a,5);
	printf("%d",HighestEle(a,5));
}
void Input(int*p,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("enter the elements:\n");
		scanf("%d",&p[i]);
	}
}
void Printf(int *p,int s)
{
	for(int i=0;i<s;i++)
	printf("%d ",p[i]);
}

