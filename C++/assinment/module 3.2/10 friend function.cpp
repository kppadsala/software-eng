//swaping without using third variable use friend function
#include<iostream>
#include<conio.h>
using namespace std;
class temp 
{
 int x, y;
 public:
 void input() 
{
 cout << "Enter Two Numbers :";
 cin >> x;
  cout << "Enter Two Numbers :";
 cin >> y;
}
friend void swap(temp &t);
void display() 
{
 cout << "After Swap x is :" << x<<endl;
 cout << "After Swap y is :" << y<<endl;
}
};
void swap(temp &t) 
{
    t.x = t.x+t.y;
    t.y = t.x-t.y;
    t.x = t.x-t.y;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}
