#include<stdio.h>
int main (){
	int* pc, c;
	c = 9;
	pc =&c;
	printf ("%d", *pc);
	return 0;
}
