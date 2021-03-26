#include<unordered_map>
#include<iostream>
using namespace std;


//Complete this function
bool isIsogram(string s)
{

unordered_map<string , int> m ;
for( int i =s[0];i!='\0';i++){
m[i]++;
    if(m[i] !=1){
        return false;
        break;
    }

}
return true;


    }
    int main () {
         string s;

         cin>> s;
         if(isIsogram(s)){
             cout<< "yes"<<endl;
         }
         else{
            cout<<"No";
         }
     return 0;}
