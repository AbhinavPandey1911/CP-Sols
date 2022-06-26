#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int a,b;
    cin>>a>>b;
    for(int i=0;i<min(a,b);i++)
     cout<<"01";
   for(int i=0;i<max(a,b)-min(a,b);i++)
    {if(max(a,b)==a)
       cout<<0; 
     else cout<<1;}
cout<<endl;
 
 
  }
  return 0;
}