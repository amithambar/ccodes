#include <stdio.h>



int main()
{
	auto int x=10;
	static int y=20;
	int z;
	z=x+y;
	printf("%d",z);
	return 0;
}
