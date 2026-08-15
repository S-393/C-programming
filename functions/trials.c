/*
#include<stdio.h>
int main()
{
	int a=10;
	{
		int b=20;
		printf("%d",b);
	}
	printf("%d",a);
	int a=12;
}
*/
/*
#include<stdio.h>
int func(int x)
{
	x=100;
}
int main()
{
	int x=10;
	x=func(x);
	printf("%d",x);
}
*/


#include<stdio.h>
int foo(int x)
{
	x=100;
}
int main()
{
	int a=10;
	int b=foo();
	printf("%d",b);
}

