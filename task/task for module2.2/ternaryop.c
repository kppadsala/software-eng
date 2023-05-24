#include<stdio.h>
main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	(year%4==0)? printf("\n this is a leap year") : printf("\n this not a leap year");
}
