#include <bits/stdc++.h>
using namespace std;
int main(){
    int p , q , m , n ;
    cout << endl <<"How many lines :";
    cin >> p;

    cout <<endl<<endl;
    for (p=1;p<=n;p++){
        for(q=1;q<=(n-p);q++)
            cout <<"     ";
        m = p;
        for(q=1;q<=p;q++)
            cout<<"%5d",m++;
        m-=2;
        for(q=1;q<p;q++)

            cout<<"%5d",m--;
        cout<<endl;
    }



return 0;}
