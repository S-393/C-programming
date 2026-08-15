#include<stdio.h>
int highestDigit(int x)
{
	int h=0,r;
	while(x)
	{
	r=x%10;
		if(r>h)
		{
		h=r;
		}
		x=x/10;
	}
	return h;
}
int main()
{
	int num;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("%d",highestDigit(num));
}

