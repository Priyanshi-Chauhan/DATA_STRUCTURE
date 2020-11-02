
#include<iostream>
using namespace std;

void replacePI(char *str,int i ){
//base case
if(str[i]=='\0' || str[i+1]=='\0'){
   return ;
}
//rec case
if(str[i]=='p' && str[i+1]=='i'){
int j =0;
while(str[j] != '\0'){
    j++;

}
while(j>=i+2){
    str[j+2]=str[j];
    j--;
}
    str[i]='3';
    str[i+1]='.';
    str[i+2]='1';
    str[i+3]='4';
    replacePI(str,i+4);
}

else{
        //move to next position if no 'pi' is observed.
    replacePI(str,i+1);
}
return;
}


int main() {
 char str[1000];
 cin>>str;

 replacePI(str,0);
 cout<<str;
 return 0;
 }
