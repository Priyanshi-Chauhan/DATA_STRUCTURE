
#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int a, int b){
cout<<" comparing"<<  a << "and "<<b<<endl;
return a>b;   // reverse sorting

}
 int main () {
     int n; cin>>n;int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n,comparator);   //  a function is called inside a function

for (int i=0;i<n;i++){
    cout<<arr[i]<< "  " ;
}

  return 0;}
