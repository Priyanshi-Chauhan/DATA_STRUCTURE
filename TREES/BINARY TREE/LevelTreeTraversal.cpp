#include<iostream>
using namespace std;

class  node{
public:
int data;
node *left;
node *right;
node(int d) {
    data =d;
    left =NULL;
    right=NULL;
}};



node *BuildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    node*root = new node(d);
    root->left = BuildTree();
    root->right =BuildTree();

    return root;
}
int height(node *root) {
if(root==NULL){
        return 0;
}
return 1+ max(height(root->left),height(root->right));
}

void printKthLevel(node*root,int k){
if(root ==NULL){
    return ;
}
if(k==1){
        cout<<root->data<<" ,  ";
        return ;
    }
    printKthLevel(root -> left,k-1);
    printKthLevel(root -> right,k-1);
return ;
}

void PrintAllLevels(node *root){
int h =height(root);
for (int i=1;i<=h;i++){
    printKthLevel(root,i);
    cout<<endl;}
    return;

}
int main (){
    node*root =BuildTree();
PrintAllLevels(root);
return 0;}
