
#include<iostream>
using namespace std;
class test  {
    private : int x, int y ;
public: test(const test &p ){
x = p.x;
y=p.y ;
};


};
 int main() {
     test *t1;
      test *t2;
       t1=  new test();
       t2 =  new test ()
       test t3 = *t1;
       test t4 = *t2;
  return 0;}
