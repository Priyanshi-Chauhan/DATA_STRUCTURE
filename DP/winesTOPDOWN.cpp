#include<iostream>
using namespace std;

int winesprofittopdown(int prices[], int i , int j,int dp[][1000], int year ) {

// base case
if(i>j){
     return 0;
}
// look up;
if( dp[i][j]!= 0){
     return dp[i][j];
}
int op1=prices[i]*year +  winesprofittopdown(  prices ,i+1 , j , dp , year+1);
int op2= prices[j] *year+winesprofittopdown( prices ,i ,j-1 , dp, year+1);
return dp[i][j] = max( op1, op2);

}
 int main() {
     int  prices[] = {2,3,5,1,4};
     int n=sizeof(prices )/ sizeof(int);
     int dp[500][1000] = {0};
     int y =1;
     cout<<winesprofittopdown(prices, 0,n-1,dp,y);
  return 0;}
