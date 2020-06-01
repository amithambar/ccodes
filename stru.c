#include <stdio.h>
#include<stdlib.h>

struct test
{
	char y;
	int a;
	char s;
	float b;
};
int main()
{
	struct test *t1;
	t1 = (struct test*)malloc(sizeof(struct test));
	t1->a=25;
	printf("%p\n",t1);
	printf("%ld\n",sizeof(struct test));
	printf("%p\n",(void *)&(t1->a));
	return 0;
}
