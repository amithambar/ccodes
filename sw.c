#include<stdio.h>

int main()
{
	int a;
	printf("Enter value between 1-5\n");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Inside case 1\n");

		case 2:
                        printf("Inside case 2\n");

		case 3:
                        printf("Inside case 3\n");

		case 4:
                        printf("Inside case 4\n");

		case 5:
                        printf("Inside case 5\n");

		default:
                        printf("Inside default case\n");
	}

	return 0;
}
