
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

bool check(int n){
set<int> s;
 while(n){
 int a =  n%10;
 if(s.find(a) != s.end()){
  return false;}
s.insert(a);
  n = n/10;
 }
return true;

 }

int main() {

int upp;int low;
 cin>> low>>upp;
 int countt =0 ;
  for( int i =low ; i <=upp ; i++){
    if(check(i)){countt++;}
    }
     if(countt>0 ){
      cout<<countt<<endl;
     }
     else{ cout<<"No number"<<endl;}

 return 0;
 }
