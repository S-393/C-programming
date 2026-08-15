/*
//swaping vlues
#include<stdio.h>
void Swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int x=10,y=20,z;
	Swap(&x,&y);
	printf("%d %d ",x,y);
	}
*/

//highest and second highest
#include<stdio.h>
void First_Highest(int*,int*);
int main()
{
	int n,h=0,sh=0;
	printf("enter the number");
	scanf("%d",&n);
	First_Highest(&n,&h);
	printf("%d is high",h);
	printf("%d is 2nd high",sh);
}
void First_Highest(int *a,int *b)
{
	int t,rem,sh=0;
	t=*a;
	while(t)
	{
		rem=t%10;
		if(rem>*b)
		{
			*b=rem;
			t/=10;
		}
			if((rem>sh)&&(rem!=*b))
		{	
			sh=rem;
			t/=10;
		}
	}
}
