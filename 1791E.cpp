#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int a;
        cin>>a;
        long long int arr[a];

        int zero=0;
        for(long long int i=0; i<a; i++){
            cin>>arr[i];
            if(arr[i]==0) zero=1;
        }

        long long int ans=0;
        for(long long int i=0; i<a; i++){
            if(arr[i]<0) ans+=(-1*arr[i]);
            else ans+=arr[i];
        }

        if(zero!=0){
            cout<<ans <<endl;
        }

        else{
            vector<long long int> pos;
            vector<long long int> neg;

            for(long long int i=0; i<a; i++){
                if(arr[i]<0) neg.push_back(arr[i]);
                else if(arr[i]>0) pos.push_back(arr[i]);
            }
            long long int ns=neg.size();
            long long int ps=pos.size();

            if(ns%2==0) cout<<ans <<endl;
            else{
                sort(neg.begin(), neg.end());
                sort(pos.begin(), pos.end());

                if(ps>0){
                    long long int aaa=abs(neg[ns-1]);
                    if(aaa < pos[0]) cout<<(ans-(2*aaa)) <<endl;
                    else cout<<ans-(2*(pos[0])) <<endl;
                }
                else cout<<ans+2*(neg[neg.size()-1]) <<endl;
            }
        }
    }
}