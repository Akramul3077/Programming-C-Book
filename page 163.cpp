#include<bits/stdc++.h>
using namespace std ;
int main (){
    long long int n ,sum ,range;
    cout <<" How many numbers to you want to calculate : ";
    cin >> range;
    cout <<endl;

    sum =0 ;
    for (n = 1 ;n <= range ; n++){
        sum+=n;


    }
        cout << endl << " sum of all number from 1 to " << range << " is :"<< sum <<endl;




return 0;}
