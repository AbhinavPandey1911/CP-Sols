#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cnt=0;
 for(int i=0;i<s.size()/2;i++)
     if(s[i]!=s[n-1-i]) cnt++;
  cout<<(cnt+1)/2<<endl;

}
return 0;
}