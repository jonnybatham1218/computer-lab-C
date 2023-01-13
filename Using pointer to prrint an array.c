#include<stdio.h>
int main (){
	int a[5] = {1,3,7,8,9};
	int *p;
	p = &a[0];
	for (int i=0; i<5; i++)
	{
		printf ("address of a[%d] = %d\n", i, *(p+i)); //Address increases by 4 bytes.
	}
	return 0;
}
