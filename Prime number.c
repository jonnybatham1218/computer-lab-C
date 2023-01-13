#include<stdio.h>
int main (){
	int a, b, flag=0;
	scanf ("%d %d", &a ,&b);
	
	for (int i=a; i<b; i++){
		flag = 0;
		for (int j=1; j<=i; j++){
			if (i%j==0)
			flag++;
		}
		if (flag == 2)
		printf ("%d\n", i);
	}
	return 0;
}
