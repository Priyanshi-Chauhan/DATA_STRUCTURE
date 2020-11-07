
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node*next=NULL;
//constructor
node(int d) {
data = d ;
next=NULL;
}
 };

 void insertt(node*&head,int data){
 node *n=new node(data);
 // made for traversal
 node *temp=head;
 n->next=head;           // step 1
 if(temp!=NULL){            // step 2 1st condn
 while(temp->next!=head){
    temp=temp->next;
 }
 // this one is the last node
 temp->next=n;}
 else {
    n->next=n;           // 2nd condn
 }
 head=n;                 // 3rd condn


 }
 void print(node*head){
node *temp=head;
while(temp->next != head){
    cout<<temp->data<<"->";
    temp=temp->next;
}
// to print the last node.
cout<<temp->data<<endl;
return ;
 }
 int main() {
  node*head =NULL;
  insertt(head,10);
  insertt(head,20);
  insertt(head,30);
  insertt(head,40);
  insertt(head,50);
  insertt(head,60);
print(head);
return 0;
}


