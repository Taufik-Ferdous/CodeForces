#include<bits/stdc++.h>
using namespace std;

int main(){
    string line, n_line;

    cin>>line;

    int len = line.length();

    int as = (len/2)+1;

    int arr[as], j=0;

    for(int i=0; i<len; i++){
        if(line[i]!='+'){
            if(line[i] == '1')
                arr[j] = 1;
            else if(line[i] == '2')
                arr[j] = 2;
            else
                arr[j] = 3;

            j++;
        }
    }

    

    sort(arr, arr+as);

    for(int i=0; i<as-1; i++){
        cout<<arr[i] <<'+';
    }
    cout<<arr[as-1];


    return 0;
}