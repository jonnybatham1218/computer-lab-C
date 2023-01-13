#include<stdio.h>
int cube(int a)
{
	int vl;
	vl = a*a*a;
	printf ("%d", vl);
}
int main (){
	int x;
	scanf ("%d", &x);
	cube(x);
	return 0;
}
