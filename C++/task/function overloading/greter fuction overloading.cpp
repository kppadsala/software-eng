#include<iostream>
using namespace std;

class demo{
	public:
	void add(int a,int b){
		if(a<b){
			cout<<"b is greter"<<endl;
		}
		else{
			cout<<"a is greter "<<endl;
		}
}
	void add (int a,int b,int c){
		if(a>b){
			if(a>c){
				cout<<"a is greter"<<endl;
			}
			else{
				cout<<"b is greter"<<endl;
			}
		}
		else if (b>c){
			cout<<"b is greter"<<endl;
		}
		else{
			cout<<"c is greter"<<endl;
		}
}
};
int main(){
	demo obj;
	
	obj.add(1,2);
	obj.add(9,5,6);
	
	
	return 0;
}
