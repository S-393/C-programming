#include<stdio.h>
int main()
{
	int num=2432;
	for(int i=15;i>=0;i--)
	{
		printf("%d ",(num>>i)&1);
	}
}

