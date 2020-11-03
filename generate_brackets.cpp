
//Generate balanced brackets using N pairs of round brackets

#include<iostream>
using namespace std;

void generate_brackets(char *out,int n , int idx , int open_count,int close_count)
 {
  if (idx== 2*n ){
        out[idx]='\0';
  cout<<out<<endl;
     return ;
  }
  //rec case
  //2 options
  if(open_count<n){
    out[idx]='(';
    generate_brackets(out,n,idx+1,open_count+1,close_count);
  }
  if(close_count<open_count){
    out[idx]=')';
    generate_brackets(out,n,idx+1,open_count,close_count+1);
  }
  return ;
 }
      int main() {
          int n; cin>>n;
    char out[20];
    int idx=0;
    generate_brackets(out,n,0,0,0);

 return 0;}
