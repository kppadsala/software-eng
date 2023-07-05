// WAP to find reverse of string using recursion
#include <stdio.h>
void StringReverse(){
	char c;
	scanf("%c",&c);
	if (c!='\n'){
		StringReverse();	
	}
	printf("%c",c);
}
main(){
	printf("\n Enter String :");
	StringReverse();
}
