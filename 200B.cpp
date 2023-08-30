#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

#define ll long long
#define fo(i,n) for(ll i=0; i<n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef vector<int>      vi;
typedef vector<ll>       vll;

void solve(){
    double n;
    cin>>n;
    double ans=0;
    fo(i,n){
        ll in;
        cin>>in;
        ans+=in;
    }
    cout<<setprecision(12) <<fixed <<ans/n <<endl;
}

int main(){
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
}