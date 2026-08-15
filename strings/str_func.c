/*
#include<stdio.h>
int mystrlen(char*);
int main()
{
	char str[10]="alphabets";
	int len;
	len=mystrlen(str);
	printf("%d",len);
}
int mystrlen(char *p)
{
	int cnt=0;
	while(*p)
	{
		 cnt++;
		 p++;
	}
	return cnt;
	
}
*/

/*
//strcpy
#include<stdio.h>
#include<string.h>
void mystrcpy(char*,char*);
int main()
{
	//char str1[10]="orange";
	//char str2[10]="FRUIT";
	char str1[10],str2[10];
	printf("enter the str1:\n");
	fgets(str1,sizeof(str1),stdin);
	if(str1[strlen(str1)-1]=='\n')
		str1[strlen(str1)-1]='\0';
	printf("enter the str1:\n");
	fgets(str2,sizeof(str1),stdin);
	if(str2[strlen(str2)-1]=='\n')
		str2[strlen(str2)-1]='\0';
	mystrcpy(str1,str2);
	printf("%s %s",str1,str2);
}
void mystrcpy(char *p1,char *p2)
{
	while(*p2)
	{
		*p1=*p2;
		p1++;
		p2++;
	}
}

*/

/*
//strcmp
#include<stdio.h>
#include<string.h>
int mystrcmp(char *,char *);
int main()
{
	char str1[10],str2[10];
	printf("enter the str1:\n");
	fgets(str1,sizeof(str1),stdin);
		if(str1[strlen(str1)-1]=='\n')
			str1[strlen(str1)-1]='\0';
	printf("enter the str2:\n");
	fgets(str2,sizeof(str2),stdin);
	if(str2[strlen(str2)-1]=='\n')
		str2[strlen(str2)-1]='\0';
	int cmp=mystrcmp(str1,str2);
	printf("%d",cmp);
}
int mystrcmp(char *s1,char *s2)
{
	while(*s1==*s2)
	{
	s1++;
	s2++;
	}
	return *s1-*s2;
}
*/

/*
#include<stdio.h>
char * mystrchr(char *,char);
int main()
{
	char str[]="vectorabc";
	char *p;
	p=mystrchr(str,'c');
	printf("%s",p);
}
char * mystrchr(char *p,char ch)
{
	while(*p)
	{
		if(*p=='c')
			return p;
		p++;
	}
	return NULL;
}
*/


