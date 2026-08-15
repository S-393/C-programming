#include<stdio.h>
int main()
{
	int x;
	printf("enter the age:");
	scanf("%d",&x);
	(x>=18)?printf("eligible to vote"):printf("not eligible to vote");
}
