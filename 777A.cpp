/**
 *    Author: lulu
 *    Created:  10-August-2023  14:31:56
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
    ll a, b; cin>>a >>b; a%=6;
    vl v={0,0,0}; v[b]=1;
    bool f; if(a%2==0) f=0; else f=1;
    //swap
    fo(i,a){
        if(f){
            swap(v[0],v[1]);
            f=0;
        }
        else{
            swap(v[2],v[1]);
            f=1;
        }
    }
    fo(i,3) if(v[i]==1) cout<<i <<endl;
}


int main(){
    optimize();

    ll t=1;
    // cin>>t;
    while(t--)
        lulu();
}