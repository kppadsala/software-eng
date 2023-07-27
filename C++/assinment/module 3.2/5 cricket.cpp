/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class cricketer{
	public:
	string name;
	int score;
	void data(){
	
	cout<<"cricketer name="<<endl;
	cin>>name;
	cout<<"give a best score for run="<<endl;
	cin>>score;
	}
	void display(){
		cout<<"cricketer name"<<name<<endl;
		cout<<"best score="<<score;
	}
};
class batsman:public cricketer
{
	public:
	int innings,totalrun;
	float avg;
	void getdata(){
		cout<<"Innings="<<endl;
		cin>>innings;
		cout<<"totalrun="<<endl;
		cin>>totalrun;
		avg=totalrun/innings;
	}
	void disdata(){
		cout<<"cricketer`s total  inning="<<totalrun<<endl;
		cout<<"cricketer`s career total score="<<innings<<endl;
		cout<<"cricketer`s average="<<avg<<endl;
	}
};
int main(){
	batsman obj;
	obj.data();
	obj.getdata();
	obj.display();
	obj.disdata();
	
}
