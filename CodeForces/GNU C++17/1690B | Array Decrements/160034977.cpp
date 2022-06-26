 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     int a[n],b[n];
     for(int i=0;i<n;i++)
      cin>>a[i];
    int flag=0;
     for(int i=0;i<n;i++)
      { cin>>b[i]; }
    if(a[0]<b[0]){ cout<<"NO\n";  continue;}
    else{
      int dif=INT_MAX;
      for(int i=0;i<n;i++)
        if(a[i]-b[i]<dif&&b[i]!=0) dif=a[i]-b[i];
    
    for(int i=0;i<n;i++)
      {if((a[i]-b[i]==dif||(b[i]==0&&a[i]-b[i]<dif))&&a[i]-b[i]>=0) continue;
    else { flag=1;}
  }
 
 if(flag==1) cout<<"NO\n";
 else cout<<"YES\n";
}
 
 
 
 
   }
 
  return 0;
}