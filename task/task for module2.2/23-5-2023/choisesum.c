#include<stdio.h>
main(){
	int num,x,y,i,sum,ch;
	printf("enter the value x= ");
	scanf("%d",&x);
	
	printf("enter the value y= ");
	scanf("%d",&y);
	
	printf("\npress 1 is process is forward");
	printf("\npress 2 is process is backward");	
	printf("\nenter the choice=");
	scanf("%d",&ch);
	switch(ch){
		case 1:
				for(i=x;i<=y;i++){
					printf("\n%d",i);
				}
		break;
		case 2:
				for(i=y;i>=x;i--){
					printf("\n%d",i);
				}
		break;
	
	}
	
	
}
