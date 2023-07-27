#include<iostream>
using namespace std;

class demo{
	int a,b;
	public:
		
		demo(int x,int y){
			a=x;
			b=y;
		}
	inline void display(){
			cout<<"value of a"<<a<<endl<<"value of b"<<b<<endl;
		}
};
int main(){
	demo obj(10,20);
	obj.display();
	
	return 0;
	
}
