#include<iostream>
using namespace std;
class bank{
	public:
		string name,account;
		int acnum,balamount,deposite,blance_amount,withamount,final_amount;
	void display(){
		cout<<"Enter the Depositer name="<<endl;
		cin>>name;
		
		cout<<"Enter the account name="<<endl;
		cin>>account;
		
		cout<<"Enter the account number="<<endl;
		cin>>acnum;
		
				
		cout<<"Entrer the balance amount="<<endl;
		cin>>balamount;
		
		cout<<"Enter the deposite="<<endl;
		cin>>deposite;
		
		blance_amount=balamount+deposite;
		
		cout<<"Enter the withdraw amount="<<endl;
		cin>>withamount;
		
		final_amount=blance_amount-withamount;
	}
	void setdata(){
		cout<<"*******bank Details*******"<<endl;
		cout<<"bank balance="<<balamount<<endl;
		cout<<"bank balnce after deposite amount="<<blance_amount<<endl;
		cout<<"bank balnce after deposite amount="<<final_amount<<endl;
		cout<<"Enter the Depositer name="<<name<<endl;
	}
};
int main(){
	bank obj1;
	obj1.display();
	obj1.setdata();
}
