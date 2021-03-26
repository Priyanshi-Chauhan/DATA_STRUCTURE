
#include<iostream>
using namespace std;

int abs (int a , int b){
if(a-b >0)
 return (a-b);
 else
    return b-a;
 }
 int main() {
  int no_of_teams ;
  cin>>no_of_teams;
  int arr[1000]={0};    // to maintain the rank frequency
  for( int i=0;i<no_of_teams;i++){
    string name;
    int rankk;

    cin>>name>>rankk;
    arr[rankk] ++;

  }
  int badness=0;
  int actual_rank =1;
  for( int i=1;i<=no_of_teams;i++){
    while(arr[i]){
            badness += abs(i ,actual_rank);
    actual_rank ++;
    arr[i]--;}
  }
  cout<<badness;

  return 0;}
