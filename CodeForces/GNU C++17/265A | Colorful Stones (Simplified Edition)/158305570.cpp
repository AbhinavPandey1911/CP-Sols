#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
string s1,s2;
cin>>s1>>s2;
int j=0;
for(int i=0;i<s2.size();i++)
{ if(s2[i]==s1[j]&&j<s1.size()) {j++;}
 
}
cout<<j+1<<endl;
 
return 0;
 
}