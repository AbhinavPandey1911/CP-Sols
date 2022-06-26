 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
int main() {
    // Write C++ code here  
       // freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
 int n,k;
 cin>>n>>k;
 int a[n];
 int maxi=INT_MIN;
 for(int i=0;i<n;i++)
    {cin>>a[i];  maxi=max(a[i]|k,maxi);}
 cout<<maxi<<endl;
 
}
    return 0;
 
}