
#include<iostream>
#include<time.h>
using namespace std;

int fib( int n ){
// base case
if( n==0 || n==1 ){
   return n;
}
// rec case
int ans = fib(n-1)+fib(n-2);
return ans;
}
 int main () {
int n;
 cin>> n;
 clock_t tic =clock() ;
  cout<<fib(n);

  clock_t toc =clock();

  cout<<endl;
   for( int i=0;i<=n;i++){
     cout<< fib(i)<< "     " ;   }
  return 0;}
