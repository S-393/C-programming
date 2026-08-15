#include<stdio.h>
long long int fact(int);
int main()
{
	int num;
	printf("enter the num\n:");
	scanf("%d",&num);
	printf("%lld",fact(num));
}
long long int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
