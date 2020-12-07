
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

  node * insertINBST( node* root, int data){
  if(root ==NULL){
    return new node(data);
  }

 if(data<=root->data) {root->left = insertINBST(root->left ,data);}
  else {root->right = insertINBST(root->right,data);
  }
  return root;
  }
 node *buildTree() {
int d;cin>>d;
node * root =NULL;
while(d!=-1){
    root = insertINBST(root, d);
    cin>>d;
}
return root;

 }
 bool searchInBST(node * root , int data){

 if( root==NULL){
    return false;
 }
 if(root->data == data){
    return true;
 }
 if(data<=root->data){
  return searchInBST(root->left,data);
 }
 else {return searchInBST(root->right,data);
}}


 int main() {

 node * root =buildTree();
 int data;
 cin>>data;
if( searchInBST(root,data)){
    cout<<"present"<<endl;

}
else {
    cout<<"not present";
}
return 0;
 }
