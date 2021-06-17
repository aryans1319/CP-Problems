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
   	int n,count1=0,count2=0;
   	cin>>n;
   	string s;
   	for(int i=0;i<n;i++){
   		cin>>s;
   	}
   	for(int i=0;i<n;i++){
   		if(s[i]=='z')
   			count1++;
   		if(s[i]=='n')
   			count2++;	
   	}


   	for (int i = 1; i <=count2 ; ++i)
   	{
   		cout<<1<<" ";
   	}
   	for(int i=1;i<=count1;i++){
   		cout<<0<<" ";
   	}
   	

    return 0;
}