#include<iostream>
#include<stack>

using namespace std;

void InsertAtBottom(stack<int> &s,int x){
//base case
if(s.empty()){
    s.push(x);
return;
}
//rec case
int data =s.top();
s.pop();
InsertAtBottom(s,x);
s.push(data);
}

void reverseStack ( stack<int> &s ) {
    //base case
    if(s.empty()){
        return ;
    }

//rec case
int x= s.top();
s.pop();
reverseStack (s) ;
InsertAtBottom(s,x);



 }
 int main () {
stack <int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
reverseStack(s);
while(!s.empty()){
    cout<<s.top()<<  "   ";
    s.pop();
}
return 0;
 }
