#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>>t;
    while(t--)
    { int n;
     std::vector<int> v1;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      	cin>>a[i];
      int count=0;
      for(int i=0;i<n;i++)
      	{ if(a[i]==0) count++;
      	  else 
            { v1.push_back(count); count=0;}

        }
       sort(v1.begin(),v1.end());
    
      if(v1[v1.size()-1]%2!=0&&v1[v1.size()-1]>0&&v1[v1.size()-2]<(v1[v1.size()-1]+1)/2)
      	 cout<<"Yes"<<'\n';
       else if(v1[v1.size()-1]==0)
       	cout<<"No"<<'\n';
       else cout<<"No"<<'\n';
     
 
    }
    

  return 0;
 }
                
