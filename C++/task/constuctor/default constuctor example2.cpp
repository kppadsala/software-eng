#include<iostream>
using namespace std;
class demo
{
	int a,b;
	
	public:
		demo(){
			a=10,b=20;
			}
		void setdata(){
			
			cout<<"a is  "<<a<<endl;
			cout<<"b is  "<<b<<endl;
		}
		
};
int main(){
	demo obj;
	obj.setdata();
	return 0;
}
