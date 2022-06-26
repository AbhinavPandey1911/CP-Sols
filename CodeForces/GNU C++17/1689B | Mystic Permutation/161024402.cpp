 
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
        std::vector<int> v;
 
        for(int i=0;i<n;i++)
            {cin>>a[i]; v.push_back(a[i]);}
    sort(v.begin(),v.end());
     int b[n];
     if(n==1) {cout<<-1<<endl; continue;}
 
     for(int i=0;i<n;i++)
        {if(a[i]!=v[i])
          { b[i]=v[i];
          }
        else{
           if(i!=n-1)
           { b[i]=v[i];
             b[i+1]=v[i+1];
             swap(b[i],b[i+1]);
             i++;
           }
           else if(i!=0){
              b[i]=v[i];
              swap(b[i],b[i-1]);
           }
 
        }
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
 
 cout<<endl;
 
    }
 
 
    return 0;
}