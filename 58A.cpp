#include<bits/stdc++.h>
using namespace std;

int main(){
    string in;
    int ck = 0;
    cin>>in;

    for(int i=0; i<in.length(); i++){
        if(in[i] == 'h' && ck == 0)
            ck++;
        else if(in[i] == 'e' && ck == 1)
            ck++;
        else if(in[i] == 'l' && ck == 2)
            ck++;
        else if(in[i] == 'l' && ck == 3)
            ck++;
        else if(in[i] == 'o' && ck == 4)
            ck++;
    }

    if(ck == 5)
        cout<<"YES" <<endl;
    else
        cout<<"NO" <<endl;

    return 0;
}
