#include<stdio.h>
main(){
	int a,p,t;
	float r,b;
	printf("enter of intrest rate in %=");
	scanf("%f",&r);
	r=r/100;
	printf("\nnew intrest rate is=%0.3f",r);	
	printf("\nenter of time in year=");
	scanf("%d",&t);
	b=1+r*t;
	printf("\nthis is some process=%0.2f",b);
	printf("\nenter the amount=");
	scanf("%d",&p);
	a=p*b;
	printf("\nthis is some process=%d",a);
}
