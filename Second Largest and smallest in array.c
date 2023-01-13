#include<stdio.h>
int main(){
	int a[5], temp;
	
	for (int i=0; i<5; i++)
	scanf ("%d", &a[i]);
	
	for (int i=0; i<5; i++){
		for (int j=i; j<5; j++){
			if (a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}
	printf ("Largest = %d  ", a[1]);
	printf ("Smallest = %d  ", a[3]);
	
	for (int i=0; i<5; i++)
		printf("%d ", a[i]);
	return 0;
}
