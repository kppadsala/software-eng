#include<stdio.h>
main(){
	
	float year,days;
	printf("enter the year=");
	scanf("%f",&year);
	days=year*365;
	printf("Total days are=%0.2f",days);
	
	
	printf("\n enter the days=");
	scanf("%f",&days);
	year=days/365;
	printf("Total year are=%0.3f",year);
}
