#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
} 
int main()
{ int n,x,y;
  cin>>n>>x>>y;
  int xi[n],yi[n];
map<double,int> m;
  for(int i=0;i<n;i++)
    {cin>>xi[i]>>yi[i];
      if(xi[i]==x) m[(double)INT_MIN]++;
      else
    m[((double)(yi[i]-y))/(xi[i]-x)]++;}
  cout<<m.size()<<endl;
  
    
    return 0;
}