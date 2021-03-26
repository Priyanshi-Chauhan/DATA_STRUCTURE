#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
struct trie {
trie * next[26];
bool ended;
trie() {
for(int i=0;i<26;i++)
    {next[i]==NULL;
    ended=false;}}
};
trie * root;

void insert(string s){
trie* cur =root;
for( int i=0;i<s.size() ;i++){
    if(cur->next[s[i]-'a']==NULL)
    {

        cur->next[s[i]-'a'] =new trie();
        cur = cur->next[s[i]-'a'];}

    }

cur->ended=true;

}
// search a particular string
bool intrie(string s){
    trie * cur = root;
    for( int i=0;i<s.size();i++){
        if(cur->next[s[i]-'a'] == NULL)
            {return false;
            }
        cur=cur->next[s[i]-'a'];
    }
    return cur->ended;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #endif
root =new trie();
insert("apaar");
insert("anuj");
insert("annanaya");
insert("priyanshi");
insert("prateek");
if(intrie("priyanshi")){
    cout<<"yes"<<endl;

}
else{
    cout<<"not found";
}
return 0;}
