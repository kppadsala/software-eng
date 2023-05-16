#include<stdio.h>
main(){
	int a=10,b=20,c=30;
	c=a+b;
	a=c-b;
	b=c-a;
	
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
