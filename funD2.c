#include<stdio.h>

int add1(int,int);
int add2(int,int);


int main()
{
	int a=10, b=20,c;
	
	c=add1(a,b);
	
	return 0;
}

int add1(int x,int y)
{
	int z;
	z=add2(x,y);
	return z;
}

int add2(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
