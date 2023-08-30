/**
 *    Author: lulu
 *    Created:  16-August-2023  19:00:26
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
	ll v[3][3];

	fo(i,3) fo(j,3) cin>>v[i][j];
	
	ll r1=v[0][1]+v[0][2], c1=v[1][0]+v[2][0];
	ll r2=v[1][0]+v[1][2], c2=v[0][1]+v[2][1];
	ll r3=v[2][0]+v[2][1], c3=v[0][2]+v[1][2];

	ll m=max(r1,max(r2,r3));
	m++;

	v[0][0]=m-(v[0][1]+v[0][2]);
	v[1][1]=m-(v[1][0]+v[1][2]);
	v[2][2]=m-(v[2][0]+v[2][1]);

    while((v[0][0]+v[1][1]+v[2][2])<(v[0][0]+v[0][1]+v[0][2])){
        v[0][0]++;
        v[1][1]++;
        v[2][2]++;
    }
	
	fo(i,3){
		fo(j,3){
			cout<<v[i][j];
			if(j<2) cout<<' ';
		}
		cout<<endl;
	}
}


int main(){
	optimize();

	ll t=1;
	//cin>>t;
	while(t--)
		lulu();
}