#include<stdio.h>
int main(){
	int i, a[5], sum=0;
	for (i=0; i<5; i++){
		scanf ("%d\n", a + i);
		
		sum += *(a+i);
	}
	printf("sum = %d", sum);
	return 0;
}
