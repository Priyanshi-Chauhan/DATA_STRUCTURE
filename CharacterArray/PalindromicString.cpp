#include<iostream>
#include<cstring>

using namespace std;
bool palindromic(char *s){
int i =0;int j=strlen(s)-1;
while(i<=j){
    if(s[i]==s[j]){
            i++;j--;

    }
    else {
        return false;
    }

}
return true;
}
int main() {
    char s[]="kanak";
    if(palindromic(s)){
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }

return 0;}

