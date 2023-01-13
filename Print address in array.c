#include<stdio.h>
int main (){
	int a[5] = {1,3,7,8,9};
	for (int i=0; i<5; i++)
	{
		printf ("address of a[%d] = %u\n", i, &a[i]); //Address increases by 4 bytes.
	}
	return 0;
}
