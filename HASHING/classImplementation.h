#include<iostream>
using namespace std ;
 template<typename t>
 class node {
  t key;
  int value;
  node<t> * next;
  public:
      node (t key , int value){
this->key =key;
this->value=value ;
node*<t> =NULL;}


      };
      class hashtable{

      node <int>**table;
 int current_size;
  int table_size;
  public:
    hashtable (int ts =7) {
          current_size =0;
        table_size =ts;
        table =new  node <t>*[table_size];
      }

      };


 int main () {
  return 0;}
