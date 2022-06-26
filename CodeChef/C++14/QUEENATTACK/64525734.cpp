#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  long long  n,x,y,count=0;
  cin>>n>>x>>y;
  count=count+abs(x-1)+abs(x-n)+abs(y-1)+abs(y-n)+min(abs(x-1),abs(y-1))+min(abs(x-1),abs(y-n))+min(abs(x-n),abs(y-1))+min(abs(x-n),abs(y-n));
cout<<count<<endl;


}

return 0;
 



}