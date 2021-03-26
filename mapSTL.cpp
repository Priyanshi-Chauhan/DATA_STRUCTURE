
#include<iostream>
#include<unordered_map>
#include<map>
#include<string>

using namespace std;

int main() {
    unordered_map<string, int> m ;
    //insert
    // there are several ways to insert . 1. by insert()  fun
    m.insert(make_pair("mango",80));           // insert func takes pair as an argument

    pair<string , int> p;
    p.first = "banana";
    p.second = 120;
m.insert(p);
    // other way
    m["apple"] = 30;
    // 2. search using find() function
    string fruit ;
    cin>>fruit;
    auto it =m.find(fruit);
    if(it != m.end()){
        cout<<"Price of  "<< fruit << " is  " <<(*it).second<<endl;
    }
    else {
        cout<<"not present";
    }

    // delete a key
   // m.erase(fruit);
   // update the value
m[fruit] += 40;

    // find the key using count function
    if(m.count(fruit)){
        cout<<"price is  " << m[fruit]<< endl;
    }
    else {
        cout<<"not found";
    }
//iterate the key-value pair
for(auto it =m.begin() ; it!=m.end() ; it++){
    cout<<it->first<<  " : " <<it->second<<endl;
    }


    return 0;
}
