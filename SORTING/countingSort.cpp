
#include<iostream>
using namespace std;

 void countingsort (int * arr, int n  ){
     int largest = -1 ;
  for( int i=0;i<n;i++){
    largest =max( largest , arr[i]);
  }

 int * freq =new int[largest +1] {0};
 for( int i=0;i<n;i++){
    freq[arr[i]] ++;

 }

 int k =0;
 for( int i=0;i<= largest;i++){
    while(freq[i] >0){
    arr[k]= i;
    freq[i]--;
    k++;
 }}


 }
 void print(int *arr, int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"   " ;
     }}

 int main() {
     int n ;
      cin>> n;
      int arr[n];
      for( int i=0;i<n;i++){
        cin>>arr[i];
      }
      cout<<endl;
      countingsort(arr, n);
      print(arr,n);
  return 0;}
