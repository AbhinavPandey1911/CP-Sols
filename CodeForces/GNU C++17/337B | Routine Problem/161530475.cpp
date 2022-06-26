#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int dif1 = a*d - c*b;
    int dif2 = c*b - a*d;
    if (dif1>0){
        cout<<dif1/__gcd(dif1,a*d)<<"/"<<a*d/__gcd(dif1,a*d);
    }else {
        cout<<dif2/__gcd(dif2,b*c)<<"/"<<b*c/__gcd(dif2,b*c);
    }
}