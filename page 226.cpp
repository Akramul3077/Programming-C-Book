#include<bits/stdc++.h>
using namespace std;
void call_by_value(int , int , int);

int main(void){
    int ratna,nipu,romi;
    ratna=1;nipu=2;romi=3;

    call_by_value(ratna,nipu,romi);
    cout<<endl<<" After function calling :   "<< ratna<<"   " << nipu<<"   "  << romi<<endl ;

return 0;}

void call_by_value(int x,int y, int z){
    cout<<endl<<" Original values are : "<< x<<"   " << y<<"   " << z<<endl ;
    x+=100;
    y+=101;
    z+=102;
    cout<<endl<<" After changing the values : "<< x<<"   " << y<<"   " << z <<endl;

}

