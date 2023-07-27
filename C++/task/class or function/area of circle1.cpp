#include<iostream>
using namespace std;
class areaofcircle{
	public:
		int r;
		float area;
	void getdata(){
		cout<<"Enter the radius of circle="<<endl;
		cin>>r;
		area=3.14*r*r;
	}
	void setdata(){
		cout<<"The area of circle="<<area<<endl;
	}
};
int main(){
	areaofcircle d1;
	d1.getdata();
	d1.setdata();
	
	return 0;
}
