/*
//palindrome or not
#include<stdio.h>
#include<string.h>
char* strrev(char*,int);
int main()
{
	char str[]="madam";
	int len=strlen(str);
	printf("before reversing:%s\n",str);
	char *p=strrev(str,len);
	if(strcmp(p,str)==0)
		printf("palindrome");
	else 
		printf("not a palindrome");
}

char* strrev(char *str,int len)
{
	static char string[10];
	strcpy(string,str);
	char *start,*end,t;
	start=string;
	end=start+len-1;
	while(start<end)
	{
		t=*start;
		*start=*end;
		*end=t;
		start++;
		end--;
	}
	return string;
}
*/

/*
//reverse the string
#include<stdio.h>
#include<string.h>
void strrev(char *str,int len)
{
	char *s,*e,t;
	s=str;
	e=s+len-1;
	while(s<e)
	{
		t=*s;
		*s=*e;
		*e=t;
		s++;
		e--;
	}
}
int main()
{
	char str[20];
	printf("enter the str:\n");
	fgets(str,sizeof(str),stdin);
	int len=strlen(str);
	printf("%s\n",str);
	strrev(str,len);
	printf("after reversing:%s\n",str);
}
*/

/*
//to replace mainstring with *** in place of  sub string 
//m.s:123abc123def
//s.s:123 	o/p:***abc***def
#include<stdio.h>
#include<string.h>
void Hidesubstr(char* p,int len)
{
	while(len>0)
	{
		*p='*';
		p++;
		len--;
	}
}
int main()
{
	char mainstr[20],substr[10],*p;
	printf("enter main str:");
	fgets(mainstr,sizeof(mainstr),stdin);
	if(mainstr[strlen(mainstr)-1]=='\n')
	{
		mainstr[strlen(mainstr-1)]=='\0';
	}
	printf("%ld",strlen(mainstr));
	printf("enter sub str:");
	fgets(substr,sizeof(substr),stdin);
	if(substr[strlen(substr)-1]=='\n'){
		substr[strlen(substr)-1]='\0';
	}
	int len=strlen(substr);
	p=mainstr;
	while((p=strstr(p,substr))!=NULL)
	{
		Hidesubstr(p,len);
		p=p+len;
	}
	printf("MAINSTR:%s\n",mainstr);
}
*/

/*
//to reverse the substr in mainstr
#include<stdio.h>
#include<string.h>
void Reverse(char *p,int len)
{
	char *s,*e,t;
	s=p;
	e=s+len-1;
	while(s<e)
	{
		t=*s;
		*s=*e;
		*e=t;
		s++;
		e--;
	}
}
int main()
{
	char mainstr[20],substr[10];
	printf("enter the mainstr:");
	fgets(mainstr,sizeof(mainstr),stdin);
	if(mainstr[strlen(mainstr)-1]=='\n')
		mainstr[strlen(mainstr)-1]='\0';
	printf("enter the substr:");
	fgets(substr,sizeof(substr),stdin);
	if(substr[strlen(substr)-1]=='\n')
		substr[strlen(substr)-1]='\0';
	int len=strlen(substr);
	char *p;
	p=mainstr;
	while((p=strstr(p,substr))!=NULL)
	{
		Reverse(p,len);
		p=p+len;
	}
	printf("mainstr:%s",mainstr);	
}
*/

//replacing substring with new string
#include<stdio.h>
#include<string.h>
void ReplaceStr(char *p,char *newstr)
{
	while(*newstr)
	{
		*p=*newstr;
		p++;
		newstr++;
	}
}
int main()
{
	char mainstr[20],substr[10],newstr[10];	
	printf("enter the mainstr:");
	fgets(mainstr,sizeof(mainstr),stdin);
	if(mainstr[strlen(mainstr)-1]=='\n')
		mainstr[strlen(mainstr)-1]='\0';
	printf("enter the substr:");
	fgets(substr,sizeof(substr),stdin);
	if(substr[strlen(substr)-1]=='\n')
		substr[strlen(substr)-1]='\0';
	printf("enter the newstr:");
	fgets(newstr,sizeof(newstr),stdin);
	if(newstr[strlen(newstr)-1]=='\n')
		newstr[strlen(newstr)-1]='\0';
	int lenSub=strlen(substr);
	int lenNew=strlen(newstr);
	char *p;
	p=mainstr;
	if(lenSub==lenNew)
	{
		while((p=strstr(p,substr))!=NULL)
		{
		ReplaceStr(p,newstr);
		p=p+lenNew;
		}
	printf("mainstr:%s\n",mainstr);
	}
	else
	printf("substr and newstr lengths are not same\n");

}

