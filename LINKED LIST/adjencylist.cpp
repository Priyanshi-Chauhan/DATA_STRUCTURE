
#include<iostream>
#include<list>
using namespace std;
 int main() {

  list<pair<int,int> > *l;
  int vertices;
  cin>>vertices;
  l=new list<pair<int,int> >[vertices];
  int edges;cin>>edges;
  for(int i= 0 ; i<edges;i ++){
    int x, y,wt;
    cin>>x >>y >> wt;
    l[x].push_back(make_pair(y,wt));
    l[y].push_back(make_pair(x,wt));
  }


  //print the ll
  for(int i=0;i<vertices;i++){
    cout<<"LInked list" << i <<" ->";
    for(auto xp : l[i]){
        cout<<  " (" <<xp.first<<","<<xp.second << " )";

    }
    cout<<endl;
  }
  return 0;
  }
