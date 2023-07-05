//WAP to find factorial using recursion

#include<stdio.h>
int Factorial(int num){
	int f;
	if (num==1){
		return 1;
	}
	else{
		f=num*Factorial(num-1);
	}
	return f;
}
main(){
	printf("\n Factorial of 5 = %d",Factorial(5));
}
