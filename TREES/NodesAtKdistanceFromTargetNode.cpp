#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d) {
    data=d;
    left=NULL;
    right=NULL;}
    };
node* BuildTree() {
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    root->left = BuildTree();
    root->right = BuildTree();


}

int main() {
}
