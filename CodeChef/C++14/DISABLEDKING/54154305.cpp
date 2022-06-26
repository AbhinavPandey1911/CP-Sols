// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    { int n;
    cin>>n;
    if(n%2==0)cout<<2*ceil((float)(n-1)/2)<<endl;
     else cout<<n-1<<endl;

    }
    return 0;
}
