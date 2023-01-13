#include<stdio.h>
int fibonacci(int count);
int main(){
	int terms;
	scanf ("%d", &terms);
	fibonacci(terms);	
	return 0;
}
int fibonacci(int count){
	int a, b, next;
	a = 0;
	b = 1;
	next = a;
	for (int i=0; i<=count; i++)
	{
		printf ("\n%d ", next);
		a = b;
		b = next;
		next = a + b;
	}
	return 0;
}
