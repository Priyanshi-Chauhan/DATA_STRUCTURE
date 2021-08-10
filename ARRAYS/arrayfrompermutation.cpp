
#include<iostream>
using namespace  std;
 int main() {
     int n;
      cin>> n;
      int nums[n];
      for(int i = 0 ;i < n ; i++){
        cin>>nums[i];
      }
     int arr[n];
     for( int i = 0 ;i < n;i++){
         arr[i] = nums[nums[i]];
         cout<<arr[i]<<" ";
         }

  return 0;}
