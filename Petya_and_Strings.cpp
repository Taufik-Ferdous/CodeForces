#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin>>a >>b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    
    int comp=0;
    comp = a.compare(b);

    if(comp>0)
        cout<<1;
    
    else if(comp<0)
        cout<<-1;
    
    else
        cout<<0;
        
    return 0;
}