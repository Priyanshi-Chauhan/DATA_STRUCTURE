
#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l1;
    // initialisation
     // different data type
      list<string>l3 {"mango","banana","apple","pineapple","guava"};
     for( auto it =l3.begin() ; it!=l3.end();it++){
        cout<<(*it) << " ";

     }
     cout<<endl;

    list<int> l2{1,2,3,4,5};
    for(auto it : l2){
        cout<<it<<" ";
    }
    cout<<endl;

     // push_back;
     l3.push_back("kiwi");
     for(string s :l3){
        cout<<s << " -> " ;

     }
 return 0;}
