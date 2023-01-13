#include <stdio.h>

int main()
{
    int a, flag=0, r;
    
	scanf ("%d", &a);
	
	while(a>0){
		r = a%10;
		flag++;
		r = a/10;
	}
    
	printf ("%d", a);
    return 0;
}

