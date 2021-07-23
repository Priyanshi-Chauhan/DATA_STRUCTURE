// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

 class base1 {
public :
    base1() {
     cout<<" base 1 is called" << endl;
     }
 };
  class base2
  {public:
      base2() {
      cout<<"base2 is called " <<endl;}
  };
   class derived :  public  base2 , public base1 {
   public:
       derived() {
       cout<< " derived is called" <<endl;
       }
   };
 int main () {
     derived d;
      return 0;
 return 0;
 }
