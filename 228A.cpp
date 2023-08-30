#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    long long int color[4];
    cin>>color[0] >>color[1] >>color[2] >>color[3];
    sort(color, color+4);
    int count=0;
    if(color[0] == color[1]) count++;
    if(color[1] == color[2]) count++;
    if(color[2] == color[3]) count++;
    cout<<count <<endl;
}