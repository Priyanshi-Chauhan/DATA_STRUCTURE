
#include<iostream>
#include<cstring>
using namespace std;

template<typename t>
class Node{
public:
string key;
t value;
Node<t>* next ;
    Node (string key, T val) {
       this->key =key;
       value=val;
       next =NULL;
    }
};

class hashtable {
Node<t> ** table;
int current_size; int table_size;
int hashfun(string key){
    int idx=0;int p=1;
 for(int j=0;j<key.length();j++){
     idx=idx+(key[j]*p)%table_size;
 idx=idx%table_size;
 p=(p*27)%table_size;
 }
 return idx;
 }

public:
    hashtable(int ts){
        table_size=ts;
        current_size  = 0;
table= new node <t>*[ts];
for(int i=0 ;i<ts;i++){
    table[i]=NULL;
}
 }
 void insert(string key , t val)  {

 int idx = hashfun(key);
 Node<t> *n  =new Node<t>(key,  val);
 n->next= table[idx];
 table[idx]=n;
 current_size++;
}

    void print(){
    }
};

