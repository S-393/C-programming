/*
#include<stdio.h>
int main()
{
	int choice;
	scanf("%d",&choice);
	printf("enter the choice:");
	switch(choice)
	{
	default:printf("idefault");
		break;

	case 1:printf("case1");
	       break;

	case 2:printf("case2");
		break;

	case 3:printf("case3");
		break;

	case 4:printf("case4");
	       break;

	case 5:printf("case5");
	       break;
	//default:printf("default 2\n");
		//break;

}
}
*/
/*
//calculator
#include<stdio.h>
int main()
{
	int choice;
	int op1,op2,res;
	printf("1.add 2.sub 3.mul 4.div 5.mod\n");
	printf("enter the choice\n");
	scanf("%d",&choice);
	printf("enter the inputs:");
	scanf("%d %d",&op1,&op2);
	switch(choice)
	{
		case 1:res=op1+op2;
		       printf("%d + %d =%d\n",op1,op2,res);
		       break;
		       
		case 2:res=op1-op2;
		       printf("%d - %d =%d\n",op1,op2,res);
		       break;
		case 3:res=op1*op2;
		       printf("%d * %d =%d\n",op1,op2,res);
		       break;
		case 4:res=op1/op2;
		       printf("%d / %d =%d\n",op1,op2,res);
		       break;

		case 5:res=op1%op2;
		       printf("%d %% %d =%d\n",op1,op2,res);
		       break;
		default:printf("invaild choice entered.");
	}
	printf("calculator task completed. ");
}
*/
/*
//clear,toggle,set,status
#include<stdio.h>
int main()
	{
		int x,bitpos;
		int z,choice;
		printf("1.status 2.toggle 3.clear 4.set\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		printf("enter the number:\n");
		scanf("%d",&x);
		printf("enter the bitpos:\n");
		scanf("%d",&bitpos);
		switch(choice)
		{
			case 1:z=(x&(1<<bitpos));
				printf("%d is the status of bit",z);
				break;

			case 2:z=(x^(1<<bitpos));
				printf("%d is the toggle of bit",z);
				break;

			case 3:z=(x&~(1<<bitpos));
				printf("%d is the cleared the bit",z);
				break;

			case 4:z=(x+(1<<bitpos));
				printf("%d is the set of bit",z);
				break;
		default:printf("invalid choice entered:");
	}

	}
*/

//
