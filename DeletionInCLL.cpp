#include<iostream>
using namespace std;

 class node{
 public:
     int data;
     node*next=NULL;
     node(int d ){
     data=d;
     next=NULL;}
 };
 void insertt(node *&head,int d){
 //STEP 1;
 node *n =new node(d);
 node *temp=head;
 //STEP 2
 n->next=head;
 //step3
 if(temp!=NULL){
    while(temp->next!=head ){
        temp=temp->next;
    }
    temp->next=n;
 }
 else {
    n->next=  n ;
 }

 head = n ;
 }

 // search for the node which has to be deleted
 node* searchh(node *&head ,int d){
 node *temp=head;
 // for all the nodes except last node
 while(temp->next !=head){
   if(temp->data !=d){
    temp=temp->next;

 }
return temp;
 }
 // out of the loop, only for the last node
 if(temp->data == d){
    return temp;
 }
 return NULL;
 }
 void del(node *&head, int d){
   //step1
   // calling the function searchh to get the node to be deleted
   node * del=searchh(head,d);

   if(del ==  NULL) {
     return ;
   }
   //the other case is if del==head
     if(del ==head ){
        head = head ->next;
     }
     // otherwise
     node *temp=head;
     // stop one node before the del node
     while(temp -> next !=del){
        temp=temp->next;
     }
     temp->next=del->next;
     delete del;
 }
 void print( node *head) {
    node *temp=head;
     while(temp->next!=head ){
        cout<<temp->data << "->";
        temp=temp->next;

     }
     cout<<temp->data<<endl;

 }
 int main () {
  node *head =NULL;
insertt(head,10);
 insertt(head,20);
 insertt(head,30);
 insertt(head,40);
 print(head);
 del(head,30);
 print(head);
  return 0;
  }
