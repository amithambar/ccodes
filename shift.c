#include<stdio.h>

int main()
{
	int value,mask;   // change type here
	char bits[130];
	int k,i;	
        mask=0x01;
	printf("Enter a value-");
        scanf("%d",&value);  // change format specifier according to type of value
		k = sizeof(value);
	k = k*8;
	bits[k] = '\0';
	
	for(i=0;i<k;i++)
	{
		if(value & (mask << i))		
			bits[k-1-i] = '1';
		else
			bits[k-1-i] = '0';
	}
	printf("\nBinary Value=%s\n",bits);	
	return 0;
}
