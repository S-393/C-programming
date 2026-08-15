#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
int cnt;
char *** insert(char ***);
void print(char ***);
char *getstring();
int main()
{
	char ***DB=NULL;
	char choice;
	while(1)
	{
		printf("i.insert p.print e.exit");
		printf("enter the choice");
		__fpurge(stdin);
			scanf("%c",&choice);
		switch(choice)
		{
			case 'i' :DB=insert(DB);
				  break;
			case 'p' :print(DB);
				  break;
			case 'e' :exit(0);
		}
	}
}
char *** insert(char ***DB)
{
	DB=realloc(DB,(cnt+1)*sizeof(*DB));
	DB[cnt]=malloc(3*sizeof(**DB));
	printf("enter the name:\n");
	DB[cnt][0]=getstring();
	printf("enter the mailid:\n");
	DB[cnt][1]=getstring();
	printf("enter the mobile no:\n");
	DB[cnt][2]=getstring();
	cnt++;
}
void print(char ***DB)
{
	for(int i=0;i<cnt;i++)
	{
		printf("name:%s\n",DB[i][0]);
		printf("mailid:%s\n",DB[i][1]);
		printf("mobile no:%s\n",DB[i][2]);
	}
	printf("\n");
}
char *getstring()
{
	char *p=NULL;
	int i=0;
	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}


