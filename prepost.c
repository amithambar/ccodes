#include <stdio.h>

int main()
{

    int a=10,b,c;
   
    b=a++;
    printf("b=%d\na=%d\n\n",b,a);
    
    a=10;

    c=++a;
    printf("c=%d\na=%d\n",c,a);
    
    return 0;
}

