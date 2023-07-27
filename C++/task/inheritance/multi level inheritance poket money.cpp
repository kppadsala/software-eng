#include<iostream>
using namespace std;
class poket{
	public:
		int a;
		void father(){
			cout<<"Enter the poket money give father="<<endl;
			cin>>a;
		}
		
};
class money:public poket{
	public :
		int b;
		void mother(){
			cout<<"Enter the poket money give mother="<<endl;
			cin>>b;
		}
};
class chiled:public money{
	public:
		int c;
		void finalpoket(){
			c=a+b;
			cout<<"final poket money="<<c<<endl;
		}
};
int main(){
	chiled obj;
	obj.father();
	obj.mother();
	obj.finalpoket();
	
	return 0;
}
