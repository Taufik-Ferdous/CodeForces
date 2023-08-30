#include<bits/stdc++.h>
using namespace std;

int main(){
    string in;

    cin>>in;

    char f = in[0];

    cout<<(char) toupper(f);

    for(int i=1; i<in.length(); i++)
        cout<<in[i];
        
    return 0;
}