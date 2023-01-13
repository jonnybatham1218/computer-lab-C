#include<stdio.h>
int dia(int a){
	int d = a/2;
	return d;
}
int circumf(int a){
	float c = 2*3.14*a;
	return c;
}
int area(int a){
	float ar = 3.14*a*a;
	return ar;
}
int main (){
	int r;
	printf ("Enter the radius of Circle = ");
	scanf ("%d", &r);
	
	printf ("%d\n", dia(r));
	printf ("%d\n", circumf(r));
	printf ("%d", area(r));
	return 0;
}

