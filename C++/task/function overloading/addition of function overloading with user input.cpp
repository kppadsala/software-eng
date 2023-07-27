#include<iostream>
using namespace std;

class demo{
	public:
	void add(int a,int b){
	
		cout<<"Enter value of a="<<endl;
		cin>>a;
		cout<<"Enter value of b="<<endl;
		cin>>b;
		
		cout<<"addition is = "<<a+b<<endl;
		
}
	int add (int c,int d,int e){
	
	cout<<"Enter value of c="<<endl;
	cin>>c;
	cout<<"Enter value of d="<<endl;
	cin>>d;
	cout<<"Enter value of e="<<endl;
	cin>>e;
	
	
	cout<<"addion is = "<<a+b+c<<endl;	
}
};
int main(){
	int a,b,c;	
	demo obj;
	obj.add(a,b);
	obj.add(a,b,c);
	
	return 0;
}
