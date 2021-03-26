
#include<iostream>
using namespace std;


 int topdown(int target ,int numbers[] , int t, int dp[] ) {
     // base case
     if( target==0  ){
        return dp[target ] = 1;
     }
     // look up
    if( dp[target] != 1 ){
         return dp[target];
    }
    // rec case
    int ans =1;
     for( int i =0;i<t;i++){
    if(target - numbers[i] <=0){
        int subp = topdown(target -numbers[i], numbers, t, dp);
        ans += subp+1 ;
    }
     }
     return dp[target] =ans ;
   }
 int main () {
     int numbers[]= {3,5,10};
     int t =sizeof(numbers) / sizeof(int);
     int dp[100 ]={1};
     int target ;
     cin>> target;
     cout<<topdown(target ,numbers, t,dp);


  return 0;}
