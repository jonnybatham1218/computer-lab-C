#include<stdio.h>
int main(){
	int n, e=0, o=0;
	scanf ("%d", &n);
	
	int a[n], ev[n], odd[n];
	
	for (int i=0; i<n; i++)
	scanf ("%d", &a[i]);
	
	for (int i=0; i<n; i++){
		if(a[i]%2==0)
		{
			ev[e] = a[i];
			e++;
		}
		else
		{
			odd[o] = a[i];
			o++;
		}
	}
	printf ("Even = ");
	for (int i=0; i<e; i++)
	printf (" %d ", ev[i]);
	
	printf ("\nOdd = ");
	for (int i=0; i<o; i++)
	printf (" %d ", odd[i]);
	return 0;
}







