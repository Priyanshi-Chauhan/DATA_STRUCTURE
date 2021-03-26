
// two numbers are present only once
#include<iostream>
using namespace std;
int main () {
  int n ;
  cin>>n;
  int arr[n];
  int xorr=0;
  for( int i=0;i<n;i++){
    cin>>arr[i];
    xorr ^= arr[i];


  }
  // extracting the last set bit;


  int pos=0;
while((n&1) != 1){
        pos++;
   n= n>>1;

}

  int mask= 1>> pos;
  for( int i=0;i<n;i++){
    if((arr[i]&mask)!=1){

    }
  }
if(mask&)


  return 0;}
