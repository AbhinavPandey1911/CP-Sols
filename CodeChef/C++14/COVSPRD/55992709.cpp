#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){ int n,d,ans=1;
cin>>n>>d;
 for(int i=1;i<=d;i++)
   { if(i<=10) ans=ans*2;
    if(i>10) ans=ans*3;
    if(ans>n) break;
    }
 if(ans<n)
cout<<ans<<endl;
else cout<<n<<endl;
}

    return 0;

}