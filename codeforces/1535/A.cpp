#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
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
    int ttt; cin >> ttt;
    while(ttt--) {
 	
 	int s1,s2,s3,s4;
 	cin>>s1>>s2>>s3>>s4;

 	

 	if(max(s1,s2)<min(s3,s4)||max(s3,s4)<min(s1,s2))
 		cout<<"NO"<<nL;
 	 else
 		cout<<"YES"<<nL;

    }
    return 0;
}