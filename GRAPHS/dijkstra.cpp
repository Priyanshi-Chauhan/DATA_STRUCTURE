
#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
using namespace std;

template<typename t>

class Graph{
    unordered_map<t,list<pair<t, int>> >m;
public:
    void addedge(t u, t v , int dist , bool bidir=true){
m[u].push_back(make_pair(v,dist));
if(bidir) {
    m[v].push_back(make_pair(u,dist));
}
     }

     void printadj() {
     for( auto mm:m){
       t vertex= mm.first;
       cout<< vertex << " -> ";
for(auto i :mm.second){
    cout<<"("<< i.first<<","<<i.second<< " )"<< "   " ;
    cout<< endl;
}     }}


void dijkstra( t src ) {
 unordered_map<t,int> distance;
 // initialise all nodes with int_max distance
 for( auto j :m){
    distance[j.first]=INT_MAX;
 }
 set<pair<int , t>> s;
 distance[src]= 0 ;
 s.insert(make_pair(0,src));
 while(!s.empty()){
  auto p =*(s.begin());
int nodedist =p.first;
t node =p.second;
s.erase(s.begin());

// iterate over the neighbours of the current node;
for(auto childpair : m[node]){
    if(nodedist+childpair.second < distance[childpair.first]){    // distance[childpair.first] =INT_MAX here
t dest =childpair.first;
auto f = s.find (make_pair(distance[dest], dest));
if(f!= s.end()){
    s.erase(f);
}
// insert a new pair() {
distance[dest] = nodedist+childpair.second;
s.insert(make_pair(distance[dest],dest));
    }
}
 }

 for(auto d:distance){
    cout<<d.first<<"is located at distance of  "<< d.second<<endl;
 }

}

};

int main () {
Graph <int>g;


g.addedge(1,2,1);
g.addedge(1,3,4);
g.addedge(2,3,1);
g.addedge(3,4,2);
g.addedge(1,4,7);
g.dijkstra(1);


 return 0;}
