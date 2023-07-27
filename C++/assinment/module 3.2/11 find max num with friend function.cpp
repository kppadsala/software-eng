#include<iostream>
using namespace std;
 class demo{
 	int a,b;
 	public:
 		void data(){
 			cout<<"enter the value a="<<endl;
 			cin>>a;
 			cout<<"enter the value b="<<endl;
 			cin>>b;
		 }
		 friend void findmax(demo d);
 };
 void findmax(demo d){
 	if(d.a>d.b){
 		cout<<"VALUE OF A IS MAX"<<endl;
	 }
	 else{
	 	cout<<"VALUE OF B IS MAX"<<endl;
	 }
 }
 int main(){
 	demo obj;
 	obj.data();
 	findmax(obj);
 	return 0;
 }
