 //WAP of Addition, Subtraction, Multiplication and Division using Switchcase.
#include <stdio.h>
main(){
	int A,B,add,sub,multi;
	float div;
	printf("\n Enter the Value Of A & B :");
	scanf("%d %d",&A,&B);
	int ch;
	printf("\n Press 1 for Addition.");
	printf("\n Press 2 for Subtraction.");
	printf("\n Press 3 for Multiplication.");
	printf("\n Press 4 for Division.");
	printf("\n");
	printf("\n Enter Your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			add=A+B;
			printf("\n Addition= %d",add);
		break;
		case 2:
			sub=A-B;
			printf("\n Subtraction= %d",sub);
		break;
		case 3:
			multi=A*B;
			printf("\n Multiplication= %d",multi);
		break;
		case 4:
			div=(float)A/B;
			printf("\n Division= %.2f",div);
		break;
		default:
			printf("\n It's Wrong Choice");
		break;
	}
}
