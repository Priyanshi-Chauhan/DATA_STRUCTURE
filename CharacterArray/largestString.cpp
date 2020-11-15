
#include<iostream>
#include<cstring>

using namespace std;

int main() {int n;cin>> n ;
int llen=0;
char ch[100];
char largestCh[100];
cin.get();
for (int i=0;i<n;i++){
    cin.getline(ch,1000);
int clen= strlen(ch);
if(clen>llen){
        llen=clen;
    strcpy(largestCh,ch);
}

}
cout<<"largest is "  << largestCh<< endl;
return 0; }

