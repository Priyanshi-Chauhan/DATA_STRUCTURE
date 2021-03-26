
#include<iostream>
#include<time.h>
using namespace std;

int fastpower(int a , int power){
//base case
if(power==0 || a==1){
     return 1;
}
//rec case
 if(power%2 == 0){
        int ans =fastpower(a,power/2);
 return ans * ans;

 }

 if(power%2 !=0){
        int ans = fastpower(a,power/2);
    return a * ans* ans;
 }

 }
int main() {
    int a; cin>>a;
    int power;cin>>power;

    int ans =fastpower(a,power);
cout<<ans;

return 0;}
