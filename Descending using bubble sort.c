#include<stdio.h>
int main (){
	int a[5];
	int n=5;
	for (int i=0; i<5; i++)
	scanf ("%d", &a[i]);
	
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++)
		{
			if (a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t; 
			}
		}
	}
	for (int i=0; i<5; i++)
	printf ("%d  ", a[i]);
	return 0;
}
