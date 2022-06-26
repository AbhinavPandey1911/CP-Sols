#include<bits/stdc++.h>
using namespace std;
int main() {
 string s;
 cin>>s;
 map<char,int>m;
 for(int i=0;i<s.size();i++)
    m[s[i]]++;
int a[2]={0};
 char b[2];
for(auto it: m)
    {if(it.first=='4') {a[0]=it.second; b[0]=it.first;}
else if(it.first=='7') {a[1]=it.second;  b[1]=it.first;}
}
if(a[0]==0&&a[1]==0) cout<<"-1\n";
 else {char ans=a[0]>=a[1]?b[0]:b[1];
cout<<ans<<endl;}
 
 
 
 
return 0;
 
}