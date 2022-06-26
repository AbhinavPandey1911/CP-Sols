#include <bits/stdc++.h>
 
 
using namespace std;
 
int binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    int temp = num.size()-1;
    while (temp!=-1) {
        int last_digit = (n[temp]-'0'); 
 
        temp--;
 
        dec_value += last_digit * base;
        dec_value=dec_value%1000003;
 
        base = base * 2%1000003;
    }
 
    return dec_value%1000003;
}
int main() {
 int t;
 cin>>t;
 while(t--){
          int n;
        cin>>n;
      vector<pair<int,int>>v(n);
      for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    int vmil=INT_MAX,vmar=INT_MIN;
    for(int i=0;i<n;i++)
      {  if(vmil>v[i].second) vmil=v[i].second;
       if(vmar<v[i].first) vmar=v[i].first;
   }
   cout<<max(0,vmar-vmil)<<endl;
 
 
 
 }
 
 
return 0;
} 