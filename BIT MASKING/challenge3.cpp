#include<iostream>
using namespace std;

int main () {
	int m , n;
	cin>>m>>n;
int ans =0;
	for( int i=m; i<=n;i++){
int xxor =i;
		for( int j=i; j<=n;j++){
xxor ^= j;
 ans = max(xxor, ans);
		}
		}
	cout<<ans;

	return 0;
}
