
#include<bits/stdc++.h>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
   vector<pair<int, int>> res;
   map<int,int> mp;
   sort(arr, arr+n);
   for(int i=0; i<n; i++) mp[arr[i]] = i;

   int c=1, Max=INT_MIN, st, ed, i;
   while(i<n)
   {
     st=arr[i];
     while(arr[i] == arr[i-1]+1)
     {
       c++, i++;
     }
     while(arr[i] ==  arr[i-1]){
        i++;
     }
     ed = arr[i-1];
     if(Max<c)
     {
       Max = c;
       res.push_back({st,ed});
     }
     else if(Max == c)
     {
         if(mp[st] < mp[res[0].first]){
             res.pop_back();
             res.push_back({st, ed});
         }
     }
   }
    return {res[0].first, res[1].second};
}
int main() {
     int n;
     cin>> n;
      int *arr = new int[n];
      for( int  i = 0 ; i < n ; i ++ ){
         cin>> arr[i];
      }
  vector<int> result = longestConsecutiveIncreasingSequence(arr, n);
   cout<<result[0] <<"  "<<result[1]<<endl;
 return 0 ;
 }
