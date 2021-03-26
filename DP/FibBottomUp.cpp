
#include<iostream>
using namespace std;

int fibbottomup(int n , int dp[]) {
dp[n+1] = {0};
   // dp[0]=0;
    dp[1]=1;
    for( int i=2;i<=n;i++){
        dp[i]=dp[i-1] + dp[i-2];

    }
    return dp[n];
}
int main () {
        int n ;
        cin>> n;
        int dp[n+1];
        cout<<fibbottomup(n,dp);

 return 0;}
