#include<iostream>
using namespace std;
class baseclass{
	public:
		void print(){
			int id,age;
			cout<<"Enter The ID - "<<endl;
			cin>>id;
			cout<<"Enter Age - "<<endl;
			cin>>age;
		}
		void disply(){
			int id,age;
			cout<<id<<endl;
			cout<<age<<endl;
		}
};
class deriveclass:public baseclass
{
	public:
		void print(){
			int id,age;
			cout<<"Enter The ID - "<<endl;
			cin>>id;
			cout<<"Enter Age - "<<endl;
			cin>>age;
		}
		void disply(){
			int id,age;
			cout<<id<<endl;
			cout<<age<<endl;
		}
};
int main(){
	deriveclass obj;
	obj.print();
	obj.disply();
	obj.print();
	obj.disply();
}
