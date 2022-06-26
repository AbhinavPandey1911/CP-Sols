 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
int t;
cin>>t;
while(t--){
 long long n;
 cin>>n;
 string s;
 cin>>s;
 string l;
 if(s[0]=='9')
{  int carry=0;
   for(int i=n-1;i>=0;i--){
        if(s[i]=='0'&&carry==1) {l+='0'; carry=0;}
        else if(s[i]=='0'&&carry!=1){l+='1'; carry=0;}
        else if(s[i]=='1'&&carry==0){l+='0'; carry=0;} 
     else {
         l+=to_string(11-(s[i]-'0')-carry);
          carry=1;
     }
 
    }
 
   reverse(l.begin(),l.end());
   cout<<l<<endl;
   }
 
   else {
  for(long long i=n-1;i>=0;i--)
    l+=to_string(9-(s[i]-'0'));
reverse(l.begin(),l.end());
      cout<<l<<endl;
 
}
}
   
    return 0;
 
}