#include<stdio.h>
int main()
{	// Diagonal of an array.
    int m, n;
	scanf ("%d %d", &m, &n);
	
    int a[m][n];
	for (int i=0; i<n; i++)
	for (int j=0; j<m; j++)
	scanf ("%d", &a[i][j]);
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			if (i==j)
			printf ("%d ", a[i][j]);
		}
	}
	
	for (int i=0; i<n; i++)
	for (int j=0; j<m; j++)
    if ((i+j)==(n-1))
    printf ("%d ", a[i][j]);
    return 0;   
}    
