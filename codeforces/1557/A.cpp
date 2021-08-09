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
 	vi a(n);
 	float sum=0;
 	double avg,ans;
 	for (int i = 0; i < n; ++i)
 	       {
 	       	 cin>>a[i];
 	       }
 	       sort(a.begin(),a.end());
 	       for (int i = 0; i < n-1; ++i)
 	       {
 	       	sum+=a[i];
 	       	avg=sum/(n-1);
 	       	ans=a[n-1]+avg;
 	       }
 	      cout<<std::fixed<<std::setprecision(9)<<ans<<nl;


    }
}