#include<stdio.h>
int main()
{
	int p,q,r,s,t;
	printf("enter the values of p,q");
	scanf("%d %d",&p ,&q);
	r=(p<=0)&&(q>10);
	printf("%d\n",r);
	s=(p=-19)||(q=19);
	printf("%d\n",s);
	t=(r&&s);
	printf("%d\n",!t);
}	
