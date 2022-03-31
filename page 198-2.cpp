#include<bits/stdc++.h>
using namespace std;
void square_number(void){
    int i,num;
    cout <<endl<<" Number square "<<endl;
    for(num=1;num<=10;num++){
        cout<<endl<<"   " << num <<"      " <<num * num <<endl;
    }

}

void coub_number(void){
    int i,num;
    cout <<endl<<" Number Cube "<<endl;
    for(num=1;num<=10;num++){
      cout<<endl<<"   "<< num <<"      "<<num * num *num<<endl;
    }

}


int main(){
    cout <<"Press any key to see square number from 1 to 10 .";
    square_number();

    cout <<"Press any key to see cubic number from 1 to 10 .";
    coub_number();
return 0;}
