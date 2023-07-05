#include<stdio.h>
main(){
	float a,b,c;
	printf("program is area of circle");
	printf("\n redius of circle:");
	scanf("%f",&a);
	c=3.14*a*a;
	printf("area of circle:%0.2f",c);
	
	printf("\n\nprogram is area of rectangle");
	printf("\n enter number:");
	scanf("%f",&a);
	printf("enter number:");
	scanf("%f",&b);
	c=a*b;
	printf("this number is area of rectangle:%0.2f",c);	
	
	printf("\n\nprogram is area of triangle");
	printf("\n enter number:");
	scanf("%f",&a);
	printf(" enter number:");
	scanf("%f",&b);
	c=0.5*a*b;
	printf("this number is area of triangle:%0.2f",c);
	
	
}
