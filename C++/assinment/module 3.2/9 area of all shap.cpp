#include<iostream>
using namespace std;

class demo{
	public:
		void area(int r){
			float circle;
			circle=(float)3.14*r*r;
			cout<<"area of circle="<<circle<<endl;
		}
		double area(double s){
			int squre;
			squre=s*s;
			cout<<"area of squre="<<squre<<endl;
		}
		void area(int b,double h){
			int rectangle;
			
			rectangle=b*h;
			cout<<"area of rectangle="<<rectangle<<endl;
		}
		double area(double h,int b){
			int tringle;
			tringle=h*b/2;
			cout<<"area of tringle="<<tringle<<endl;
		}
};
int main(){
	int b,r;
	double h,s;
	demo obj;
	obj.area(5);
	obj.area(10.0);
	obj.area(5.0,10);
	obj.area(5,10.0);
}
