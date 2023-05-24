#include<stdio.h>
main(){
	int a,b;
	printf("enter the value A=");
	scanf("%d",&a);
	printf("enter the value B=");
	scanf("%d",&b);
	
	if(a>0 && b>0){
		printf("this num are positive");
	}
	else if(a<0 && b>0){
		printf("this num are negative");
	}
	else if(a<0 && b<0){
		printf("this num are positive ");
	}
	else if(a>0 && b<0){
		printf("this num are negative");
	}
	else{
		printf("press the Zero");
	}
		
}
