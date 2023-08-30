#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int four=0, three=0, two=0, one=0;
    for (int i=0; i<n; i++){
        if(arr[i]==4)
            four++;
        else if(arr[i]==3)
            three++;
        else if(arr[i]==2)
            two++;
        else
            one++;
    }

    int ans=0;
    ans += four;

    ans += three;
    one -= three;

    int temp=0;
    while(one>0  &&  two>0){
        temp++;
        two--;
        one--;
        one--;
    }

    ans += temp;

    if(two>0){
    ans += two/2;
    ans += two%2;
    }

    if(one>0)
        ans += one;
    
    cout<<ans;
    return 0;
}