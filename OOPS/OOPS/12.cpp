
#include<iostream>
using namespace std;
 int main(){
     int * output= new int[5];

     int arr[5] = { 2, 5,3,63,5};
     for( int i = 0 ; i <5;i++){
         output[i] = arr[i];
     }
     for(int i = 0; i < 5;i++){
         cout<< output[i]<<" ";

     }
     cout<<endl;
          cout<<sizeof(output)/ sizeof(int);

  return 0 ;}
