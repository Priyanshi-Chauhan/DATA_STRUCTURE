
#include<iostream>

#include<deque>
using namespace std;
 int main() {
int n; int a[100000];
int k;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin >>k;
deque<int>q(k);     // sliding window will be of maxsize =k or we can say it is a constructor call which initialises the deque with a k sized memory
for(int i=0;i<k;i++){
    while(!q.empty() && a[i] > a[q.back()]){
        q.pop_back();}
    q.push_back(i);

}
    int i ;
    for(;i<n;i++){
        cout<<a[q.front()]<<" ";
        //1. remove the elements which are not the part of the window (contraction)
        while(!q.empty() && q.front() <= (i-k)){
                q.pop_front();

        }
        //2. remove the elements which are not useful and are in window
        while(!q.empty() && a[i] >= a[q.back()])
            {q.pop_back();

            }
    // 3. add the new elements (expansion)
    q.push_back(i);
    cout<<a[q.front()] << endl;           // to get the last element as well

    }
    return 0;
 }
