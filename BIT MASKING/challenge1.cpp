
#include<iostream>
using namespace std;
int main() {

	int n ;
	 cin>> n;
	for(int i= 0;i<n;i++)  {
		int a ; int b;
         cin>>a>>b;
             // counting the set bits
	int ans = 0;
	for( int i=a;i<=b;i++){
 int bit=i;
			 while(bit>0){

				  bit = bit & (bit - 1) ;
				 ans ++;
			 } }
cout<<ans;}
	return 0;
}
