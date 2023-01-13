#include<stdio.h>
int main (){
	int a[5], large;
	
	for (int i=0; i<5; i++)
	scanf ("%d", &a[i]);
	
	for (int i=0; i<5; i++){
		if (a[0]<a[i])
		a[0] = a[i];
	}
	printf ("Largest = %d", a[0]);
	return 0;
}
