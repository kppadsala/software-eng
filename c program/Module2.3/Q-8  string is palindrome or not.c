//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
main(){
	char str[20],str2[20];
	printf("\n Enter String :");
	gets(str);
	strcpy(str2,str);
	strrev(str);
	(strcmp(str,str2)==0)?printf("\n Given String is Palindrome"):printf("\n Given String is not palindrom");
}
