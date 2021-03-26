
#include<iostream>
using namespace std;

bool sumwith0(int arr[] , int n) {
    unordered_map <int , int> m;
    int pre= 0;
    for( int i=0;i<n;i++){
        pre += arr[i];
if( pre ==0   || m[pre]!= m.end() ){
    return true;
}
return false;
    }







}
int main() {
return 0;}
