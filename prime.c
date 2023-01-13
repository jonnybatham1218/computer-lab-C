#include <stdio.h>
int prime(int a)
{
    int c = 0;
    for (int i=1; i<=a; i++)
        if (a%i==0)
        c++;
    if (c==2)
    return 1;
    else 
    return 0;
}

int main ()
{
    int e; 
    scanf ("%d", &e);
    if (prime(e))
    printf ("prime");
    else 
    printf ("not prime");
}


















