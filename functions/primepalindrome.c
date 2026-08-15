#include<stdio.h>
int Prime(int);
int Palindrome(int);
int main()
{
	int min,max;
	printf("enter the number:\n");
	scanf("%d %d",&min,&max);
	for(min;min<max;min++)
	{
	if(Prime(min)&&Palindrome(min))
	{
		printf("%d,",min);
		
	}
	}
}
int Prime(int x)
{
	int i;
		for(i=2;i<x;i++)
		{
			if(x%i==0)	
				return 0;
		}
			return 1;		
}
int Palindrome(int)
{
	int a,temp,r=0;
	temp=a;
	while(temp)
	{
	r=r*10+temp%10;
	temp=temp/10;
	}
	if(r==a)
	return 1;
	else 
		return 0;
}

