
#include<iostream>
#include<vector>
using namespace std;

class student{
public:
    int marks;
     string name;

};
void bucketsort(student s[], int n ) {
   // assuming marks are in the range 0-100
    vector<student> v[101];
    for( int i=0;i<n;i++){
        int m  = s[i].marks;
v[m].push_back(s[i]);
    }

    // iterate over the vector and print the students
    for( int i=100;i>=0;i--){


    for( vector<student> :: iterator it = v[i].begin(); it !=v[i].end();it ++) {
            cout<<(*it).marks <<"  " <<(*it).name<<endl;

    }
    }

}
int main () {
student s [1000];
int n; cin>> n;
for( int i=0;i<n ;i++ ){
    cin>>s[i].marks >> s[i].name;
}
 bucketsort(s,n);

 return 0;}
