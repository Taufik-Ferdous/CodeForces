/**
 *    Author: lulu (Tasmir_)
 *    Created:  30-August-2023  10:21:12
**/
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long 

#define fo(i,n) for(ll i=0; i<n; ++i)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>=n;i<n?++i:--i)
#define deb(x) cout<<#x <<"=" <<x <<endl
#define deb2(x,y) cout<<#x <<"=" <<x <<" " <<#y <<"=" <<y <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef pair<ll,ll>      pl;
typedef vector<ll>       vl;

const int mod = 1e9+7;
const ll N = 1e7+10;
//====================================

void solve(){
    ll len, dis; cin>>len >>dis;
    
    string s; cin>>s;

    ll ans=0;
    ll cnt=0;

    bool f=1;

    fo(i,len){
        if(s[i]=='1'){
            if(f){
                f=0;
                ans+=cnt/(dis+1);
            }
            else ans+=(((cnt+1)/(dis+1))-1);
            
            cnt=0;
        }
        else cnt++;
    }
    if(cnt){
        if(f){
            ans+=(cnt/(dis+1));
            if(cnt%(dis+1)) ans++;
        }
        else ans+=cnt/(dis+1);
    }

    cout <<ans <<endl;
}


int main(){
    optimize();

    ll t=1;
    cin>>t;
    while(t--)
        solve();
}
