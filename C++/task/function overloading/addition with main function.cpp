#include<iostream>
using namespace std;

class demo{
	public:
	void add(int a,int b){
		int total;
		
		total=a+b;
		cout<<"addition is="<<total<<endl;
		
}
	int add (int c,int d,int e){
	int total1;
	
	
	total1=c+d+e;
	cout<<"addion is ="<<total1<<endl;	
}
};
int main(){
	int a,b,c,d,e;	
	
	cout<<"Enter value of a="<<endl;
		cin>>a;
		cout<<"Enter value of b="<<endl;
		cin>>b;
	cout<<"Enter value of c="<<endl;
	cin>>c;
	cout<<"Enter value of d="<<endl;
	cin>>d;
	cout<<"Enter value of e="<<endl;
	cin>>e;
	demo obj;
	obj.add(a,b);
	obj.add(c,d,e);
	
	return 0;
}
