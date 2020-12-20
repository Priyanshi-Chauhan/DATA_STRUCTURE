#include<iostream>
#include<list>
#include<queue>

using namespace std;
class Graph{
    list<int> *l;
    int v;
public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }
void addEdges(int x ,int y) {
// assuming it is directed grpah
    l[x].push_back(y);
}
void topological() {
    // array of indegree
     int *indegree =new int [v]{0};
     // updating indegree by traversing edges
     for(int i=0;i<v;i++){
        for(auto p:l[i]){
            indegree[p]++;
        }
     }

     queue<int>q;
     // find nodes with 0 indegree
     for(int i=0;i<v;i++){
        if(indegree[i]==0){
        q.push(i);}
     }
//start removing elements from the queue
while(!q.empty()){
    int node=q.front();
    cout<<node<< "  , " ;
    q.pop();


    // iterate over nbr of that node and reduce their indegree by 1;
for(auto nbr:l[node]){
 indegree[nbr]--;
 if(indegree[nbr]==0){
    q.push(nbr);
 }}}}};


int main() {
    Graph g(6);

g.addEdges(0,2);
g.addEdges(1,2);
g.addEdges(1,4);
g.addEdges(2,3);g.addEdges(2,5);
g.addEdges(4,5);
g.addEdges(3,5);
g.topological();
 return 0;}
