#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    unsigned int e;
    short int f;
    long int g;
    long double h;
    unsigned char i;
	
    long long int j;
    long long k;    

    printf("Size of int: %ld bytes\n",sizeof(a));
    printf("Size of float: %ld bytes\n",sizeof(b));
    printf("Size of char: %ld bytes\n",sizeof(c));
    printf("Size of double: %ld bytes\n",sizeof(d));
    printf("Size of unsigned int: %ld bytes\n",sizeof(e));
    printf("Size of short int: %ld bytes\n",sizeof(f));
    printf("Size of long int: %ld bytes\n",sizeof(g));
    printf("Size of long double: %ld bytes\n",sizeof(h));
    printf("Size of unsigned char: %ld bytes\n",sizeof(i));
    printf("Size of long long int: %ld bytes\n",sizeof(j));
    printf("Size of long long: %ld bytes\n",sizeof(k));
    return 0;
}
