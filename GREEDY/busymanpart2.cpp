#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

   bool compare(pair<int , int > a, pair<int, int > b){

        return a.second<b.second;

    }

int main () {
     int n;
      cin>> n;
       int start;
       int endd;
       vector<pair<int , int>> v;
        for( int i=0;i<n;i++){
             cin>> start>> endd;
             v.push_back(make_pair(start, endd));

        }

        sort( v.begin() , v.end() , compare);

        int act =1;
         int fin =v[0].second;
        for( int i=1;i<n;i++) {
             if( v[i]. first >=fin ){
                fin = v[i].second;
                act++;

             }
        }


         cout<<act <<endl;
 return 0;}
