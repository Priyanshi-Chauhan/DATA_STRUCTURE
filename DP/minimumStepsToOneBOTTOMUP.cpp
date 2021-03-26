#include<iostream>
using namespace std;

int bottomup(int n ) {
int dp[n];
dp[1]= 0;
int op1,op2,op3;

for( int i =2;i<=n;i++){
        op1=op2=op3=INT_MAX;
        if(i%2==0)
{
         op1=dp[i/2];
}
if(i%3==0){
    op2=dp[i/3];
}
op3=dp[i-1];
dp[i]=min(min(op1,op2),op3) + 1;
}
return dp[n];
}
int main () {
int n; cin>> n;
 cout<<"STEPS ARE "<<  bottomup(n);
  return 0;}
