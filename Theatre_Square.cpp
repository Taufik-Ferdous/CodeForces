#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, sq, fst=0, sec=0, ans=0;
    cin>>a >>b >>sq;

    fst += (a/sq);
    if((a%sq)>0){
        fst++;
    }

    b -= sq;
    if(b>0){
        sec += (b/sq);

        if((a%sq)>0){
            sec++;
        }
    }

    if(fst>0){
        ans = fst + (fst*sec);
    }
    else{
        ans=sec;
    }
    cout<<ans <<endl;
    return 0;
}