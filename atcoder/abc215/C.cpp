#include <bits/stdc++.h>
using namespace std;
  

void nPermute(string str, long int n)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
  
    // Keep iterating until
    // we reach nth position
    long int i = 1;
    do {
        // check for nth iteration
        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
  
  
    cout << str<<"\n";
}
  
// Driver code
int main()
{
    string str;cin>>str;
    long int n;cin>>n;
    nPermute(str, n);
    return 0;
}