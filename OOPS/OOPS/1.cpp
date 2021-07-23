
#include<iostream>
using namespace std;
 class test {
     static int i ;
       int j ;
        int k;
        //char ch;
long long ch;
 public:
      int func( int a, int b) {
          a = i ; b = j ;

      return  a+b; }

     };
     int test :: i;
 int main() {
     test t;
      cout<< sizeof(test);


  return 0;}
