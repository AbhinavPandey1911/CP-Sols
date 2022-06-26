#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
string s1,s2;
int flag2=0,flag3=0;
cin>>s1>>s2;
 //int j=0;
/*if(s1.size()!=s2.size()){
   for(int i=0;i<s1.size();i++)
    { if(s1[i]==s2[j]) j++;
    else j=0;
     if(j==s2.size()-1) break;
    }
   if(j==s2.size()-1) flag1=1;
 
}*/
//cout<<flag1<<endl;
map<char,int>m,m2;
for(int i=0;i<s1.size();i++)
  m[s1[i]]++;
for(int i=0;i<s2.size();i++)
  m2[s2[i]]++;
 
for(auto it:m2)
  {if(m[it.first]>=it.second) continue; 
  else flag3=1; break;}
  int j=0;
  int flag4=0;
 for(int i=0;i<s1.size();i++)
 { if(s1[i]==s2[j]) j++;
    if(j==s2.size()-1) {flag4=1; break;}
 }
 //cout<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;
 
if(flag3==0&&s1.size()!=s2.size()&&flag4==0) cout<<"both\n";
else if(flag3==0&&flag4==1) cout<<"automaton\n";
else if(flag3==0) cout<<"array\n";
else cout<<"need tree"<<endl;
 
  
return 0;
 
}