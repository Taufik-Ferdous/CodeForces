/**
 *    Author: lulu
 *    Created:  09-August-2023  20:22:22
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
const ll N = 1e6+10;
vector<bool> ans(N,0);
//====================================

void lulu(){
    ll a;
    cin>>a;
    bool f=0;
    fo(i,a){
        ll dum;
        cin>>dum;
        if(dum==1) f=1;
    }
    if(f) cout<<-1 <<endl;
    else cout<<1 <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}