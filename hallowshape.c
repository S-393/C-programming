/*
// *    *
// **  **
// ******

#include<stdio.h>
int main()
{
	int r,c,s,n;
	printf("enter the num:\n");
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

//diamond
#include<stdio.h>
int main()
{
        int r,c,s,n;
        printf("enter the num:\n");
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {
		for(s=1;s<=n;s++,printf(" "))
                for(c=1;c<=2*r-1;c++)
                {
			if(c==1||c==r)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}

		}
		printf("\n");
	}
	for(r=n-1;r>=n;r--)
		for(s=1;s<=n;s++)
		{
			printf(" ");
		}
	for(c=1;c<=2*r-1;c++)
	{
		if(c==1||c==r)
		{
			printf("* ");
		}
		else
		{
			printf("  ");
		}
	}
}

