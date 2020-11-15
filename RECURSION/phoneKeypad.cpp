
//given a number we have to generate the possible strings according to the phone keypad
#include<iostream>
using namespace std;

char keypad[][100]= {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUVW","XYZ"};

void phonekeypad(char *in, char *out,int i,int j){
//base case
if(in[i]=='\0'){
    out[j]='\0';
    cout<<out<<endl;
    return;
}

//rec case
int digit=in[i]-'0';
if(digit==0 || digit ==1){
    phonekeypad(in,out,i+1,j);
}
for(int k=0;keypad[digit][k]!= '\0';k++){
    out[j]=keypad[digit][k];
phonekeypad(in,out,i+1,j+1);
}
return;
}
int main() {
 char in[100];
 cin>>in;
 char out[100];
 phonekeypad(in,out,0,0);
 return 0;}
