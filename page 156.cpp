#include <bits/stdc++.h>
using namespace std;
int main (){
    int score , grade;
        cout <<"Enter Your Score :";
        cin >>score;
        grade=score/10;

        switch(grade)
        {
            case 10:
            case  9:
                cout<<endl <<"Your Grade is : A.";
                break;
            case  8:
                cout <<endl<<"Your Grade is : B.";
                break;
            case  7:
                cout <<endl<<"Your Grade is : C.";
                break;
            case  6:
                cout <<endl<<"Your grade is : D.";
                break;
            default:
                cout <<endl<<"Your grade is : F";
                break;

        }


return 0;}
