#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
  int t;;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
 
    for(int i=0;i<n;i++)
        cin>>b[i];
   int k=0,idx,flag1=0,idx2;
for(int i=0;i<n;i++)
    if(b[i]-a[i]!=0) {k=b[i]-a[i]; idx=i; break;}
if(k<0) {cout<<"NO\n"; continue;}
else if(k==0) cout<<"YES\n";
else{
   for(int i=idx;b[i]-a[i]==k&&i<n;i++)
   { idx2=i;
   }
 for(int i=idx2+1;i<n;i++)
 { if(b[i]!=a[i]) {flag1=1; break;}
 }
if(flag1==1) cout<<"NO\n";
else cout<<"YES\n";
 
}
 
  }
 
return 0;
 
}