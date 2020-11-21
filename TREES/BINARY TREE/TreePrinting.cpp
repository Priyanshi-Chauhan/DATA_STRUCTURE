
#include<iostream>
using namespace std;
 class node  {
 public:
     int data;
 node *left;
 node *right;
 node (int d) {
     data =d;
     left =NULL;
     right =NULL;
 }};

 node *BuildTree(){
 int d;
 cin>>d;
 if(d ==-1){
 return NULL;}
 //otherwise
 node *root = new node(d);
 root -> left =BuildTree();
 root -> right =BuildTree();
 return root;
 }

 // preorder
 void print(node *root){
     if(root ==NULL){
        return ;
     }
     // otherwise root left right
     cout<< root->data << " ";
     print(root->left);
     print(root ->right);

 }

// Inorder
 void printIn(node *root){
 if(root == NULL ){
     return;
 }
 printIn(root->left);
 cout<<root->data<< " ";
 printIn(root->right);

 }
 // postorder
 void printPOst(node * root){
     if(root ==NULL){
         return ;
     }
     printPOst(root -> left);
     printPOst(root->right);
     cout<<root->data<< "  " ;
 }
 int main () {
     node *root= BuildTree();
     print(root);
     cout<<endl;
     printIn(root);
     cout<<endl;
     printPOst(root);
     cout<<endl;
  return 0;}
