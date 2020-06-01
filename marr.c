#include<stdio.h>

int main()
{
	int A[3][5]={{4,3,5,8,9},{2,5,6,2,8},{8,6,6,1,9}};
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}

	return 0;
}
