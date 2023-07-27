#include<iostream>
using namespace std;

class demo{
	public:
	void add(double a,int b){
		int total;
		total=a+b;
		cout<<"addition is="<<total<<endl;
		
}
	void add (int x,double y){
	int total;
	
	total=x-y;
	cout<<"substraction is ="<<total<<endl;	
}
	void add (double c,double d){
	int total;
	
	total=c*d;
	cout<<"multiplication is ="<<total<<endl;	
}
	void add (int f,int g){
	int total;
	
	total=f/g;
	cout<<"divaided is ="<<total<<endl;	
}
};
int main(){
	demo obj;
	
	obj.add(10.0,2);
	obj.add(9,5.0);
	obj.add(8.0,4.0);
	obj.add(12,4);
	
	
	return 0;
}
