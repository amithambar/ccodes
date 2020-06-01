#include<stdio.h>

void printarr(int *p,int s);

int main()
{
	int A[5]={1,2,3,4,5};
	printarr(A,5);
	return 0;
}

void printarr(int *p,int s)
{
	int i;
	for(i=0;i<s;i++){
		printf("%d\n",*p);
		p++;
	}
}
