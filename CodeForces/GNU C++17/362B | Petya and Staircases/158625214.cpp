#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int n,d;
cin>>n>>d;
int a[d],flag=0;
for(int i=0;i<d;i++)
    cin>>a[i];
sort(a,a+d);
if(a[0]==1||a[d-1]==n)
    {cout<<"NO\n"; return 0;}
else{
    if(d<=2){cout<<"YES\n"; return 0;}
    else{
    
 for(int i=0;i<d-2;i++)
    if(a[i+1]==a[i]+1&&a[i+2]==a[i+1]+1)
        {flag=1; break;}
 
}
 
 
}
if(flag==1) cout<<"NO\n";
else cout<<"YES\n";
 
return 0;
 
}