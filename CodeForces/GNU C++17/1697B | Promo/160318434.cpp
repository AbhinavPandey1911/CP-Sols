#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
long long n,q;
cin>>n>>q;
long long a[n],quex,quey,psum[n+1]={0};
for(long long i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
psum[1]=a[n-1];
for(long long i=n-2;i>=0;i--)
 psum[n-i]+=(psum[n-i-1]+a[i]);
 
for(long long i=0;i<q;i++)
{ cin>>quex>>quey;
  long long ans=psum[quex]-psum[quex-quey];
 cout<<ans<<endl;
 
}
 
 
    return 0;
}