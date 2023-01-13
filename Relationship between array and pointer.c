#include<stdio.h>
int main()
{
	int x[5];
	
	for(int i = 0; i < 5; ++i) {
      printf("&x[%d] = %d\n", i, &x[i]);
	   }

   printf("Address of array x: %d", x);
	return 0;
}
