#include<bits/stdc++.h>
using namespace std;
int main()
{
    int month, days;
    do{
    cout <<"Enter Number of Days :";
    cin >> days;
    month =days / 30;
    days =days%30;
    cout << "Months ="<< month <<endl<<"Days   ="<< days <<endl<<endl;
    cout<< "if days =( 0 ) than program end !!!!!!!!!!!!"<<endl<<endl;

    }while(days>1);
    return 0;
}
