
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main () {
     int money;
     cin>>money;
      int coins[]={1,2,5,10,20,50,100,200,500,2000};
      int n = sizeof( coins )/sizeof(int);
    int ans =0;
     while( money>0){
            int index = upper_bound(coins,coins+n,money) -1 - coins;
        money=money-coins[index];
     ans ++;\
       cout<<coins[index]<<" - > ";
     }

     cout<<endl;
     cout<<ans;
  return 0;
  }
