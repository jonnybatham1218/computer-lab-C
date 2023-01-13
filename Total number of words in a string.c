#include<stdio.h>
#include<string.h>
int main (){
	char s[200];
	int c=0;
	scanf ("%[^.]s", s);
	
	for (int i=0; s[i]!='\0'; i++){
		if (s[i]==' ' || s[i]=='\n' || s[i]=='\t')
		c++;
	}
	printf  ("Total number of world = %d", c);
	return 0;
}
