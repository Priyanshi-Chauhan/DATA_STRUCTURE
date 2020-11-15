
#include<iostream>
using namespace std;

int partitionn(int *arr,int s,int e){
int pivot_element=arr[e];
int i=s-1;
int j=s;

for(;j<e;j++){
if(arr[j]<=pivot_element){
        i=i+1;
    swap(arr[i],arr[j]);
}

}
//place the pivot element in the correct index;
swap(arr[i+1],arr[e]);
return i+1;}
void quicksort(int *a,int s,int e){
//base case
if(s>=e){ //meaning one element  or zero element
    return ;
}
int p = partitionn(a,s,e);
quicksort(a,s,p-1);
quicksort(a,p+1,e);
}
int main() {

    int arr[]={2,5,54,6,8,3,0,9,55};
     int sizes=sizeof(arr)/sizeof(int);
     quicksort(arr,0,sizes-1);
 for(int u=0;u<sizes;u++){
    cout<< arr[u]<<" " ;
 }
 return 0;}
