#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
   long long int n;
   cin>>n;
   long long int a[n];
   long long int count=0;
   for(int i=0;i<n;i++)
    cin>>a[i];
    long long int temp; 
  for(int i=0;i<n-1;i++)
  { if(a[i]>a[i+1]) { count++;}
    if(a[i]>a[i+2]&&i<=n-3) count++;
    if(count>1) break;
  }
  if(count>1) cout<<"NO\n";
    else cout<<"YES\n";

  }

return 0;
}