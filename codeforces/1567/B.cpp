#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
const int N=3e5+5;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int prefix[N];
	for (int i = 1; i < N; i++){
 	prefix[i]=prefix[i-1]^(i-1);
 } 
   	int t;cin>>t;
    while(t--){
   		int x,y;cin>>x>>y;
   		int a=prefix[x];

   		if((a^y)==x)
   			cout<<x+2<<nl;  
   		else if(a==y)
   			cout<<x<<nl;
   		else
   			cout<<x+1<<nl;
    }
}