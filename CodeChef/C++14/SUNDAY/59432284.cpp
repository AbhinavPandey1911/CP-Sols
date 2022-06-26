#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
  int count=8;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
 for(int i=0;i<n;i++)
    if(a[i]%7!=0&&(a[i]!=6&&a[i]!=13&&a[i]!=20&&a[i]!=27))
        count++;

cout<<count<<endl;

 } 



 return 0;
}