#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    int curr1=0,curr2=0;
    string s="";
    for(int i=0;i<n;i++)
      {if(abs(curr1+a[i][0]-curr2)<=500) {curr1+=a[i][0];
         s+="A"; }
        else 
         {  curr2+=a[i][1];
           s+="G";}}
 cout<<s<<endl;
 
 
 
 
 
return 0;
 
}