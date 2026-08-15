#include<stdio.h>
int main()
{
	float x,y;
	printf("enter the value");
	scanf("%f",&x);
        printf("%f\n",x);
	y=x++;
	printf("%f\n %f",y,x);
}
