#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define forn(i, n) for(int i=0; i<(n); ++i)
 
void soln(){
    ll n;
    cin>>n;
    ll eve[n], ev_no=-1, cnt=0;
    forn(i, n) cin>>eve[i];
    vector<ll> day;
    if(!(n%2)){
        unordered_map<ll, ll> ent, ext;
        forn(i, n){
            if(eve[i]>0) ent[eve[i]]++;
            else ext[-1*eve[i]]++;
            if(eve[i]>0 && ent[eve[i]]==1){
                cnt++;
            }
            else if(eve[i]<0 && ext[-1*eve[i]]==1 && ent[-1*eve[i]]==1){
                cnt--;
            }
            else{
                cout<<-1;
                return;
            }
 
            if(cnt==0){
                day.push_back(i-ev_no);
                ev_no=i;
                for(auto j=ent.begin(); j!=ent.end(); j++) (j->second)=0;
                for(auto j=ext.begin(); j!=ext.end(); j++) (j->second)=0;
            }
        }
        if(cnt!=0){
            cout<<-1;
            return;
        }
        cout<<day.size()<<endl;
        forn(i, day.size()) cout<<day[i]<<" ";
    }
    else cout<<-1;
}
 
int main(){
    ll t=1;
    // cin>>t;
    while(t--) soln();
}