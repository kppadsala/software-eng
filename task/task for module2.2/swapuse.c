#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter number a=");
	scanf("%d",&a);
	printf("Enter number b=");
	scanf("%d",&b);
	c=a+b;
	printf("\nthis is valuue of c=%d",c);
	a=c-a;
	printf("\nthis is valuue of a=%d",a);
	b=c-a;
	printf("\nthis is valuue of b=%d",b);
	
}
