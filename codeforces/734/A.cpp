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
   	ll n;cin>>n;
   	ll anton=0,dan=0;
   		string s;
   	for (int i = 0; i < n; ++i)
   	{
   	cin>>s;
   	
   	}

   	for (int i = 0; i < n; ++i)
   	{
   			if(s[i]=='A')
   			anton++;
   		else
   			dan++;
   	}

   	if (anton>dan)
   	{
   		cout<<"Anton"<<nl;
   	}
   	else if(dan>anton){
   		cout<<"Danik"<<nl;
   	}
   	else{
   		cout<<"Friendship"<<nl;
   	}
}