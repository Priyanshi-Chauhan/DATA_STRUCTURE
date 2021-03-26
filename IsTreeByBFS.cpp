
#include<iostream>
#include<list>
#include<queue>

using namespace std;
class Graph{
int v;
list <int>*l;           //  array of list
public:
    Graph(int v){
    this->v=v;
   l=new list<int>[v];
    }
    void addedge(int x, int y){
        // since it is undirected
        l[x].push_back(y);
        l[y].push_back(x);}
        bool is_tree{
            bool *visited= new bool[v]{false};
            int *parent =new int[v];

            queue<int>q;
            int src =0;
            q.push(src);
            visited[src]=true;
    while(!q.empty()){
        int node= q.front();
        q.pop();
        for(int nbr : l[node]){
            if(visited[nbr]==true and parent[nbr]!=node ){
                return false;
            }
            else if(!visited[nbr]){
                visited[nbr]=true;
                parent[nbr]=node;
                q.push(nbr);
            }
        }

    }
        return true;
        }
};
int main () {
Graph g(4);
g.addedge(0,1);
g.addedge(3,2);
g.addedge(1,2);
g.addedge(0,3);
if(g.is_tree){
    cout<<"yes theres a tree"<<endl;
}
else {
    cout<< "no , its not a tree";
}

return 0;}
