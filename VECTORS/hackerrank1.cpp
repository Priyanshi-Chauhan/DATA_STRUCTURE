#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int n;
   int q;
    cin>> n>> q;
    vector<int> arr[n];
for( int i=0;i<n;i++ ){
     int k ;cin>> k;
     for( int j=0;j<k;j++){
         int d;
         cin>>d;
     arr[i].push_back(d);}

}
for( int i =0;i<q;i++){
int x ,y;
    cin>>x>>y;
    cout<<arr[x][y];
}


    return 0;
}
