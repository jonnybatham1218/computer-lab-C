#include<stdio.h>
int main (){
	int a[5], small;
	
	for (int i=0; i<5; i++)
	scanf ("%d", &a[i]);
	
	for (int i=0; i<5; i++){
		if (a[0]>a[i])
		a[0] = a[i];
	}
	printf ("Smallest = %d", a[0]);
	return 0;
}
