#include<iostream>
using namespace std;
class a{
	public:
		void a1(){
			cout<<"hello world"<<endl;
		}
		
};
class b
{
	public:
		void b1(){
			cout<<"hello world"<<endl;
		}
		
};
class c:public a,public b
{
	public:
		void c1(){
			cout<<"hello world"<<endl;
		}
		
};

int main(){
	c obj;
	obj.a1();
	obj.b1();
	obj.c1();
	return 0;
}

