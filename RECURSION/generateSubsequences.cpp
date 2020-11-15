// given a string print all possible subsequences

#include<iostream>
using namespace std;

void subsequences(char*in , char*out, int i , int j ){
if(in[i]=='\0'){
    out[j]='\0';
    cout<<out<<endl;
    return ;
}
//recursive case
//include character
out[j]=in[i];
subsequences(in,out,i+1,j+1);

//exclude character
subsequences(in,out,i+1,j);
}

int main() {

 char input[100];
 cin>>input;
 char output[100];
 subsequences(input,output,0,0);

 return 0;
 }
