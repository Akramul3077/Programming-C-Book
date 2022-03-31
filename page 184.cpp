#include<bits/stdc++.h>
using namespace std;
int main (){
    int counter;
    cout<<endl <<" Even number "<<endl;
    cout <<"---------------"<<endl<<endl;
    for(counter=1;counter<=50;counter++){
        if (counter%2)
            continue;
        cout <<  counter<<" ";
    }
    cout<<endl<<endl<<" Odd number "<<endl;
    cout <<"---------------"<<endl<<endl;
    counter =0;
    while(counter<50){
        counter++;
        if (!(counter %2))
            continue;
        cout <<  counter<<" ";
    }
    cout<<endl<<endl;



return 0;}
