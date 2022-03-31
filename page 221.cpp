#include<bits/stdc++.h>
using namespace std;

int get_gcd(int x,int y){
    int gcd;
    while(y!=0){
        gcd=x%y;
        x=y;
        y=gcd;

    }
    return(x);
}


int main(){
    int gcd;
    gcd=get_gcd(150,35);
    cout<<endl<<" The Gcd of 150 and 35 is :"<< gcd<<endl;

return 0;}
