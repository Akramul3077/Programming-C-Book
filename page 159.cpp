#include <bits/stdc++.h>
using namespace std;
int main (){
    char a;
    cout <<" Enter Your character :";
    cin >>a;
    //a=getcher();
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<endl <<" Your choice is vowel."<<endl;
        break;
        default :
            cout<<endl <<" Your choice is consonant."<<endl;
        break;
    }




return 0;}
