#include<stdio.h>
#include<string.h>
int main (){
	int l, i;
	char s1[100], s2[200];
	scanf ("%[^\n]s", s1);
	
	l=strlen(s1);
	
	for (i=0; i<l; i++)
	s2[i] = s1[l-1-i];
	
	s2[i]='\0';
	
	if (strcmp(s1, s2)==0)
	printf ("Palindrome");
	else 
	printf ("NOT");
	return 0;
}
