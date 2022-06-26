#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int n;
cin>>n;
int p,q,x;
cin>>p;
std::vector<int> v;
for(int i=0;i<p;i++)
{cin>>x; v.push_back(x);}
cin>>q;
 
for(int i=0;i<q;i++)
 {cin>>x; v.push_back(x);}
sort(v.begin(),v.end());
int a[n+1]={0};
for(int i=0;i<v.size();i++)
  a[v[i]]++;
int flag=0;
for(int i=1;i<=n;i++)
    //cout<<a[i]<<" ";
    if(a[i]==0) {flag=1; break;}
if(flag==1) cout<<"Oh, my keyboard!\n";
else cout<<"I become the guy.\n";
 
 
 
return 0;
 
}