#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	printf("numbers before swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("numbers after swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
	
}
