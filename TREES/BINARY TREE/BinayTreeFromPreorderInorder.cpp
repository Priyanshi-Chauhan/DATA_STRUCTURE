
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
     node*right;
     node(int d){
data=d;
left=NULL;
right=NULL;
     }};

 void bfs( node *root){
 queue<node*> q;
 q.push(root);
 q.push(NULL);

while(!q.empty() ){
    node *f =q.front();
    if(f ==NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }

    }
    else{
            cout<<f->data<< " , ";
    q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }

    }

 }
 return ;
 }

node *build(int *in , int *pre ,int s , int e){
static int i =0;             // means it is initialised with 0 only once and after that it would be taking the updated value from previous
// base case
if(s>e){
    return NULL;
}
// rec case
node *root = new node(pre[i]);

 int index =-1;

 for (int j=s;j<e;j++){
    if(in[j]== pre[i]){
        index = j;
        break;
    }
 }
 i++;
 root->left= build(in,pre , s,index-1);
 root->right=build(in,pre ,index+1,e);
 return root;
 }

int main ()
 {
     int pre[]= {1,2,3,4,8,5,6,7};
     int in[]={3,2,8,4,1,6,7,5};
     int n =sizeof(pre)/sizeof(int);
    node * root =  build(in,pre,0,n-1);
     bfs(root);
          return 0;}
