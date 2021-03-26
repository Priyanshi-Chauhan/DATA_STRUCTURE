
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n ;
    cin>>n;
    vector<pair<int, int > > v;
int start;
            int endd;
    for( int i=0;i<n;i++)
        {

        cin>>start>>endd;
    v.push_back(make_pair(endd,start));

    }
    sort(v.begin() , v.end());
    int act=1;
    int fin  = v[0].first;
    for( int i=1;i<n;i++){
        if(v[i].second >= fin ){
            fin = v[i].first;
            act++;
        }
    }
    cout<<act;


 return 0;}
