#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
         cin>>a[i];
    int ans=0;
    ans+=(2*n-1)+a[0];
    for(int i=1;i<n;i++)
     ans+=abs(a[i]-a[i-1]);
 cout<<ans<<endl;
 
return 0;
 
}