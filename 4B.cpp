/**
 *    Author: lulu
 *    Created:  10-August-2023  16:24:07
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

void lulu(){
    ll d, t; cin>>d >>t;
    vl mn(d);
    vl mx(d);
    fo(i,d){
        cin>>mn[i];
        cin>>mx[i];
    }

    vl st(d);
    fo(i,d){
        t-=mn[i];
        st[i]=mn[i];
    }
    if(t<0){
        cout<<"NO" <<endl;
        return;
    }
    fo(i,d){
        if(t-(mx[i]-mn[i])>=0){
            st[i]+=(mx[i]-mn[i]);
            t-=(mx[i]-mn[i]);
        }
        else{
            st[i]+=t;
            t=0;
        }
        if(t==0) break;
    }
    if(t>0){
        cout<<"NO" <<endl;
        return;
    }
    cout<<"YES" <<endl;
    fo(i,d){
        cout<<st[i];
        if(i<d-1) cout<<' ';
    }
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}