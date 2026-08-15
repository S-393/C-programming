//ex-or
/*
 * #include<stdio.h>
int main()
{
	int x=10,y=35,z;
	z=x^y;
	printf("%d",z);

}
*/
//or,and 
/*
#include<stdio.h>
int main()
{
int x,y,o,a;
printf("enter the values x,y");
scanf("%d %d",&x,&y);
o=x|y;
a=x&y;
printf("%d\n",o);
printf("%d\n",a);
}
*/
/*
//not
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the value of x");
	scanf("%d",&x);
	y=~x;
	printf("%d",y);
}
*/

/*
//L shift
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter :");
	scanf("%d",&x);
	y=x<<2;
	printf("%d %d",x,y);
}
*/
/*
//R shift
#include<stdio.h>
int main()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	printf("%d",x>>2);
}
*/

/*
//L&R shift
#include<stdio.h>
int main()
{
int x;
printf("enter:");
scanf("%d",&x);
printf("%d %d",x<<2,x>>2);
}
*/

/*
//comma
#include<stdio.h>
int main()
{
	//int a=(10+3,45+23,-39+9);
	int a=5;
	a=(a++,--a,a=10,((a<20)&&(a--)));
	printf("%d",a<<2);
}
*/

//
