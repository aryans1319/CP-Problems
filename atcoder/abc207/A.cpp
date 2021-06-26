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
  	ll a,b,c,sum1,sum2,sum3;
  	cin>>a>>b>>c;
  	sum1=a+b;
  	sum2=b+c;
  	sum3=a+c;

  	if(sum1>sum2 && sum1>sum3)
  		cout<<sum1<<nL;
  	else if(sum2>sum1 && sum2>sum3)
  		cout<<sum2<<nL;
  	else
  		cout<<sum3<<nL;
    return 0;
}