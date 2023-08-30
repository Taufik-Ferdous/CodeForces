#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

bool lulu(long long int ans, long long int k){
    if(ans%2==1 and k%2 == 0) return false;
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    while(n--){
        long long int ans, k;
        cin>>ans >>k;
        if(lulu(ans, k)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}