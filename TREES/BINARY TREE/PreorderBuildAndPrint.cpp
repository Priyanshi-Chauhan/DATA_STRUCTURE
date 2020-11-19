
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node *right;
    node(int d) {
        data =d;
        left = NULL;
        right =NULL;
    }
};

node * BuildTree(){
int d;cin>>d;
if(d==-1){
    return NULL;
}
node *root = new node(d);
root->left = BuildTree();
root ->right =BuildTree();
return root;
}

void print( node *root) {
if(root==NULL){
    return;
}
// otherwise print root first followed by subtrees
cout<<root->data << " ";
print(root ->left);
print(root ->right);
}

int main () {
node *root =BuildTree();
print(root);

return 0;}
