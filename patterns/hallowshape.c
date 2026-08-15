/*
// *    *
// **  **
// ******
#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			if(c<=r)
			printf("*");
			else
				printf(" ");
		}
			for(c=n;c>=1;c--)
			{
				if(c<=r)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
	}
}
*/

#include<stdio.h>
int main()
{
	int r,c,n,k,s;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(r=-n/2;r<=n/2;r++)
	{
		if(r<0)
			k=-r;
		else
			k=r;
		for(s=n/2;s>k;s--)
		{
			printf(" ");
		}
		for(c=0;c<=k;c++)
		{
				printf("* ");
		}
	printf("\n");
	}
}
