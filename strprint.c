#include<stdio.h>

void printstr(char *p);

int main()
{
	char A[15]="TensorPlus";
	printstr(A);
	return 0;
}

void printstr(char *p)
{
	while(*p != '\0'){
		printf("%c",*p);
		p++;
	}
}
