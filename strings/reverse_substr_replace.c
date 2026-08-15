/*
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void reverse(char *p,int l);
int main()
{
	char mainstr[20],substr[10],r[10];
	printf("enter the mainstr:\n");
	scanf("%[^\n]s",mainstr);
	printf("enter the substr:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",substr);
	int l=strlen(substr);
	char *p;
	p=mainstr;
	while((p=(strstr(p,substr)))!=NULL)
	{
		reverse(p,l);
		p=p+l;
	}
	printf("%s",mainstr);
}
void reverse(char *p,int l)
{
	char *s,*e,temp;
	s=p;
	e=s+l-1;
	while(s<e)
	{
	    temp=*s;
	    *s=*e;
	    *e=temp;
	    s++;
	    e--;
	}
}
*/

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char * str_reverse(char *s,char *r)
{
	int i=0,j=strlen(s)-1;
	while(j>=0)
	{
		r[i]=s[j];
		i++;
		j--;
	}
	return r;
}

int main()
{
	char str1[20],str2[10],r[10];
	printf("enter the str1:\n");
	scanf("%[^\n]s",str1);
	printf("enter the str2:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	int l=strlen(str2);
	str_reverse(str2,r);
	char *p;
	p=str1;
	while(p=strstr(p,str2))
	{
		memcpy(p,r,l);
		//memmove(p,r,l);
		//strncpy(p,r,l);
		p=p+l;
	}
	printf("%s",str1);
}
