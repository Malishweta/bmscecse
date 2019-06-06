#include<stdio.h>
void getinput(int *a,int *b)
{
	printf("enter a and b values:\n");
	scanf("%d%d",a,b);
}
int add(int a,int b)
{
	int c;
	return c=a+b;
}
void getoutput(int a,int b,int c)
{
	printf("%d+%d=%d\n",a,b,c );
}
int main()
{
	int x,y,z;
	getinput(&x,&y);
	z=add(x,y);
	getoutput(x,y,z);
}
