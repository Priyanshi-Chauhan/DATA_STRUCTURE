
#include<iostream>
using namespace std;
  int main() {
      int n ;
       cin>> n;
        int no;
        int xxor=0;
        for ( int i=0;i<n;i++){
         cin>>no;
         xxor ^= no;
        }
        cout<<endl;
        cout<<xxor;
   return 0;}
