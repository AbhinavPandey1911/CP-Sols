#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
   int x1,x2;
   cin>>x1>>x2;
   x1=(x1*10);
   x2=(x2*5);
   cout<< (x1==x2?"ANY":x1>x2?"FIRST":"SECOND")<<endl;

  }

return 0;
}