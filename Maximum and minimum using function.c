#include<stdio.h>
int value(int a, int b){
	if (a>b)
	{
		printf ("Maximum = %d\n", a);
		printf ("Minimum = %d", b);
	}
	else
	{
		printf ("Maximum = %d\n", b);
		printf ("Minimum = %d", a);
	}
}
int main (){
	int a, b;
	scanf ("%d %d", &a, &b);
	value(a, b);
	return 0;
}
