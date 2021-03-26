#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
 int main () {

 int n ;
 int coins []={1,2,5,10,20,50,100,200,500,2000};
 cin>>n;
 int sizee=sizeof(coins)/sizeof(int);

 int cnt =0;
 while(n>0){
        int index =upper_bound(coins,coins+sizee,n)-1-coins; // gives the base index from the base address;
        cout<<coins[index]<<"  +  " ;

 n=n-coins[index];
 cnt++;
 }
 cout<<endl;
 cout<<cnt <<endl;

 return 0;
 }
