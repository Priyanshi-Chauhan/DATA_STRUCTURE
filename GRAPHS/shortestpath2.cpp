
#include<iostream>
using namespace std;

int shortestpath(int n ) {
    // base case

    if(n==0  || n ==1){
        return 0;
    }
    int op1 , op2;
    op1=op2=0;
    if(n%3!=0){
         op1=shortestpath(n-1)+1;
    }
    else {
    op2=shortestpath(n/3)+1;}
return op1+op2;

}
int main () {
    int n;
    cin>>n;
    cout<<shortestpath(n);
 return 0;}
