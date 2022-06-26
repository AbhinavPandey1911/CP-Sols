#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      map<int,int>m;
      for(int i=0;i<n;i++)
         {cin>>a[i]; m[a[i]]++;}
     int sum=0;
     int flag=0;
      for(auto it:m)
       { if(it.second>1)
        sum+=it.second-1;
        flag++;
     }
    if(sum%2)
       cout<<flag-1<<endl;
   else cout<<flag<<endl;
 
 
 
    }
    return 0;
}