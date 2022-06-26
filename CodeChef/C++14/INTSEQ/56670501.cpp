#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int k;
 cin>>k;
 int count=0;
 while(k%2==0)
 {
   count++;
   k=k/2;
 }
 cout<<count<<endl;
}
    
return 0;
}