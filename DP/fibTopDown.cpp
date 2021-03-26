#include<iostream>
using namespace std;

int fibtopdown(int n, int dp[]) {
dp[n]={0};
// base case
if( n==0 || n==1 ){
     return n;

}
// look up;
if(dp[n] != 0){
    return dp[n];
}
// rec case
return dp[n] = fibtopdown( n-1, dp) + fibtopdown( n-2,dp);

}
 int main() {
      int n ;
       cin>> n;
       int dp[n+1] = {0};

        cout<< fibtopdown(n ,dp );
            cout<<endl;
        for( int i=0;i<= n;i++){
             cout<< dp[i]<<  "   ";
        }
  return 0;}
