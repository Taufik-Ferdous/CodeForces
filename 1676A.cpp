#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string in, f, s;
        cin>>in;
        for(int i=0, j=3; i<=2; i++, j++){
            f += in[i];
            s += in[j];
        }
        int a=0, b=0, c1=0, c2=0;
        a = stoi(f);
        b = stoi(s);

        while(a!=0){
            c1 += a%10;
            a /= 10;
        }
        while(b!=0){
            c2 += b%10;
            b /= 10;
        }

        if(c1 == c2) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}