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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	int t;cin>>t;
    while(t--){
 	ll n;cin>>n;
 	ll sum=0;
 	string s1,s;cin>>s1>>s;
 	for (int i = 0; i < n; ++i)
 	{
 		if(s[i]=='1'){
 			if(s1[i]=='0'){
 				sum++;
 			}
 			else if(i!=0 && s1[i-1]=='1'){
 				sum++;
 				s1[i-1]=='0';
 			}
 			else if(i<n && s1[i+1]=='1'){
 				sum++;
 				s1[i+1]='0';
 			}
 		}
    }
    cout<<sum<<nl;
}}