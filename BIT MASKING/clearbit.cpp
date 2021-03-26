// clearing a bit means making it 0;
#include<iostream>
using namespace std;

int main () {
    int n ;
     cin>> n;
      int i;
      cin>> i;
     int  mask = ~(1<<i);
      n=n&mask;
cout<<n;


 return 0;
 }

