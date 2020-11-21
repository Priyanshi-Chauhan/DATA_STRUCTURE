
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
int data ; node *left;
node* right;
node(int d) {
    data =d;
    left =NULL;
    right=NULL;
}
};

 node * BuildTree() {
 int d; cin>>d ;
 if(d==-1){
     return NULL;
 }
node * root =  new node(d);
 root->left =BuildTree();
 root -> right = BuildTree();
 return root;
 }
 void bfs(node * root){
 queue<node*>q;
 q.push(root);  // root->data is bad practice otherwise how we will check f->left
 q.push(NULL);

 while(!q.empty()){
    node *f =q.front();
    cout<<f->data<<", ";
    q.pop();

     if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }
     }
 return ;
 }
int main() {
    node* root =BuildTree();
    bfs(root);
return 0;}
