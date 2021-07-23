
#include<iostream>
using namespace std;
 class base1 {
 public:
     base1 ( int x){
     cout<<  "base1 "<< endl;}
 };
 class base2 : public base1{
 public :
     base2 (int x) : base1(x){
      cout<<" base2"<< endl;}
 };
 class base3  : public base1
 {
 public:
     base3(int x):base1(x){
     cout<< " base3"<< endl;
     }
 };
 class base4  : public base2 , public base3{
 public:
  base4(int x) : base3(x), base2(x){
   cout<<" base4"<<endl;
   }
 };
 int main() {
     base4 l(30);
  return 0;}
