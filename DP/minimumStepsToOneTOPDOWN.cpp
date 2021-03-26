#include<iostream>
#include<climits>
using namespace std;

int mintopdown(int n) {

int dp[100] = {0};
    // base case
    if( n==1){
        return 0;
    }
    // look up
    if(dp[n]!=0){
         return dp[n];
    }
    // rec case
    int op1,op2,op3;
op1=op2=op3=INT_MAX;
    if( n%3 ==0){
    op1= mintopdown(n/3)+1;

    }
    if( n%2 ==0){

        op2 = mintopdown(n/2)+1;
    }
    op3= mintopdown(n-1)+1;
return dp[n]= min( min(op1,op2),op3);


}
 int main() {
int n;
cin>> n;
cout<<" steps are"<< mintopdown(n);
  return 0;}
