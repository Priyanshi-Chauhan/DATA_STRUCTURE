#include<iostream>
using namespace std;

 class node{
public:
  int data ;
  node* left; node* right;
  node(int d) {
  data=d;
  left=NULL;
  right=NULL;
  }} ;

 node *buildTree() {
int d;cin>>d;
if(d!=-1){
node * root =new node(d);
    root ->left =buildTree();
    root ->right =buildTree();
    return root;
    }
 void deletion(node *root , int data){
 if( root ==NULL){
    return ;
 }

 if(root == target){
         if(root ->left ==NULL && root ->right ==NULL){

    delete root;}
    if(root -> left!=NULL)
    }

    }


 }
s

int main() {
 return 0;}
