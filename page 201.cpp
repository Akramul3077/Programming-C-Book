#include<bits/stdc++.h>
using namespace std;

void sum_of_all(int akram){
    long int n,sum;
    sum=0;
    for(n=0;n<=akram;n++){

        sum+=n;
    }
    cout <<endl<<" Sum of all number from 1 to "<< akram<<" is : "<< sum <<endl<<endl<<endl;

}





int main(){
    int a;
    cout<<" Pass Your Number :"<<endl <<endl<<" Sum of all number from 1 to ";
    cin>>a;

    sum_of_all(a);

return 0;}
