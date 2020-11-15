#include<iostream>
#include<vector>
using namespace std;
template<typename T>

class stack {
private:
    vector<T>v;

public:
bool isempty() {
return (v.size()== 0 );

}
    void push(T data) {

    v.push_back(data);

    }
void pop() {
if(!isempty()){
v.pop_back();}
}
 T top()
{
    return v[v.size() - 1];}


};
int main(){stack <char>s ;
for(char i=65;i<=70;i++){
    s.push(i);
}

while(!s.isempty() ){
    cout<< s.top ()<<endl;
    s.pop() ;}

return 0;}
