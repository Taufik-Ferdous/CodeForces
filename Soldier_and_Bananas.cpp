#include<bits/stdc++.h>
using namespace std;

int main(){
    int mul, mon, ban, ans=0;
    cin>>mul >>mon >>ban;

    for(int i=1; i<=ban; i++){
        ans += i*mul;
    }

    ans = ans-mon;

    if(ans<0)
        ans=0;

    cout<<ans;

    return 0;
}