#include<iostream>
using namespace std;

class demo{
	public:
	void add(int a,float b){
		cout<<a<<b<<endl;
	}
	void add (float b,int a){
		cout<<a<<b<<endl;
	}
};
int main(){
	demo obj;
	
	obj.add(1.0,2);
	
	
	return 0;
}
