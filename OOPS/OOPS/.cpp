#include<iostream>
using namespace std;
 class animal{
public:
     void eat(){
    cout<< "eating"<<endl;
     }
 };
 class rabbit : public animal{
 public:
     void eat() {
     cout<<" pottty"<<endl;}
 } ;

 int main() {
 rabbit r;
  r.eat();
  r.animal:: eat();
 return 0;}
