
#include<iostream>

using namespace std;

template<typename T>
class Graph() {
map<T,list<T>> m;
public:
    void addEdges(T x, T y) {
// assuming to be b bidirectional
m[x].push_back(y);
m[y].push_back(x);

    }

 void SSSP(T src){
map<T,int> l;
queue<T>q.
// all other nodes will have distance =INT_MAX
 }
};
int main(){
return 0;}
