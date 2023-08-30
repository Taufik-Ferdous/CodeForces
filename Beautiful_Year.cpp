#include<bits/stdc++.h>
using namespace std;

bool re(int a){
    int w=0, x=0, y=0, z=0;
    z = a%10;
    a /= 10;
    y = a%10;
    a /= 10;
    x = a%10;
    a /= 10;
    w = a%10;

    if( w!=x && w!=y && w!=z &&
        x!=y && x!=z && y!=z) return true;
    return false;
    
}

void year(int a){
    while(true){
        ++a;
        if(re(a)) break;
    }
    cout<<a <<endl;
}

int main(){
    int y;
    cin>>y;
    year(y);
}