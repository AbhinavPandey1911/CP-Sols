 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
    int t;
    cin>>t;
    while(t--){
  int n,m;
  cin>>n>>m;
  int a[n][m];
  int idx,idy,max=INT_MIN;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  { cin>>a[i][j];
     if(max<a[i][j]){
        max=a[i][j]; idx=i+1; idy=j+1;
     }
  }
  int ansx,ansy;
 
  ansx= idx>n-idx+1? idx:n-idx+1;
  ansy= idy>m-idy+1? idy:m-idy+1;
  cout<<ansx*ansy<<endl;
 
 
    }
   
    return 0;
 
}