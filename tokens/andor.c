#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the x and y\n");
	scanf("%d %d",&x,&y);
	z=(x<20)&&(y>10)||((x<20)||(y<10));
	printf("%d",z);
}
