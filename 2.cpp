
#include<iostream>
using namespace std;

 int primepair(int low, int upp){
 bool prime[upp-low +1];
 for( int i = low ;i*i <= upp ; i++ ){
    prime[i] = true;
    for( int j = i ; j*i< upp ; j++ ){
         prime[i*j] = false;
    }
 }



 }
 int main() {
 int low; int high;
  cin>> low>>high;
  cout<<


     return 0;
  }
