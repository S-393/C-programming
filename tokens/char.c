/*
#include<stdio.h>
int main()
{
	char ch='c';
	printf("%c/n,%d/n,%o/n,%x/n" ,ch,ch,ch,ch);

}
*/
#include<stdio.h>
int main()
{
	int res;
	char ch;
	printf("enter a char:");
	scanf("%c",&ch);
	res=(ch>=65)&&(ch<=90);
	res=((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z'));
}
