#include<stdio.h>
#include<string.h>

int main()
{
	char A[25] = "TensorPlus",B[15]="Training",C[15]="Programming",D[15];

	int l;
	
	printf("A=%s\n",A);
	printf("B=%s\n",B);
	printf("C=%s\n",C);
	printf("D=%s\n",D);


	l = strlen(A);
	printf("Length of A=%d\n",l);

	strcpy(D,C);
	printf("After copying C to D\nC=%s\n",C);
        printf("D=%s\n",D);

	if(strcmp(C,D) == 0){
		printf("After comparison: C and D are same\n");
	}
	else{
		printf("After comparison: C and D are different\n");
	}

	strcat(A,B);
	printf("Concatenation of A and B=%s\n",A);

	return 0;
}
