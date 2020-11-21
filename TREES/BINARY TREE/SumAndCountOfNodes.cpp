
#include<iostream>
using namespace std;


class node{
public:
    int data;
    node *left;
    node*right;
    node(int d){
        data =d;
        left =NULL;
        right =NULL ;
    }


};
node * BuildTree(){
    int d;
    cin >>d;
    if(d==-1){
        return NULL;
    }
    else {
node *root =new node(d);
root->left = BuildTree();
root->right =BuildTree();
return root;
}}


int countNodes(node*root) {
    if(root ==NULL){
         return 0;
    }
    return 1+countNodes(root->left) + countNodes(root ->right);
}
int sumOfNodes (node *root)
{
    if(root == NULL){
        return 0;
    }
    return (root->data)+sumOfNodes(root->left) + sumOfNodes(root->right);

} int main () {
 node * root =BuildTree();
 int counT = countNodes(root);
 cout<<counT<<endl;
 int sum=sumOfNodes(root);
 cout<<sum<<endl;


 return 0;
}
