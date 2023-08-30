#include<iostream>
using namespace std;
int main(){
    int a,b=0,c=0,i,j;
    cin>>a;
    int arr[a][3];
    for(i=0; i<a; i++){
        for(j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
 
    for(i=0; i<a; i++){
        for(j=0; j<3; j++){
            if(arr[i][j]>0){
                b++;
            }
 
        }
        if(b>1){
            c++;
        }
        b=0;
    }
    cout<<c <<endl;
    return 0;
}