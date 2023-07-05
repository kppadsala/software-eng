//Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
struct Emp{
	int empno,age;
	char empname[15],address[30];
};
main(){
	struct Employee e1;
	printf("\n Enter Employee No :");
	scanf("%d",&e1.empno);
	printf("\n Enter Employee Name :");
	scanf("%s",e1.empname);
	printf("\n Enter Employee Age :");
	scanf("%d",&e1.age);
	printf("\n Enter Employee Address :");
	scanf("%s",e1.address);
	printf("\n Employee No=%d \t Employee Name=%s \t Employee Age=%d \t Employee Address=%s",e1.empno,e1.empname,e1.age,e1.address);
}
