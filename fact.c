#include<stdio.h>

int fact(int);

int main()
{
	int f=5;
	int r;

	r=fact(f);
}

int fact(int s)
{
	int t=1;
	if(s>1)
	    t=s*fact(s-1);
	return t;
}
