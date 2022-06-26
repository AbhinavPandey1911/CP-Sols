#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
long long n,m,k;
cin>>n>>m;
cin>>k;
long long ans=-1;
if(m>n) swap(n,m);
 if((n-1)+(m-1)<k) {cout<<"-1"; return 0;}
 if(k>=n){
    ans=max(ans,1*(m/(k-(n-1)+1)));
}
 if(k<m)
{ ans=max(ans,n*(m/(k+1)));
 
}
 if(k<n)
{ ans=max(ans,m*(n/(k+1)));
 
}
cout<<ans<<endl;
 
 
return 0;
 
}