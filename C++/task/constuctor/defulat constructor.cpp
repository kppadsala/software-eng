#include<iostream>
using namespace std;
class cube{
	public:
		cube(){
			int a ;
			double volume;
			cout<<"enter the value of side="<<endl;
			cin>>a;
			volume=a*a*a;
			cout<<"volume of cube is ="<<volume<<endl;
		}
};
int main(){
	cube obj;
	return 0;
}
