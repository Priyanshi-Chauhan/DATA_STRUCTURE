
#include<iostream>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printspellings(int number){
if(number==0){
     return ;
}
//rec case
int digit=number%10;
cout<<words[digit]<<" ";
//top to bottom approach
printspellings(number/10);
}

int main(){
 int number;
 cin>>number;

printspellings(number) ;
 }
