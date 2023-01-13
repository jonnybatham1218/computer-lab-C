#include<stdio.h>
int prime(int a){
	int flag=0;
	for (int i=1; i<=a; i++)
		if (a%i==0)
			flag++;
	
	if (flag==2)
		printf ("Prime\n");
	else
		printf ("Not Prime\n");
}
int armstrong(int a){
	int flag=0, r;
	int temp = a;
	while(a>0){
		a = a/10;
		flag++;
	}
	
	int sum = 0;
	a = temp;
	for (int i=0; i<flag; i++){
	r = a%10;
	int p=1;
	for (int i=1; i<=flag; i++)
	p = r*p;
	sum = sum + p;
	a = a/10;
	}
	
	if (sum == temp)
	printf ("Armstrong\n");
	else
	printf ("Not Armstrong\n");
}
int perfect(int a){
	int r, sum=0;
	for (int i=1; i<a; i++){
		if (a%i==0){
			sum = sum + i;
		}
	}
	if (sum == a)
		printf ("Perfect\n");
	else
		printf ("Not Perfect\n");
}
int main (){
	int n;
	scanf ("%d", &n);
	prime(n);
	armstrong(n);
	perfect(n);
	return 0;
} 
















