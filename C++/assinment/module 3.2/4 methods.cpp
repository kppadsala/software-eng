#include<iostream>
using namespace std;
class methods{
	private:
		int x,y,addition;
	public:
		add(int a,int b){
			
			addition=a+b;
		}
		void display(int a,int b){
			cout<<"Enter value a"<<endl;
			cin>>a;
			cout<<"Enter value b"<<endl;
			cin>>b;
			cout<<"addition of a and b="<<addition<<endl;
			
		}
};
int main(){
	methods obj;
	obj.display(10,20);
	
	return 0;
}
