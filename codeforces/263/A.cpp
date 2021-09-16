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
   	int a,i,j;
   	
   	for ( i = 1; i <=5; ++i)
   	{
   		for ( j = 1; j <=5; ++j)
   		{
   			/* code */
   			cin>>a;
   				if(a==1)
   	cout<<abs(3-i)+abs(3-j)<<nl;
   		}
   	}
   
}
