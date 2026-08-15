#include<stdio.h>
int main()
{
	int val,bitpos,cnt=0;
	printf("enter the value\n");
	scanf("%d",&val);
	printf("binary equivalent of %d is\n",val);
	for(bitpos=31;bitpos>=0;bitpos--)
	{
		if(val&(1<<bitpos))
		{
			printf("1");
			cnt++;
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");	
	printf("number of bits are set are %d\n",cnt);
	
}

