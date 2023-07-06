// WAP Find out length of string without using inbuilt function
#include <stdio.h>
main(){
	char name[20];
	int i=0;
	printf("\n Enter the Name :");
	gets(name);
	puts(name);
	while (name[i]!='\0'){
		i++;
	}
	printf("\n Length of String = %d",i);
}
