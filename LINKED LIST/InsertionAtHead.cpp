
#include<iostream>
using namespace std;

class node{
public: int data ;
node *next;
node(int d) {
    data =d;
    next =NULL;
}};

void InsertAtHead(node *&head ,int d) {
    if(head == NULL) {
        head = new node(d);
       return ;
        }
 node * newdata= new node(d);
 newdata->next = head;
 head = newdata ;
}
void print(node * head) {
while(head!=NULL){
        cout<<head->data<<" ";
    head = head->next;
}
}
int main () {
    node *head= NULL;
InsertAtHead(head ,1);
InsertAtHead(head ,2);InsertAtHead(head ,3);
InsertAtHead(head ,4);InsertAtHead(head ,5);
InsertAtHead(head ,6);
InsertAtHead(head ,7);
print(head);
cout<<endl;
print(head);
 return 0;}
