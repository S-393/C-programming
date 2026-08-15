#include<stdio.h>
void PrintBinary(int val)
{
	for(int i=31;i>=0;i--)
	{
		if(val&(1<<i))
			printf("1");
		else
			printf("0");

	}
}
int reverseBits(int val)
{
	for(int i=31,j=0;i>j;i--,j++)
	{
		if(((val>>i)&1)!=((val>>j)&1))
		{
			val=val^(1<<i);
			val=val^(1<<j);
		}
	}
		return val;

}
int main()
{
	int val;
	int i,j;
	printf("enter the value:\n");
	scanf("%d",&val);
	printf("binary equivalent of %d is\n",val);
	PrintBinary(val);
	val=reverseBits(val);
	printf("after reversing\n");
	PrintBinary(val);
	printf("\n");
	printf("%d",val);
}

