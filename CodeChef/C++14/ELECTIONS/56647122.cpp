#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int x1,x2,x3;
 cin>>x1>>x2>>x3;
  if(x1>50&&x1>x2&&x1>x3) {cout<<"A"<<endl; continue;}
  if(x2>50&&x2>x1&&x2>x3) {cout<<"B"<<endl; continue;}
  if(x3>50&&x3>x1&&x3>x2) {cout<<"C"<<endl; continue;}
 else cout<<"NOTA"<<endl;
}
    
return 0;
}