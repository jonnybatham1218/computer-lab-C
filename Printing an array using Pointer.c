#include<stdio.h>
#include<string.h>
int main (){
	char s[]="Hello";
	char *ptr = s;
	while(*ptr!='\0'){
		printf ("%c", *ptr);
		ptr++;
	}
	return 0;
}
/* char *ptr = "Hello World";
printf ("%s", ptr);*/
