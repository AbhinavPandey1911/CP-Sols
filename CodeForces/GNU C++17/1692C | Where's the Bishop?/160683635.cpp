#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
} 
int main()
{ int t;
cin>>t;
while(t--){
 int n=8;
  char a[8][8];
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
    cin>>a[i][j];
    int x,y;
   for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
     if(a[i][j]=='#'&&a[i-1][j-1]=='#'&&a[i+1][j+1]=='#'&&a[i-1][j+1]=='#'&&a[i+1][j-1]=='#'&&i!=0&&i!=n-1&&j!=0&&j!=n-1)
      {x=i+1; y=j+1;}
  
  cout<<x<<" "<<y<<endl;
  }
  
 return 0;
}
 