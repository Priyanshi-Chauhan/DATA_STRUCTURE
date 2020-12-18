#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

 class Graph{
 unordered_map<string , list<pair<string, int> > >l ;
 public:
     void addedges(string x, string y, bool bid,int wt){
     l[x].push_back(make_pair(y,wt));
     if(bid){
        l[y].push_back(make_pair(x,wt));
     }
     }
     void printadjlist(){
     for(auto p:l){

    string c = p.first;
    cout<<"vertex"<< c<< "- >" ;
 list<pair<string,int>> ks =p.second;
 for(auto k:ks){
    string dest=k.first;
    int dist =k.second;
    cout<<dest << "   "  <<  dist<< " ,";

 }
 cout<<endl;
     }}
 };
 int main() {
     Graph g;
     g.addedges("A","B",true,20);
      g.addedges("B","D",true,20);
       g.addedges("A","C",true,20);
        g.addedges("C","D",true,20);
         g.addedges("A","D",false,20);
 g.printadjlist();
  return 0;}
