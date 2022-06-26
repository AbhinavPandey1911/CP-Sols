#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){  
  string s;
  cin>>s;
  int flag=1;
  if(s=="1"){cout<<"NO"<<endl; continue;}
  for(long long i=0;i<s.size()-1;i++)
 {  if(s[i]=='1'&&s[i+1]=='0') {cout<<"YES"<<endl; flag=0; break;}
   else if(s[i]=='1'&&s[i+1]=='1') {cout<<"YES"<<endl; flag=0; break;}
  else flag=1;
}
if(flag==1) cout<<"NO"<<endl;

}

    return 0;

}