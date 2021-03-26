
#include<iostream>
using namespace std;
 int main() {
int n ;
cin>> n;
int i ;
cin>>i;
int mask= 1<<i;
int ans= (n&mask)>0?1:0;
cout<<ans;
  return 0;}
