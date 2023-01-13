#include<stdio.h>
int prime (int a, int b)
{	int flag=0;
	
	for (int i=a; i<b; i++){
		flag = 0;
		for (int j=1; j<=i; j++)
		if (i%j==0)
		flag++;
	if (flag==2)
	printf ("%d\n", i);
	}
	
	return 1;
}
int main(){
	int n, m, temp;
	scanf ("%d %d", &n, &m);
	if (n>m){
		temp = n;
		n = m;
		m = temp;
	}
	prime (n,m);
	return 0;
}
