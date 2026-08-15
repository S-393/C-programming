#include<stdio.h>
int main()
{
	int i=-1;
        int res;
	res=sizeof(i)>i;
	printf("res=%d\n",res);
}
