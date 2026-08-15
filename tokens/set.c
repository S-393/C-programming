/*
//status
//set
//clear
//toggle
#include<stdio.h>
int main()
{
int x,s,bitpos;
printf("enter the value:\n");
scanf("%d",&x);
printf("enter the bitpos:");
scanf("%d",&bitpos);
//s=x&(1<<2);
//s=(x>>bitpos)&1;

//s=x^(1<<bitpos);

//s=x|(1<<bitpos);

//s=x&(~(1<<bitpos));

printf("%d %d",x,s);
}
*/

/*
//even or odd
#include<stdio.h>
int main()
{
int x;
printf("enet the num:");
scanf("%d",&x);
(x&(1<<0))?printf("%d is odd",x):printf("%d is even",x);
}
*/

//power of 2
#include<stdio.h>
int main()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	(a&(a-1))?printf("%d is not a power of 2,a"):printf("%d is a power of 2,a");
}
