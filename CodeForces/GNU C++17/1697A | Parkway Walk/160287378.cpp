#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int t;
cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
int sum=0;
for(int i=0;i<n;i++)
    sum+=a[i];
if(sum<=m) cout<<"0\n";
else cout<<(sum-m)<<endl;
 
 
 
}
 
    return 0;
}