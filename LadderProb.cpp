// given a ladder of N stairs and k maximum jump . find number of
// ways to reach the top from bottom.

 #include<iostream>
 using namespace std;
  int ladder(int n , int k ){
      if(n==0){
        return 1;
      }
      if(n<0){
         return 0;
      }
      int ans=0;
      for(int i=1;i<=k;i++){    // it should start with i=1;

        ans += ladder(n-i,k); }   // recursive step
      return ans;

  }
  int main() {
      int n , k;
      cin>>n>>k;
      cout<<ladder(n,k)<<endl;
    return 0;}
