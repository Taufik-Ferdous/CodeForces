#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        string com="codeforces";
        int count=0;
        for(int i=0; i<10; i++) if(a[i]!=com[i]) count++;
        cout<<count <<endl;
    }
}