#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, steps=0;
    cin>>a;

    while(a != 0){
        if(a >= 5){
            steps = a/5;
            a %= 5;
        }else if(a == 4){
            a -= 4;
            steps++;
        }else if(a == 3){
            a -= 3;
            steps++;
        }else if(a == 2){
            a -= 2;
            steps++;
        }else if(a==1){
            steps++;
            a = 0;
        }
    }
    cout<<steps;
    return 0;
}