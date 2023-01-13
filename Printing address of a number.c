#include<stdio.h>
int main (){
	int i;
	for (i=0; i<=10; i++){
		printf ("address of %d = %u\n", i, &i);
	}//address remains same.
	return 0;
}
