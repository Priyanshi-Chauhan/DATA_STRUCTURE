
#include<iostream>
#include<climits>

using namespace std;

void selectionSort(int arr[],int n){
    int ans=INT_MAX;
    int j=0;
for(int i=0;i<n-1;i++){
    for( j=i+1;j<n;j++){
        if(arr[j]<ans){
            ans=arr[j];

        }


    }
    swap(ans,arr[i]);

}


}

int main() {
    int arr[]={1,4,6,2,0,9,22,3};
    int n =sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";}
 return 0;}
