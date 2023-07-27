#include<iostream>
using namespace std;

class demo{
	public:
	void add(int a,int b){
		int total;
		total=a+b;
		cout<<"addition is="<<total<<endl;
		
}
	void add (int a,int b,int c){
	int total;
	
	total=a+b+c;
	cout<<"addion is ="<<total<<endl;	
}
};
int main(){
	demo obj;
	
	obj.add(1,2);
	obj.add(9,5,6);
	
	
	return 0;
}
