#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	printf("enter the string1");
	gets(str1);
	printf("enter the string2");
	gets(str2);
	printf("\nThe string2 is %s",strcat(str1,str2));
	return 0;
}
