#include<stdio.h>
int main()
{
	int* pc, c = 0;
	pc = &c;
	c = 1;
	printf ("%d\n", c);
	printf ("%d", *pc);
	
	return 0;
}
