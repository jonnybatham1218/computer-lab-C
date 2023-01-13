	#include<stdio.h>
#include<string.h>
int main() {
	
	char s[200];
	gets (s);
	
	int ac=0, dc=0, scc=0; 
	
	for (int i=0; s[i]!='\0'; i++){
		if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
			ac++;
		else if (s[i]>='0' && s[i]<='9')
			dc++;
		else
			scc++;
	}
	 printf ("Alphabets = %d\n", ac);
	 printf ("Digit Count = %d\n", dc);
	 printf ("Special Character Count = %d\n", scc);
	
	return 0;
}
