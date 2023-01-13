#include<stdio.h>
int number(int a){
	if (a%2==0)
	printf ("Number is even = %d", a);
	else
	printf ("Numner is odd = %d", a);
}
int main (){
	int n;
	scanf ("%d", &n);
	number(n);
	return 0;
}