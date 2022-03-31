#include<bits/stdc++.h>
using namespace std;
int main (){

    int a;
    cout <<"********* Exam Grade *********"<<endl;
    cout <<"------------------------------"<<endl;
    cout <<endl<<endl;

    cout <<"Enter Your Number :";
    cin >> a;

    if ((a >=80)&&(a<=100))
        cout <<endl<<"Your Grade is : A+"<<endl;

    else if (a >=70)
        cout <<endl <<"Your grade is : A"<<endl;

    else if (a>=66)
        cout <<endl<<"Your Grade is : A-"<<endl;

    else if (a>=50)
        cout <<endl<<"Your Grade is : B"<<endl;

    else if (a>=40)
        cout<<endl <<"Your Grade is : C "<<endl;

    else if (a >=33)
        cout  <<endl <<"Your Grade is : D" <<endl;
    else
        cout <<endl <<"Your Grade is  : F"<<endl;



return 0;}
