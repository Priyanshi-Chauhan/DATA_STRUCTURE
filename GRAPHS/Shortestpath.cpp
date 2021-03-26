#include<bits/stdc++.h>
using namespace std;
//User function Template for C++

class Solution{
public:
    int minimumStep(int n){
    int dp[n+1] ={0};
     // base case
     if(n ==0  || n==1){
            return dp[n] = 0;

     }
     // look up
     if(dp[n]!=0){
        return dp[n];
     }


     //rec case
    int op1,op2;

    op1=op2=INT_MAX;

    if(n%3== 0 ){
        op1 = minimumStep( n/3) ;
    }
    op2 = minimumStep(n-1);
return dp[n] = min(op1,op2)+1;


    }
};

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         Solution ob;
         cout<< ob.minimumStep(n)<<endl;
    }
 return 0;
 }
