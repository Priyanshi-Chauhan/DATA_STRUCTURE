
#include<iostream>
#include<list>
using namespace std;

class queuee {
    list<int> l;
public:

    void push(int data ){
    l.push_back(data);
    }
    bool isempty(){
        return (l.size()==0);
    }
    void pop () {
        if(!l.empty()){
            l.pop_front();}
    }
    int frontt() {
    return l.front();}

};


int main () {
    queuee q;
        q.push(1);
         q.push(2);
          q.push(3);
           q.push(4);
            q.push(5); q.pop();
            while(!q.isempty()){
                cout<<q.frontt()<<  "   ";
                q.pop();
            }


 return 0;
 }
