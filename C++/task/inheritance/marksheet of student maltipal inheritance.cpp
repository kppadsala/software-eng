#include<iostream>
using namespace std;
class details{
	public:
		void student(){
			int id;
			string name;
			int standerd;
			
			cout<<"Enter student id="<<endl;
			cin>>id;
			cout<<"Enter student name="<<endl;
			cin>>name;
			cout<<"Enter student standerd="<<endl;
			cin>>standerd;
		}
		
};
class marksheet
{
	public:
		void mark(){
			int maths,science,computer,english,total;
			
			
			cout<<"enter the marks of maths"<<endl;
			cin>>maths;
			cout<<"enter the marks of science"<<endl;
			cin>>science;
			cout<<"enter the marks of computer"<<endl;
			cin>>computer;
			cout<<"enter the marks of english"<<endl;
			cin>>english;
			
	}
};
class persenteg:public marksheet,public details
{
	public:
		void per(){
			int maths,science,computer,english,total;
			float per;
			
			total=maths+science+computer+english+total;
			cout<<"total of subject="<<total<<endl;
			
			per=total/4;
			cout<<"student persentag="<<per;		
		}
};
int main(){
	persenteg obj;
	obj.student();
	
	obj.mark();
	
	obj.per();
}
