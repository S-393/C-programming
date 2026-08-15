#include<stdio.h>
#include<string.h>
int main()
{
	char str[120]="ab  abc   ab      and  ";
	char *p=str;
	while(*p)
	{
		if(*p==' '&&*(p+1)==' ')
		{
			memmove(p,p+1,strlen(p+1)+1);
			--p;
		}
		p++;
	}
	while(str[0]==' ')
	memmove(str,str+1,strlen(str+1)+1);
	int len=strlen(str)-1;
	if(str[len]==' ')
		str[len]='\0';
	printf("%s",str);
}
