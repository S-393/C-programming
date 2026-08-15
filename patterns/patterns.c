// *
// **
// ***
// ****
/*
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{ 
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
//a
//bc
//def
//ghij
#include<stdio.h>
int main()
{
	int n,r,c;
	char ch='a';
	printf("enter the number:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++,printf("\n"))
	{
		for(c=1;c<=r;c++)
		{
			printf("%c",ch++);
		}
	}
}
*/

/*
//a
//AB
//abc
//ABCD
#include<stdio.h>
int main()
{
        int n,r,c;
        char ch='a';
	char ch1=65;
        printf("enter the number:\n");
        scanf("%d",&n);
        for(r=1;r<=n;r++,printf("\n"))
        {
                for(c=1;c<=r;c++)
                {
			if(r%2==0)
			{
                        printf("%c",ch1);
			ch1++;
			}
			else
			{
				printf("%c",ch);
				ch++;
                }
        }

	}
}
*/

/*
// 0
// 10
// 010
// 1010
#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",((r+c)%2));
		}
		printf("\n");
	}
}
*/

/*
//    *
//   * *
//  * * *
// * * * *
#include<stdio.h>
int main()
{
        int n,r,c,s;
        printf("enter the number:\n");
        scanf("%d",&n);
        for(r=1;r<=n;r++,printf("\n"))
        {
		for(s=n-r;s>0;s--)
		{
			printf(" ");
		}
                for(c=1;c<=r;c++)
                {
                        printf("* ");
		
                }
        }
}
*/

/*
// ********
//  *    *
//   *  * 
//    *
#include<stdio.h>
int main()
{
        int n,r,c;
        printf("enter the number:\n");
        scanf("%d",&n);
        for(r=n;r>=1;r--,printf("\n"))
        {
                for(c=0;c<n-1;c++)
                {
                        printf(" ");
                }
                for(c=1;c<=2*r-1;c++)
                {
			if(r==n||r==1||c==1||c==2*r-1)
                        printf("*");
			else
				printf("\n");
				return 0;
                }
        }
}
*/


