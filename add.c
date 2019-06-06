#include<stdio.h>
#include<stdlib.h>
void add1();
void add2();
int main()
{
	int ch;
	printf("1.add1\n2.add2\n3.Exit\n");
	printf("Enter your choice:\n");
	scanf("%d\n",&ch);
	
	switch(ch)
	{
		case 1:add1();
			break;
		case 2:add2();
			break;
		case 3:exit(0);
		default:printf("choose correct option!!!\n");
	}

}
void add1()
{
	int a,b,c;
	printf("Enter a and b  value:\n");
	scanf("%d%d",&a,&b);
	
	if(a>=10)
	{
		 c=a+b;
		printf("SUM:%d\n",c);

	}
	else
	{
		printf("Try again\n");
	}
	
}
void add2()
{
	int a1,b1,c1;
	printf("Enter a1 and b1 value:\n");
	scanf("%d%d",&a1,&b1);
	
	if(a1>=20)
	{
		c1=a1+b1*2;
		printf("SUM:%d\n",c1);
	}
	else
	{
		printf("Try again!!!\n");
	}
	
	
}
