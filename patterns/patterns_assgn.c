// 1
// 01
// 101
// 0101
/*
#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the value:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			if((r+c)%2==0)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
*/

//    A
//   A*B
//  A*B*C
/*
#include<stdio.h>
int main()
{
        int r,c,n,s;
	char ch='A';
        printf("enter the value:\n");
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {
		for(s=n-r;s>0;s--)
		{
			printf(" ");
		}
                for(c=1;c<=r;c++)
                {
                 	printf("%c",64+c);
			if(c<r)
			printf("*");
		
                }
                printf("\n");
        }
}
*/

//A
//BC
//DEF
/*
#include<stdio.h>
int main()
{
        int r,c,n;
	char ch=65;
        printf("enter the value:\n");
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {
                for(c=1;c<=r;c++)
                {
                  printf("%c",ch);
		  ch++;
                }
                printf("\n");
        }
}
*/

// 55555
// ****
// 333
// **
// 1
#include<stdio.h>
int main()
{
	int r,n,c;
	printf("enter the value\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=n-r;c>=0;c--)
		{
			if(r%2==0)
				printf("*");
			else
				printf("%d",c);
		}
		printf("\n");
	}

}

