#include<stdio.h>
main(){
	int maths,phy,sci,chem,total,subtotal;
	
	printf("\n enter the marks of maths=");
	scanf("%d",&maths);
	printf("\n enter the marks of phy=");
	scanf("%d",&phy);
	printf("\n enter the marks of sci=");
	scanf("%d",&sci);
	printf("\n enter the marks of chem=");
	scanf("%d",&chem);
	
		
	
	if(maths>60 && phy>55 && sci>65 && chem>50){
	
			total=maths+phy+sci+chem;
		subtotal=maths+phy+chem;
		
			printf(" \n subject total=%d",total);
			printf("\nimported subject total=%d",subtotal);
			
			if(total>=250 || subtotal>180)
			{
				printf("\n allow the admition");
			}
			else
			{
				printf("\n Not allow the admition");
			}
		printf("\n Not allow the admition");
	}		
	
}
