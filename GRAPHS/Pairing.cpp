#include<iostream>
using namespace std;

void dfs_helper(t src, map<int , bool> &visited) {
	cout<<src<< "  ";
	visited[src] =true;
	for( auto  node : m[src]){
if(!visited[node]){
	dfs_helper(node,visited);
}
	}

}
void dfs(t src) {
unordered_map<int ,bool> visited;
for( auto nbr: m){
	visited[nbr.first]=false;
}
int cnt =1;
for( auto n:m){
	if(!visited[n.first]){
		cout<< "Component"<<cnt << " -> ";
		dfs_helper(n.first,visited);
	cnt++;
	cout<<endl;
	}}}
	void set(){
	for()
int main() {
	Graph<int> g ;
	g.addedge();

	return 0;
}
