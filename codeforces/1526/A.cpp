#include<bits/stdc++.h>
using namespace std;

int test,n,a[55];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>test;
	while(test--){
		cin>>n;n*=2;
		for(int i=1;i<=n;i++)cin>>a[i];
			sort(a+1,a+n+1);
		for(int i=2;i<=n/2;i+=2)
			swap(a[i],a[n+1-i]);
		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
			cout<<"\n";
	}	

}