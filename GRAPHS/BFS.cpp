
#include<iostream>
#include<map>
#include<queue>
#include<list>
using namespace std;
template <typename T>
class Graph{
map<T,list<T>> m;
public:
    void addEdges(T x ,  T y ){
// if biredirectional
    m[x].push_back(y);
    m[y].push_back(x);
    }

    void bfs(T src){
    map<T, bool> l;
    queue<T> q ;
    q.push(src);
    l[src] = true;

    while(!q.empty()){
         T node =q.front();
         q.pop();
         cout<<node<<" ,";
         for(auto nbr : m[node] ){
            if(!l[nbr]){
                q.push(nbr);
                // mark that as visited
                l[nbr]=true;
            }
         }


    }
    }
};

int main () {
  Graph<int > g;
  g.addEdges(0,1);
    g.addEdges(1,2);

    g.addEdges(2,3);

    g.addEdges(3,0);

    g.addEdges(4,3);

    g.addEdges(5,4);

  g.bfs(0);
  return 0;
}
