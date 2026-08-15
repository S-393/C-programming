/*
//strlen and fgets;
#include<stdio.h>
#include<string.h>
int main(){
	char str[]="vector";
	//fgets(str,sizeof(str),stdin);
	//if(str[strlen(str)-1]=='\n'){
		//str[strlen(str)-1]='\0';
	//}

	printf("%d",sizeof(str));
}
*/

/*
//strlen
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]="vector";
	printf("%s",str);
	printf("%zu",strlen(str));
}
*/

/*
//initialization of strlen;
#include<stdio.h>
#include<string.h>
int mystrlen(char *p)
{
	int count=0;
	while(*p)
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char str[]="vector";
	int len=mystrlen(str);
	printf("len:%d\n",len);
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
        char str[20];
        printf("enter str:");
        fgets(str,7,stdin);
        printf("%s",str);

}
*/
