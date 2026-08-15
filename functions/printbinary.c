#include<stdio.h>
void PrintBinary(int);
	int main()
{
	int x,a;
	printf("enter the number:\n");
	scanf("%d",&x);
	PrintBinary(x);
}
void PrintBinary(int num)
{
	int i;
	for(i=31;i>=0;i--)
	{
		if(num&(1<<i))
			printf("1");
		else
			printf("0");
	}
}

