#include<bits/stdc++.h>
using namespace std;

void prn_msg(void){
    cout <<" Sum of all number from 1 to your given number :"<<endl;

}
void added_all(long int val){
    int n;
    long int sum;
    sum=0;
    for(n=0;n<=val;n++){
        sum+=n;

    }
    cout<<" Sum of all number from 1 to "<< val <<" is " << sum <<endl;

}



int main(){
    prn_msg();
    added_all(500);


return 0;}
