#include<iostream>
using namespace std;

int profit(int n,int C, int *wt,int *prices){
int ans=0;
//base case
if(n==0  || C==0){
        return 0;

}
int inc_price = 0;
    // including the last item
if(C>=wt[n-1]){
inc_price = prices[n-1] +  profit(n-1,C-wt[n-1],wt,prices);

}

// excluding the last item
int exc_price = 0;
 exc_price=profit(n-1,C,wt,prices);
ans=max(inc_price,exc_price);
return ans;

}

int main() {
    int items=4;int capacity =6 ;
    int weights[]={1,2,3,5};
    int prices[]={40,20,30,100};
cout<<profit(items,capacity,weights,prices);
return 0;
}
