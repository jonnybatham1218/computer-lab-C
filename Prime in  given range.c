#include <stdio.h>
int checkPrimeNumber(int);
int main ()
{
    int n1, n2, n, c=0;
    scanf ("%d %d", &n1, &n2);
    
    if (n1>n2)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    
    for (int i=n1; i<n2; i++)
    {
        int z = checkPrimeNumber(i);
    }
    return 0;
}    
    
    
int checkPrimeNumber(int n){
    int c=0;
    for (int j=1; j<=n; j++)
    {   
        if (n%j==0)
        c++;
    }
    
    if (c==2)
    printf ("%d", n);
}    
    
    
    
    
    
    
    