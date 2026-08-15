#include<stdio.h>
int sum_n(int x){
	int s=0;
	while(x)	
	{
	s=s+x%10;
	x=x/10;
	}
return s;
}
int main()
{
	int digit;
	//int a;
	printf("enter the digit:\n");
	scanf("%d",&digit);
//	a=sum_n(digit);
	//printf("%d",a);
	printf("%d",sum_n(digit));

}
