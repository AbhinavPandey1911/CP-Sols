#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ int t;
cin>>t;
while(t--){
  float n,k,x;
  cin>>n>>k>>x;
  if(x>k) {cout<<"-1"<<endl; continue;}
 int j=0;
 for(int i=0;i<n;i++)
  { if(j<x-1) {cout<<j<<" "; j++;}
   else if(j==x-1) { cout<<j<<" "; j=0;}
 
  }
  cout<<endl;
}
    return 0; 
} 