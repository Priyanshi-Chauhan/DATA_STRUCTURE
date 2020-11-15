
#include<iostream>
using namespace std;
 int stringtoInt(char *str ,int n){
 if(n==0){
    return 0;
 }
  int digit=str[n-1] - '0';
 int small_ans=stringtoInt(str,n-1);

 return small_ans *10 +digit;

 }
int main() {
    int n ;cin>>n;
    char str[n];
    cin>>str;
    int ans =stringtoInt(str,n);
    cout<<ans<<endl;
    cout<<ans+1;
 return 0;}
