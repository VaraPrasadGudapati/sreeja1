#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[20],str2[20];
	printf("enter the string\t");
	gets(str);
	strcpy(str2,str);
	strrev(str2);
	if(strcmp(str,str2)==0)
	printf("palindhrom");
	else
	printf("not palindhrom");
	
	
	}
