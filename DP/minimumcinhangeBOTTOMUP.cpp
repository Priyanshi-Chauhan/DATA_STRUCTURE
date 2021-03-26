
#include<iostream>
#include<climits>
using namespace std;

int bottomup(int n, int coins[] , int t, int dp[] ){

    for(int i=1;i<=n;i++){
            dp[i] =INT_MAX;
        for( int j=0;j<t;j++){
          if(n-coins[j]>=0) {
             int subp= dp[n-coins[j]]  ;
          dp[i] = min(dp[i] , subp +1);
          }
        }
    }
    return dp[n];
}
 int main() {
     int n;
      cin>> n;
       int coins [] = {1,7,10};
       int t =sizeof(coins) / sizeof(int);
       int dp[1000] = {0};
       cout<<bottomup(n,coins ,t, dp);
  return 0;}
