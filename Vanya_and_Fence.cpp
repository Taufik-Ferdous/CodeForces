#include<bits/stdc++.h>
using namespace std;

void ans(int n, int h){
    vector<int> f;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        f.push_back(x);
    }
    int w=n;
    for(int i=0; i<n; i++)
        if(f[i]>h) w++;
    cout<<w <<endl;
}

int main(){
    int n, h;
    cin>>n >>h;
    ans(n, h);
}