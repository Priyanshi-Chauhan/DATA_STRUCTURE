#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph{

int V;
list<int> *l;
public:
    Graph(int V) {
        this->V =V;
        l=new list<int> [V];

    }
    void edgesbtwnodes(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
    }

    void printadjlist(){
    for(int i=0;i<V;i++){
            cout<<"vertex  "<<i<<"->";
    for(int x : l[i]){
        cout<<x << " , ";
    }
cout<<endl;
}}};


int main() {
    Graph g(4);
    g.edgesbtwnodes(0,1);
    g.edgesbtwnodes(0,2);
    g.edgesbtwnodes(1,2);
    g.edgesbtwnodes(2,3);
     g.printadjlist();

return 0;}
