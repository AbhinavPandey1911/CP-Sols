#include<bits/stdc++.h>
using namespace std;
int ans(int row,int column){
 if(row==1||column==1)
    return 1;
else return ans(row-1,column)+ans(row,column-1);
 
 
}
int main() {
//long long m= 1000000007;
int n;
cin>>n;
cout<<ans(n,n);
 
return 0;
 
}