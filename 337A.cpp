#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int st, p;
    cin>>st >>p;
    int arr[p];
    for(int i=0; i<p; i++) cin>>arr[i];
    sort(arr, arr+p);
    int diff=-1;
    for(int j=0, i=st-1; i<p; i++, j++)
        if((arr[i]-arr[(j)])<diff || diff==-1)
            diff=arr[i]-arr[j];
    cout<<diff <<endl;
}