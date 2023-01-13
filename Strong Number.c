#include<stdio.h>
int main (){
	int a, flag=0, temp;
	scanf ("%d", &a);
	temp = a;
	while(a>0){
		a = a/10;
		flag++;
	}
	
	a = temp;
	int r, sum=0;
	for (int i=1; i<=flag; i++){
		r = a%10;
		int  fact=1;
			for (int i=1; i<=r; i++)
				fact = fact*i;
		sum += fact;
		a = a/10; 
	}

	if (temp == sum)
	printf ("Strong");
	else 
	printf ("Not strong");
	return 0;
	}
