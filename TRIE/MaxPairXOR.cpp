
#include<iostream>
using namespace std;

class node {
public:
node * left;
node * right;

};
 class trie {

 node * root ;
public:
    trie() {root = new node();}
// insert function
// insert each bit
void insert(int n) {
    // extract all bits

    for( int i=31;i>=0;i--){
            node* temp =root ;
        int bit = (n>>i)&1;
if(bit ==0){
    if( temp->left !=NULL){
        temp=temp->left;
    }

        temp->left = new node();

}
else{
// if bit ==1
if(temp->right == NULL){
    temp->right =new node();
}
else
    temp=temp->right;
}

    }}

int max_xor_helper (int value) {

int current_ans=0;
for( int i=31;i>=0;i--){
        node* temp =root ;
    int bit = (value>>i)&1;
    if(bit ==0){
        // find a complementary
        if( temp->right !=NULL){
                temp=temp->right;
            current_ans += (1<<i);
        }
        else {
            temp=temp->left;
        }


    }
    else{
        if(temp->left!=NULL){
            temp=temp->left;
            current_ans+=(1<<i);
        }
        else {
            temp=temp->right;
        }

    }
}

    return current_ans;
}


int max_xor(int * input , int n){
    int max_xor =0;
    for( int i=0;i<n;i++){
        int val=input[i];
        insert(val);
    int current_xor =max_xor_helper(val);
    cout<<current_xor<<"  ,";

    max_xor =max(current_xor, max_xor);
    }
return max_xor;
}



 };

int main () {
 int input[]={3,10,5,25,2,8};
 trie t;
 cout<<t.max_xor(input,6)<<endl;

 return 0;}
