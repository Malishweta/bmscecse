#include<stdio.h>
int main()
{
	int ch;
	printf("Enter your choice:\n");
	scanf("%d\n",&ch);
	for(;;)
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
	printf("Enter a and b values:\n");
	scanf("%d%d",&a,&b);
	if(a>=5 && b<=10)
	{
		return c=a+b;
	}
	else
	{
		printf("Try again\n");
	}
	printf("SUM:\n",c);

}
void add2()
{
	int a1,b1,c1;
	printf("Enter a1 and b1 values:\n");
	scanf("%d%d",a1,b1);
	if(a1>=20 && b1<=50)
	{
		return c1=a1+b1;
	}
	else
	{
		printf("Try again!!!\n");
	}
	printf("SUM:\n",c1);
	
}
