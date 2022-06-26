 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
  int n,m;
  cin>>n>>m;
  int a[n],cnt=0;
  for(int i=0;i<n;i++)
    { cin>>a[i]; if(a[i]>m) cnt++;}
 cout<<(n-cnt)+cnt*2<<endl;
 
 
 
   
    return 0;
 
}