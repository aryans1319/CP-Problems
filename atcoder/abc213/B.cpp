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
   	vi arr(n);
   	for (int i = 0; i < n; ++i)
   	{
   		cin>>arr[i];
   	}
   	 int largest = 0, secondLargest = -1;
   for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
 	
    // finding the largest element in the array excluding
    // the largest element calculated above
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            // first change the value of second largest
            // as soon as the next element is found
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    cout<<secondLargest+1<<nl;

}