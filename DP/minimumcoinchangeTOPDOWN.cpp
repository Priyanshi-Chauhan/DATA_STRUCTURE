#include<climits>
#include<iostream>

using namespace std;

int topbottom(int n,int coins[], int t) {

int dp[n] ={0};
//base case
if(n==0){
    return 0;
}
// look up
if( dp[n]!= 0){
    return dp[n];
}

// rec case
int ans =INT_MAX;
for( int i=0;i<t;i++){
        if(n-coins[i] >=0){
    int subp= topbottom(n-coins[i] , coins,t);
    ans=min(ans  , subp +1);
        }
}
return dp[n]=ans;}
int main(){
int coins [] = {1,7,10};
int t =sizeof(coins)/ sizeof(int);
int n;
 cin>> n;

 cout<<topbottom(n,coins,t);
 return 0;
 }
