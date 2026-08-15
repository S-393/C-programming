//num is positive or negative

/*
#include<stdio.h>
int main()
{
	float num;
	printf("enter the num");
	scanf("%f",&num);
	(!(num>0))?printf("%f is a negative number",num):printf("%f is a positive number",num);
}
*/

//uppercase to lower and lowercase to upper

/*
#include<stdio.h>
int main()
{
char c,d,e;
printf("enter the letter:");
scanf("%c",&c);
d=c+32;
e=c-32;
((c>=65)&&(c<=90))?printf("%c",d):((c>=97)&&(c<=122))?printf("%c",e):printf("not a letter");
}
*/

//digit or not

#include<stdio.h>
int main()
{
	char ch;
	printf("enter the digit");
	scanf("%c",&ch);
	((ch>=48)&&(ch<=57))?printf("%c is a digit",ch):printf("%c is not a digit",ch);
}

