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
 
     int n;
     cin>>n;
     int ans=0;
    
      
       if(n>0)
        {ans+=n/5; n=n%5;}
       if(n>0)
        {ans+=n/4; n=n%4;}
   
 
       if(n>0)
          {ans+=n/3; n=n%3;}
 
    
     if(n>0)
       { ans+=n/2; n=n%2;}
 
 
    if(n>0)
      {ans+=n;  n=0;}
    
cout<<ans<<endl;
 
return 0;
} 