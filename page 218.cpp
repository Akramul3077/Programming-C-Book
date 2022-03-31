#include<bits/stdc++.h>
using namespace std;

void print_massage(void){
    cout<<endl<<" This is print_massage() function"<<endl;

}
int square_value(int value){
    print_massage();
    return (value*value);

}


int main(){
    int value,a;
    cout <<" Enter your value :";
    cin >>a;
    value=square_value(a);
    cout<<endl<<" Square_value is :"<< value <<endl;

return 0;}
