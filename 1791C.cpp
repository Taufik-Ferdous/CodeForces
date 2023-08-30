#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(string &a, int s){
    int count=0;
    for(int i=0, j=s-1; i<s/2; i++, j--){
        if(a[i] != a[j]) count += 2;
        
        else break;
    }
    cout<<s-count <<endl;
}

int main(){
    int n;
    cin>>n;
    while (n--){
        string in;
        int s;
        cin>>s >>in;
        lulu(in, s);
    }
}