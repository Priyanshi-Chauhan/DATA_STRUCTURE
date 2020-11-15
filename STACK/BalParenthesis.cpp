
#include<iostream>
#include<stack>
using namespace std;

bool BP(char *s1){
stack<char>s;
for (int i=0;s1[i]!='\0';i++){
        char ch = s1[i];

if(ch =='('){
    s.push(ch);
   }
   else
   if(ch==')'){
    if(s.empty() or s.top() !='('){
        return false;
       }
       s.pop();
   }
}
   return s.empty()?true:false;}
int main() {
    char s1[100] ="(a+b)-(c+d)";
if(BP(s1)){
    cout<<"valid"<<endl;
}
else {cout<<"not valid:"<<endl;}
 return 0;}
