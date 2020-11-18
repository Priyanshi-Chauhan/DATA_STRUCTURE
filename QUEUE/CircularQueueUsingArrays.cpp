
#include<iostream>
using namespace std;

class queuee{
    int cs,ms;
int *arr;
int frontt;
    int rear;
    public:
queuee( int ds = 4){
    arr =new int[ms];
    cs = 0;
    ms=ds;
    frontt =0;
    rear =ms-1;}
    bool isempty() {
     return (cs==0);
     }
     bool isfull() {
     return (cs == ms);}
    void push(int data) {
   if(!isfull()){
        rear=(rear +1)%ms;
    arr[rear]=data;
    cs++;
   }
    }
void pop() {
    if(!isempty()){
    frontt =(frontt +1)%ms;
    cs--;
}}

int fronttt() {
return arr[frontt]; }

~queuee(){
    if(arr!=NULL){
delete [] arr;
arr =NULL;}
}};

int main () {
queuee q ;
q.push(10);
q.push(29);
q.push(18);
q.pop();
q.push(11);
while(!q.isempty()){
    cout<<q.fronttt()<<"->";
    q.pop();

}
return 0;}
