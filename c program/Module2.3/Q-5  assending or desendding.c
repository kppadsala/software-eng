// WAP to take two Array input from user and sort them in ascending ordescending order as per user’s choice
#include <stdio.h>
main(){
	int a[10];
	int i,j,temp;
	for (i=0;i<10;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
		}
	int ch;
	printf("\n Press 1 for Ascending Order.");
	printf("\n Press 2 for Descending Order.");
	printf("\n");
	printf("\n Enter Your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for (i=0;i<10;i++){
			for (j=i+1;j<10;j++){
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					}
				}
			}
			for (i=0;i<10;i++){
				printf("\n a[%d]=%d",i,a[i]);
			}
		break;
		case 2:
			for (i=0;i<10;i++){
			for (j=i+1;j<10;j++){
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					}
				}
			}
			for (i=0;i<10;i++){
				printf("\n a[%d]=%d",i,a[i]);
			}
		break;
		default:
			printf("\n It's Wrong Choice");
		break;
	}
}
