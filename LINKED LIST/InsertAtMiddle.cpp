
#include<iostream>
using namespace std;
class node{
public: int data;
node *next;
node(int d) {
    data =d;
    next=NULL;
}};

void InsertAtHead(node* &head, int data) {
    if(head== NULL){
        head  = new node(data);
return;
    }
    node *newnode =new node(data);
    newnode ->next = head;
    head = newnode;
}
void InsertAtMiddle(node *&head,int data, int pos) {
    while(head->data !=pos){
        head=head->next;

    }
node* newdata = new node(data);
newdata-> next =head->next ;
head ->next =newdata;
}

void print(node *head) {

while(head!=NULL){
    cout<<head->data<< "-> " ;
    head=head->next;
}

}
int main () {
    node *head= NULL;
    InsertAtHead(head,1 );
        InsertAtHead(head,3 );
            InsertAtHead(head,2 );
                InsertAtHead(head,4 );
    print(head);
cout<<endl;
    InsertAtMiddle(head,10,2);
     print(head);
return 0;}
