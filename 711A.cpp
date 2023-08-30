/**
 *    Author: lulu
 *    Created:  08-August-2023  15:49:34
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
    ll a;
    cin>>a;
    vector<string> ans(a);
    fo(i,a) cin>>ans[i];
    bool f=0;
    fo(i,a){
        if(ans[i][0]=='O' && ans[i][1]=='O'){
            ans[i][0]='+';
            ans[i][1]='+';
            f=1;
            break;
        }
        else if(ans[i][3]=='O' && ans[i][4]=='O'){
            ans[i][3]='+';
            ans[i][4]='+';
            f=1;
            break;
        }
    }
    if(f){
        cout<<"YES" <<endl;
        fo(i,a){
            cout<<ans[i];
            cout<<endl;
        }
    }
    else cout<<"NO" <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}