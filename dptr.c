#include<stdio.h>

int main()
{
	int x=15;
	int *p1;
	int **p2;
	
	p1=&x;
	p2=&p1;

	printf("x=%d\n",x);
	printf("*p1=%d\n",*p1);
	printf("**p2=%d\n\n",**p2);

	printf("&x=%p\n",&x);
        printf("p1=%p\n",p1);
        printf("*p2=%p\n\n",*p2);

	printf("&p1=%p\n",&p1);
	printf("p2=%p\n\n",p2);


	*p1=25;
	printf("After *p1=25, x=%d\n",x);

	**p2=50;
        printf("After **p2=50, x=%d\n",x);



	return 0;
}
