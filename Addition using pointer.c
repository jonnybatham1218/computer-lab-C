#include<stdio.h>
int addone(int* ptr){
	(*ptr)++;
}
int main(){
	int *p, i=1;
	p = &i;
	addone(p);
	
	printf("%d", *p);
	return 0;
}
