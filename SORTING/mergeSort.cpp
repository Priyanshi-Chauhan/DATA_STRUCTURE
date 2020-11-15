
#include<iostream>
using namespace std;

int merges(int *arr,int s, int e){
int mid=(s+e)/2;
int i=s;
int j = mid+1;
int k =s;
int temp[1000];

while(i<=mid && j<=e){
    if(arr[i]<arr[j]){
        temp[k++]=arr[i++];
    }
    else {temp[k++]=arr[j++];}

}
while(i<=mid){
    temp[k++]=arr[i++];
}
while(j<=e){
    temp[k++]=arr[j++];
}
for(int l=s;l<=e;l++){
    arr[l]=temp[l];
}
}
void mergesort(int *a,int s,int e){

//base case
if(s>=e){
    return ;
}
//divide
int mid=(s+e)/2;

mergesort(a,s,mid);
mergesort(a,mid+1,e);
merges(a,s,e);

}
int main() {
 int arr[]={3,5,2,6,0,1,9,7};
 int sizes=sizeof(arr)/sizeof(int);
 mergesort(arr,0,sizes);
 for(int i=0;i<sizes;i++){
    cout<<arr[i]<<" ";
 }

 return 0;
 }
