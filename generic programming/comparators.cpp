
#include<iostream>
#include<list>
typedef long long int ll;
using namespace std;

class book {

public:
     string name;
    ll price;
book(string name, ll price){
this->price=price;
this->name=name;
}

};
class bookcompare{


public:
    bool operator()(book a , book b){
if(a.name==b.name){
    return true;
}else{
return false;
}}};
 template<class FI, class T , class compare>
FI search(FI start , FI end , T key , compare cmp){
while(start!=end){
    if(cmp(*start , key)){
        return start;
    }
    else start++;
}
return end;
}

 int main() {
book b1("c++" ,  100 );
book b2 ( "python", 130);
book b3 ("java", 120);
book booktofind("c++" ,110);

list<book> l;
l.push_back(b1);
l.push_back(b2);
l.push_back(b3);

/*if(b1 == booktofind){
    cout<<"true"<<endl;
}*/
bookcompare cc;
if(cc(b1, booktofind))
{

    cout<<"yes same books"<<endl;
}
else {
    cout<<"No"<<endl;
}
list<book> :: iterator it= search(l.begin(), l.end(), booktofind ,cc );
if(it != l.end()){
    cout<<"book found"<<endl;
}
      return 0;}
