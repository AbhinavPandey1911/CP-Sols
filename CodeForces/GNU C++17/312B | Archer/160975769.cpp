 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
double a, b, c, d; cin >> a >> b >> c >> d;
 
   double p = a/b, q = c/d;
   
 
   cout << p/(1-(1-p)*(1-q));
 
 
 
 
 
    return 0;
}