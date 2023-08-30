#include<bits/stdc++.h>
using namespace std;

int main(){
    string in;
    cin>>in;
    int lwr=0, upr=0;
    for(int i=0; i<in.size(); i++){
        if(in[i]=='a' || in[i]=='b' || in[i]=='c' || 
        in[i]=='d' || in[i]=='e' || in[i]=='f' || 
        in[i]=='g' || in[i]=='h' || in[i]=='i' || 
        in[i]=='j' || in[i]=='k' || in[i]=='l' || 
        in[i]=='m' || in[i]=='n' || in[i]=='o' || 
        in[i]=='p' || in[i]=='q' || in[i]=='r' || 
        in[i]=='s' || in[i]=='t' || in[i]=='u' || 
        in[i]=='v' || in[i]=='w' || in[i]=='x' || 
        in[i]=='y' || in[i]=='z') lwr++;
        else upr++;
    }
    if(upr>lwr){
        for(int i=0; i<in.size(); i++){
        if(in[i]=='a') in[i]='A';
        else if(in[i]=='b') in[i]='B';
        else if(in[i]=='c') in[i]='C';
        else if(in[i]=='d') in[i]='D';
        else if(in[i]=='e') in[i]='E';
        else if(in[i]=='f') in[i]='F';
        else if(in[i]=='g') in[i]='G';
        else if(in[i]=='h') in[i]='H';
        else if(in[i]=='i') in[i]='I';
        else if(in[i]=='j') in[i]='J';
        else if(in[i]=='k') in[i]='K';
        else if(in[i]=='l') in[i]='L';
        else if(in[i]=='m') in[i]='M';
        else if(in[i]=='n') in[i]='N';
        else if(in[i]=='o') in[i]='O';
        else if(in[i]=='p') in[i]='P';
        else if(in[i]=='q') in[i]='Q';
        else if(in[i]=='r') in[i]='R';
        else if(in[i]=='s') in[i]='S';
        else if(in[i]=='t') in[i]='T';
        else if(in[i]=='u') in[i]='U';
        else if(in[i]=='v') in[i]='V';
        else if(in[i]=='w') in[i]='W';
        else if(in[i]=='x') in[i]='X';
        else if(in[i]=='y') in[i]='Y';
        else if(in[i]=='z') in[i]='Z';
        }
    }else{
        for(int i=0; i<in.size(); i++){
        if(in[i]=='A') in[i]='a';
        else if(in[i]=='B') in[i]='b';
        else if(in[i]=='C') in[i]='c';
        else if(in[i]=='D') in[i]='d';
        else if(in[i]=='E') in[i]='e';
        else if(in[i]=='F') in[i]='f';
        else if(in[i]=='G') in[i]='g';
        else if(in[i]=='H') in[i]='h';
        else if(in[i]=='I') in[i]='i';
        else if(in[i]=='J') in[i]='j';
        else if(in[i]=='K') in[i]='k';
        else if(in[i]=='L') in[i]='l';
        else if(in[i]=='M') in[i]='m';
        else if(in[i]=='N') in[i]='n';
        else if(in[i]=='O') in[i]='o';
        else if(in[i]=='P') in[i]='p';
        else if(in[i]=='Q') in[i]='q';
        else if(in[i]=='R') in[i]='r';
        else if(in[i]=='S') in[i]='s';
        else if(in[i]=='T') in[i]='t';
        else if(in[i]=='U') in[i]='u';
        else if(in[i]=='V') in[i]='v';
        else if(in[i]=='W') in[i]='w';
        else if(in[i]=='X') in[i]='x';
        else if(in[i]=='Y') in[i]='y';
        else if(in[i]=='Z') in[i]='z';
        }
    }
    cout<<in <<endl;
}