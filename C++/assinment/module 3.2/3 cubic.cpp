#include<iostream>
using namespace std;
class cubic{
	public:
		int num,cubic;
	inline	void cube(){
		cout<<"Enter the num="<<endl;
		cin>>num;
		cubic=num*num*num;
		cout<<"cubic is="<<cubic<<endl;
		
	}
};
int main(){
	cubic obj;
	obj.cube();
}
